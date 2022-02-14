
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct ad7150_chip_info {int client; } ;


 int VAR_0 ;


 int VAR_1 ;
 int ** VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct ad7150_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
      struct iio_chan_spec const *VAR_4,
      int *VAR_5,
      int *VAR_6,
      long VAR_7)
{
 int VAR_8;
 struct ad7150_chip_info *VAR_9 = FUNC_1(VAR_3);
 int VAR_10 = VAR_4->channel;

 switch (VAR_7) {
 case 128:
  VAR_8 = FUNC_0(VAR_9->client,
            VAR_2[VAR_10][0]);
  if (VAR_8 < 0)
   return VAR_8;
  *VAR_5 = FUNC_2(VAR_8);
  return VAR_1;
 case 129:
  VAR_8 = FUNC_0(VAR_9->client,
            VAR_2[VAR_10][1]);
  if (VAR_8 < 0)
   return VAR_8;
  *VAR_5 = FUNC_2(VAR_8);
  return VAR_1;
 default:
  return -VAR_0;
 }
}
