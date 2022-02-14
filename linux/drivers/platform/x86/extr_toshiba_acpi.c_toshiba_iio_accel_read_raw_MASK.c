
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_4,
          struct iio_chan_spec const *VAR_5,
          int *VAR_6, int *VAR_7, long VAR_8)
{
 int VAR_9;

 switch (VAR_8) {
 case 128:
  VAR_9 = FUNC_0(VAR_5->channel);
  if (VAR_9 == -VAR_1 || VAR_9 == -VAR_2)
   return VAR_9;

  *VAR_6 = VAR_9;

  return VAR_3;
 }

 return -VAR_0;
}
