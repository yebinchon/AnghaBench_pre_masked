
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; size_t differential; int type; } ;
struct ad7746_chip_info {int** capdac; size_t capdac_set; int lock; int client; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_1 (struct ad7746_chip_info*,int) ;
 int FUNC_2 (struct ad7746_chip_info*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int,int) ;
 struct ad7746_chip_info* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_7,
       struct iio_chan_spec const *VAR_8,
       int VAR_9,
       int VAR_10,
       long VAR_11)
{
 struct ad7746_chip_info *VAR_12 = FUNC_5(VAR_7);
 int VAR_13, VAR_14;

 FUNC_6(&VAR_12->lock);

 switch (VAR_11) {
 case 131:
  if (VAR_9 != 1) {
   VAR_13 = -VAR_6;
   goto out;
  }

  VAR_9 = (VAR_10 * 1024) / 15625;

  switch (VAR_8->type) {
  case 133:
   VAR_14 = VAR_3;
   break;
  case 128:
   VAR_14 = VAR_5;
   break;
  default:
   VAR_13 = -VAR_6;
   goto out;
  }

  VAR_13 = FUNC_4(VAR_12->client, VAR_14, VAR_9);
  if (VAR_13 < 0)
   goto out;

  VAR_13 = 0;
  break;
 case 132:
  if (VAR_9 < 0 || VAR_9 > 0xFFFF) {
   VAR_13 = -VAR_6;
   goto out;
  }
  VAR_13 = FUNC_4(VAR_12->client,
         VAR_4, VAR_9);
  if (VAR_13 < 0)
   goto out;

  VAR_13 = 0;
  break;
 case 130:
  if (VAR_9 < 0 || VAR_9 > 43008000) {
   VAR_13 = -VAR_6;
   goto out;
  }







  VAR_9 /= 338646;

  VAR_12->capdac[VAR_8->channel][VAR_8->differential] = VAR_9 > 0 ?
   FUNC_0(VAR_9) | VAR_0 : 0;

  VAR_13 = FUNC_3(VAR_12->client,
      VAR_1,
      VAR_12->capdac[VAR_8->channel][0]);
  if (VAR_13 < 0)
   goto out;
  VAR_13 = FUNC_3(VAR_12->client,
      VAR_2,
      VAR_12->capdac[VAR_8->channel][1]);
  if (VAR_13 < 0)
   goto out;

  VAR_12->capdac_set = VAR_8->channel;

  VAR_13 = 0;
  break;
 case 129:
  if (VAR_10) {
   VAR_13 = -VAR_6;
   goto out;
  }

  switch (VAR_8->type) {
  case 133:
   VAR_13 = FUNC_1(VAR_12, VAR_9);
   break;
  case 128:
   VAR_13 = FUNC_2(VAR_12, VAR_9);
   break;
  default:
   VAR_13 = -VAR_6;
  }
  break;
 default:
  VAR_13 = -VAR_6;
 }

out:
 FUNC_7(&VAR_12->lock);
 return VAR_13;
}
