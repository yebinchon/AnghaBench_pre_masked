
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;
struct mt9v032 {TYPE_1__* version; int regmap; } ;
struct i2c_client {int addr; int dev; } ;
struct TYPE_3__ {scalar_t__ version; int name; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int ,...) ;
 int FUNC_3 (struct mt9v032*) ;
 int FUNC_4 (struct mt9v032*) ;
 int FUNC_5 (struct mt9v032*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_6 (int ,int ,scalar_t__*) ;
 struct mt9v032* FUNC_7 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_8 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_8(VAR_3);
 struct mt9v032 *VAR_5 = FUNC_7(VAR_3);
 unsigned int VAR_6;
 u32 VAR_7;
 int VAR_8;

 FUNC_2(&VAR_4->dev, "Probing MT9V032 at address 0x%02x\n",
   VAR_4->addr);

 VAR_8 = FUNC_5(VAR_5);
 if (VAR_8 < 0) {
  FUNC_1(&VAR_4->dev, "MT9V032 power up failed\n");
  return VAR_8;
 }


 VAR_8 = FUNC_6(VAR_5->regmap, VAR_1, &VAR_7);

 FUNC_4(VAR_5);

 if (VAR_8 < 0) {
  FUNC_1(&VAR_4->dev, "Failed reading chip version\n");
  return VAR_8;
 }

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); ++VAR_6) {
  if (VAR_2[VAR_6].version == VAR_7) {
   VAR_5->version = &VAR_2[VAR_6];
   break;
  }
 }

 if (VAR_5->version == ((void*)0)) {
  FUNC_1(&VAR_4->dev, "Unsupported chip version 0x%04x\n",
   VAR_7);
  return -VAR_0;
 }

 FUNC_2(&VAR_4->dev, "%s detected at address 0x%02x\n",
   VAR_5->version->name, VAR_4->addr);

 FUNC_3(VAR_5);

 return VAR_8;
}
