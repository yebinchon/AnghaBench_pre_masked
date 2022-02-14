
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; int channel; size_t differential; int type; } ;
struct TYPE_2__ {int d32; int * d8; } ;
struct ad7746_chip_info {int config; int lock; int ** capdac; int client; TYPE_1__ data; } ;


 int FUNC_0 (int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

 int** VAR_14 ;
 int FUNC_1 (struct iio_dev*,struct iio_chan_spec const*) ;
 int** VAR_15 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int,int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 struct ad7746_chip_info* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct iio_dev *VAR_16,
      struct iio_chan_spec const *VAR_17,
      int *VAR_18, int *VAR_19,
      long VAR_20)
{
 struct ad7746_chip_info *VAR_21 = FUNC_6(VAR_16);
 int VAR_22, VAR_23, VAR_24;
 u8 VAR_25, VAR_26;

 FUNC_8(&VAR_21->lock);

 switch (VAR_20) {
 case 132:
 case 133:
  VAR_22 = FUNC_1(VAR_16, VAR_17);
  if (VAR_22 < 0)
   goto out;
  VAR_23 = VAR_22;

  VAR_25 = VAR_21->config | VAR_2;
  VAR_22 = FUNC_5(VAR_21->client, VAR_7,
      VAR_25);
  if (VAR_22 < 0)
   goto out;

  FUNC_7(VAR_23);


  VAR_22 = FUNC_3(VAR_21->client,
          VAR_17->address >> 8, 3,
          &VAR_21->data.d8[1]);

  if (VAR_22 < 0)
   goto out;

  *VAR_18 = (FUNC_2(VAR_21->data.d32) & 0xFFFFFF) - 0x800000;

  switch (VAR_17->type) {
  case 129:




   *VAR_18 = (*VAR_18 * 125) / 256;
   break;
  case 128:
   if (VAR_17->channel == 1)
    *VAR_18 = *VAR_18 * 6;
   break;
  default:
   break;
  }

  VAR_22 = VAR_11;
  break;
 case 135:
  switch (VAR_17->type) {
  case 137:
   VAR_26 = VAR_5;
   break;
  case 128:
   VAR_26 = VAR_8;
   break;
  default:
   VAR_22 = -VAR_9;
   goto out;
  }

  VAR_22 = FUNC_4(VAR_21->client, VAR_26);
  if (VAR_22 < 0)
   goto out;

  *VAR_18 = 1;
  *VAR_19 = (15625 * VAR_22) / 1024;

  VAR_22 = VAR_12;
  break;
 case 136:
  VAR_22 = FUNC_4(VAR_21->client,
        VAR_6);
  if (VAR_22 < 0)
   goto out;
  *VAR_18 = VAR_22;

  VAR_22 = VAR_11;
  break;
 case 134:
  *VAR_18 = FUNC_0(VAR_21->capdac[VAR_17->channel]
       [VAR_17->differential]) * 338646;

  VAR_22 = VAR_11;
  break;
 case 130:
  switch (VAR_17->type) {
  case 137:

   *VAR_18 = 0;
   *VAR_19 = 488;
   VAR_22 = VAR_13;
   break;
  case 128:

   *VAR_18 = 1170;
   *VAR_19 = 23;
   VAR_22 = VAR_10;
   break;
  default:
   VAR_22 = -VAR_9;
   break;
  }

  break;
 case 131:
  switch (VAR_17->type) {
  case 137:
   VAR_24 = (VAR_21->config & VAR_0) >>
    VAR_1;
   *VAR_18 = VAR_14[VAR_24][0];
   VAR_22 = VAR_11;
   break;
  case 128:
   VAR_24 = (VAR_21->config & VAR_3) >>
    VAR_4;
   *VAR_18 = VAR_15[VAR_24][0];
   VAR_22 = VAR_11;
   break;
  default:
   VAR_22 = -VAR_9;
  }
  break;
 default:
  VAR_22 = -VAR_9;
 }
out:
 FUNC_9(&VAR_21->lock);
 return VAR_22;
}
