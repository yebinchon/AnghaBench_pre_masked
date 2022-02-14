
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_hw_freq_seek {scalar_t__ rangelow; scalar_t__ rangehigh; scalar_t__ seek_upward; scalar_t__ wrap_around; scalar_t__ tuner; } ;
struct radio_tea5777 {int band; scalar_t__ freq; scalar_t__ seek_rangelow; scalar_t__ seek_rangehigh; int read_reg; int write_reg; int has_am; } ;
struct file {int f_flags; } ;
struct TYPE_3__ {scalar_t__ rangelow; scalar_t__ rangehigh; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 unsigned long VAR_12 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (struct radio_tea5777*) ;
 int FUNC_4 (struct radio_tea5777*,int) ;
 int FUNC_5 (struct radio_tea5777*,int) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 struct radio_tea5777* FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_13, void *VAR_14,
     const struct v4l2_hw_freq_seek *VAR_15)
{
 struct radio_tea5777 *VAR_16 = FUNC_7(VAR_13);
 unsigned long VAR_17;
 u32 VAR_18 = VAR_15->rangelow;
 u32 VAR_19 = VAR_15->rangehigh;
 int VAR_20, VAR_21, VAR_22;
 u32 VAR_23;

 if (VAR_15->tuner || VAR_15->wrap_around)
  return -VAR_1;

 if (VAR_13->f_flags & VAR_4)
  return -VAR_3;

 if (VAR_18 || VAR_19) {
  for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_11); VAR_20++) {
   if (VAR_20 == VAR_0 && !VAR_16->has_am)
    continue;
   if (VAR_11[VAR_20].rangelow >= VAR_18 &&
       VAR_11[VAR_20].rangehigh <= VAR_19)
    break;
  }
  if (VAR_20 == FUNC_0(VAR_11))
   return -VAR_1;

  VAR_16->band = VAR_20;
  if (VAR_16->freq < VAR_18 || VAR_16->freq > VAR_19) {
   VAR_16->freq = FUNC_1(VAR_16->freq, VAR_18,
           VAR_19);
   VAR_21 = FUNC_3(VAR_16);
   if (VAR_21)
    return VAR_21;
  }
 } else {
  VAR_18 = VAR_11[VAR_16->band].rangelow;
  VAR_19 = VAR_11[VAR_16->band].rangehigh;
 }

 VAR_22 = (VAR_16->band == VAR_0) ? (5 * 16) : (200 * 16);
 VAR_23 = VAR_16->freq;

 VAR_16->write_reg |= VAR_8;
 if (VAR_16->seek_rangelow != VAR_18) {
  VAR_16->write_reg &= ~VAR_10;
  VAR_16->freq = VAR_18;
  VAR_21 = FUNC_3(VAR_16);
  if (VAR_21)
   goto leave;
  VAR_16->seek_rangelow = VAR_18;
 }
 if (VAR_16->seek_rangehigh != VAR_19) {
  VAR_16->write_reg |= VAR_10;
  VAR_16->freq = VAR_19;
  VAR_21 = FUNC_3(VAR_16);
  if (VAR_21)
   goto leave;
  VAR_16->seek_rangehigh = VAR_19;
 }
 VAR_16->write_reg &= ~VAR_8;

 VAR_16->write_reg |= VAR_9;
 if (VAR_15->seek_upward) {
  VAR_16->write_reg |= VAR_10;
  VAR_16->freq = VAR_23 + VAR_22;
 } else {
  VAR_16->write_reg &= ~VAR_10;
  VAR_16->freq = VAR_23 - VAR_22;
 }
 VAR_21 = FUNC_3(VAR_16);
 if (VAR_21)
  goto leave;

 VAR_17 = VAR_12 + FUNC_2(5000);
 for (;;) {
  if (FUNC_6(VAR_12, VAR_17)) {
   VAR_21 = -VAR_2;
   break;
  }

  VAR_21 = FUNC_4(VAR_16, 100);
  if (VAR_21)
   break;






  VAR_16->freq = (VAR_16->read_reg & VAR_6);
  VAR_16->freq = FUNC_5(VAR_16, VAR_16->freq);

  if ((VAR_16->read_reg & VAR_7)) {
   VAR_16->write_reg &= ~VAR_9;
   return 0;
  }

  if (VAR_16->read_reg & VAR_5) {
   VAR_21 = -VAR_2;
   break;
  }


  VAR_16->read_reg = -1;
 }
leave:
 VAR_16->write_reg &= ~VAR_8;
 VAR_16->write_reg &= ~VAR_9;
 VAR_16->freq = VAR_23;
 FUNC_3(VAR_16);
 return VAR_21;
}
