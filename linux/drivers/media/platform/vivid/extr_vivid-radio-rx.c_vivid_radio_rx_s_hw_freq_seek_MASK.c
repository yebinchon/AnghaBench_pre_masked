
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vivid_dev {scalar_t__ radio_rx_hw_seek_mode; int radio_rx_freq; int radio_rx_hw_seek_prog_lim; } ;
struct v4l2_hw_freq_seek {int rangelow; unsigned int rangehigh; scalar_t__ wrap_around; scalar_t__ seek_upward; scalar_t__ tuner; } ;
struct file {int f_flags; } ;
struct TYPE_2__ {int rangelow; unsigned int rangehigh; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 struct vivid_dev* FUNC_1 (struct file*) ;
 TYPE_1__* VAR_8 ;

int FUNC_2(struct file *VAR_9, void *VAR_10, const struct v4l2_hw_freq_seek *VAR_11)
{
 struct vivid_dev *VAR_12 = FUNC_1(VAR_9);
 unsigned VAR_13, VAR_14;
 unsigned VAR_15;
 unsigned VAR_16;
 unsigned VAR_17;

 if (VAR_11->tuner)
  return -VAR_1;
 if (VAR_11->wrap_around && VAR_12->radio_rx_hw_seek_mode == VAR_6)
  return -VAR_1;

 if (!VAR_11->wrap_around && VAR_12->radio_rx_hw_seek_mode == VAR_7)
  return -VAR_1;
 if (!VAR_11->rangelow ^ !VAR_11->rangehigh)
  return -VAR_1;

 if (VAR_9->f_flags & VAR_4)
  return -VAR_3;

 if (VAR_11->rangelow) {
  for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++)
   if (VAR_11->rangelow >= VAR_8[VAR_17].rangelow &&
       VAR_11->rangehigh <= VAR_8[VAR_17].rangehigh)
    break;
  if (VAR_17 == VAR_5)
   return -VAR_1;
  if (!VAR_12->radio_rx_hw_seek_prog_lim &&
      (VAR_11->rangelow != VAR_8[VAR_17].rangelow ||
       VAR_11->rangehigh != VAR_8[VAR_17].rangehigh))
   return -VAR_1;
  VAR_13 = VAR_11->rangelow;
  VAR_14 = VAR_11->rangehigh;
 } else {
  for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++)
   if (VAR_12->radio_rx_freq >= VAR_8[VAR_17].rangelow &&
       VAR_12->radio_rx_freq <= VAR_8[VAR_17].rangehigh)
    break;
  if (VAR_17 == VAR_5)
   return -VAR_1;
  VAR_13 = VAR_8[VAR_17].rangelow;
  VAR_14 = VAR_8[VAR_17].rangehigh;
 }
 VAR_16 = VAR_17 == VAR_0 ? 1600 : 16000;
 VAR_15 = FUNC_0(VAR_12->radio_rx_freq, VAR_13, VAR_14);

 if (VAR_11->seek_upward) {
  VAR_15 = VAR_16 * (VAR_15 / VAR_16) + VAR_16;
  if (VAR_15 > VAR_14) {
   if (!VAR_11->wrap_around)
    return -VAR_2;
   VAR_15 = VAR_16 * (VAR_13 / VAR_16) + VAR_16;
   if (VAR_15 >= VAR_12->radio_rx_freq)
    return -VAR_2;
  }
 } else {
  VAR_15 = VAR_16 * ((VAR_15 + VAR_16 - 1) / VAR_16) - VAR_16;
  if (VAR_15 < VAR_13) {
   if (!VAR_11->wrap_around)
    return -VAR_2;
   VAR_15 = VAR_16 * ((VAR_14 + VAR_16 - 1) / VAR_16) - VAR_16;
   if (VAR_15 <= VAR_12->radio_rx_freq)
    return -VAR_2;
  }
 }
 return 0;
}
