
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mt9m111 {scalar_t__ pclk_sample; int subdev; } ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {int output_fmt_ctrl2; } ;
struct TYPE_3__ {int output_fmt_ctrl2; } ;


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
 TYPE_2__ VAR_11 ;
 TYPE_1__ VAR_12 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ,int,int) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mt9m111 *VAR_13,
         u32 VAR_14)
{
 struct i2c_client *VAR_15 = FUNC_2(&VAR_13->subdev);
 u16 VAR_16, VAR_17 = VAR_3 |
  VAR_1 | VAR_4 |
  VAR_7 | VAR_6 |
  VAR_5 | VAR_8 |
  VAR_9 |
  VAR_10;
 int VAR_18;

 switch (VAR_14) {
 case 132:
  VAR_16 = VAR_3 |
   VAR_4;
  break;
 case 133:
  VAR_16 = VAR_1 | VAR_4;
  break;
 case 136:
  VAR_16 = VAR_4 | VAR_6 |
   VAR_9;
  break;
 case 137:
  VAR_16 = VAR_4 | VAR_6;
  break;
 case 134:
  VAR_16 = VAR_4 | VAR_7 |
   VAR_9;
  break;
 case 135:
  VAR_16 = VAR_4 | VAR_7;
  break;
 case 139:
  VAR_16 = VAR_4 | VAR_7 |
   VAR_10;
  break;
 case 138:
  VAR_16 = VAR_4 | VAR_7 |
   VAR_9 |
   VAR_10;
  break;
 case 131:
  VAR_16 = 0;
  break;
 case 130:
  VAR_16 = VAR_10;
  break;
 case 129:
  VAR_16 = VAR_9;
  break;
 case 128:
  VAR_16 = VAR_9 |
   VAR_10;
  break;
 default:
  FUNC_0(&VAR_15->dev, "Pixel format not handled: %x\n", VAR_14);
  return -VAR_0;
 }


 if (VAR_13->pclk_sample == 0)
  VAR_17 |= VAR_2;

 VAR_18 = FUNC_1(VAR_15, VAR_11.output_fmt_ctrl2,
          VAR_16, VAR_17);
 if (!VAR_18)
  VAR_18 = FUNC_1(VAR_15, VAR_12.output_fmt_ctrl2,
           VAR_16, VAR_17);

 return VAR_18;
}
