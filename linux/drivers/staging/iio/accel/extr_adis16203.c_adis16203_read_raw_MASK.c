
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t scan_index; int channel; int type; } ;
struct adis {int dummy; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;

 int * VAR_4 ;
 int FUNC_0 (struct adis*,int ,int *) ;
 int FUNC_1 (struct iio_dev*,struct iio_chan_spec const*,int ,int*) ;
 struct adis* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_5,
         struct iio_chan_spec const *VAR_6,
         int *VAR_7, int *VAR_8,
         long VAR_9)
{
 struct adis *VAR_10 = FUNC_2(VAR_5);
 int VAR_11;
 u8 VAR_12;
 s16 VAR_13;

 switch (VAR_9) {
 case 132:
  return FUNC_1(VAR_5, VAR_6,
    VAR_0, VAR_7);
 case 131:
  switch (VAR_6->type) {
  case 128:
   if (VAR_6->channel == 0) {
    *VAR_7 = 1;
    *VAR_8 = 220000;
   } else {
    *VAR_7 = 0;
    *VAR_8 = 610000;
   }
   return VAR_3;
  case 129:
   *VAR_7 = -470;
   *VAR_8 = 0;
   return VAR_3;
  case 130:
   *VAR_7 = 0;
   *VAR_8 = 25000;
   return VAR_3;
  default:
   return -VAR_1;
  }
 case 133:
  *VAR_7 = 25000 / -470 - 1278;
  return VAR_2;
 case 134:
  VAR_12 = VAR_4[VAR_6->scan_index];
  VAR_11 = FUNC_0(VAR_10, VAR_12, &VAR_13);
  if (VAR_11)
   return VAR_11;
  *VAR_7 = FUNC_3(VAR_13, 13);
  return VAR_2;
 default:
  return -VAR_1;
 }
}
