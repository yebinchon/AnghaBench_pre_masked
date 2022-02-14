
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







 int FUNC_0 (int) ;

 int VAR_2 ;
 int VAR_3 ;

 int ** VAR_4 ;
 int FUNC_1 (struct adis*,int ,int *) ;
 int FUNC_2 (struct iio_dev*,struct iio_chan_spec const*,int ,int*) ;
 struct adis* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_5,
         struct iio_chan_spec const *VAR_6,
         int *VAR_7, int *VAR_8,
         long VAR_9)
{
 struct adis *VAR_10 = FUNC_3(VAR_5);
 int VAR_11;
 u8 VAR_12;
 s16 VAR_13;

 switch (VAR_9) {
 case 131:
  return FUNC_2(VAR_5, VAR_6,
    VAR_0, VAR_7);
 case 130:
  switch (VAR_6->type) {
  case 128:
   if (VAR_6->channel == 0) {
    *VAR_7 = 4;
    *VAR_8 = 880000;
    return VAR_3;
   }
   return -VAR_1;
  case 129:
   *VAR_7 = 244;
   *VAR_8 = 0;
   return VAR_3;
  case 136:
   *VAR_7 = 0;
   *VAR_8 = FUNC_0(51400);
   return VAR_3;
  default:
   return -VAR_1;
  }
  break;
 case 132:
  *VAR_7 = 0;
  *VAR_8 = FUNC_0(51400);
  return VAR_3;
 case 134:
  *VAR_7 = 25000 / 244 - 0x133;
  return VAR_2;
 case 135:
  VAR_12 = VAR_4[VAR_6->scan_index][0];
  VAR_11 = FUNC_1(VAR_10, VAR_12, &VAR_13);
  if (VAR_11)
   return VAR_11;
  *VAR_7 = FUNC_4(VAR_13, 9);
  return VAR_2;
 case 133:
  VAR_12 = VAR_4[VAR_6->scan_index][1];
  VAR_11 = FUNC_1(VAR_10, VAR_12, &VAR_13);
  if (VAR_11)
   return VAR_11;
  *VAR_7 = FUNC_4(VAR_13, 9);
  return VAR_2;
 }
 return -VAR_1;
}
