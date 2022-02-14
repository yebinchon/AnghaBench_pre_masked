
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_hw_freq_seek {scalar_t__ rangelow; scalar_t__ rangehigh; scalar_t__ seek_upward; scalar_t__ wrap_around; } ;
struct TYPE_4__ {int dev; } ;
struct si470x_device {int band; int* registers; int (* set_register ) (struct si470x_device*,size_t) ;TYPE_1__ videodev; int completion; } ;
struct TYPE_5__ {scalar_t__ rangelow; scalar_t__ rangehigh; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_10 ;
 int FUNC_4 (struct si470x_device*,unsigned int*) ;
 int FUNC_5 (struct si470x_device*,int) ;
 int FUNC_6 (struct si470x_device*,unsigned int) ;
 int FUNC_7 (struct si470x_device*,size_t) ;
 int FUNC_8 (struct si470x_device*,size_t) ;
 unsigned long FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct si470x_device *VAR_11,
      const struct v4l2_hw_freq_seek *VAR_12)
{
 int VAR_13, VAR_14;
 unsigned int VAR_15;
 bool VAR_16 = 0;
 unsigned long VAR_17;


 if (VAR_12->rangelow || VAR_12->rangehigh) {
  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_9); VAR_13++) {
   if (VAR_9[VAR_13].rangelow == VAR_12->rangelow &&
       VAR_9[VAR_13].rangehigh == VAR_12->rangehigh)
    break;
  }
  if (VAR_13 == FUNC_0(VAR_9))
   return -VAR_0;
 } else
  VAR_13 = 1;

 if (VAR_11->band != VAR_13) {
  VAR_14 = FUNC_4(VAR_11, &VAR_15);
  if (VAR_14)
   return VAR_14;
  VAR_14 = FUNC_5(VAR_11, VAR_13);
  if (VAR_14)
   return VAR_14;
  VAR_14 = FUNC_6(VAR_11, VAR_15);
  if (VAR_14)
   return VAR_14;
 }


 VAR_11->registers[VAR_2] |= VAR_3;
 if (VAR_12->wrap_around)
  VAR_11->registers[VAR_2] &= ~VAR_5;
 else
  VAR_11->registers[VAR_2] |= VAR_5;
 if (VAR_12->seek_upward)
  VAR_11->registers[VAR_2] |= VAR_4;
 else
  VAR_11->registers[VAR_2] &= ~VAR_4;
 VAR_14 = VAR_11->set_register(VAR_11, VAR_2);
 if (VAR_14 < 0)
  return VAR_14;


 FUNC_3(&VAR_11->completion);
 VAR_17 = FUNC_9(&VAR_11->completion,
      FUNC_2(VAR_10));
 if (VAR_17 == 0)
  VAR_16 = 1;

 if ((VAR_11->registers[VAR_6] & VAR_8) == 0)
  FUNC_1(&VAR_11->videodev.dev, "seek does not complete\n");
 if (VAR_11->registers[VAR_6] & VAR_7)
  FUNC_1(&VAR_11->videodev.dev,
   "seek failed / band limit reached\n");


 VAR_11->registers[VAR_2] &= ~VAR_3;
 VAR_14 = VAR_11->set_register(VAR_11, VAR_2);


 if (VAR_14 == 0 && VAR_16)
  return -VAR_1;
 return VAR_14;
}
