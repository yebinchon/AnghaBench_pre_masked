
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tw9910_priv {int revision; int subdev; int * scale; int norm; TYPE_1__* info; } ;
struct i2c_client {int dev; } ;
typedef int s32 ;
struct TYPE_2__ {int buswidth; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int,int) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 struct tw9910_priv* FUNC_5 (struct i2c_client*) ;
 int * VAR_3 ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_4)
{
 struct tw9910_priv *VAR_5 = FUNC_5(VAR_4);
 s32 VAR_6;
 int VAR_7;


 if (VAR_5->info->buswidth != 16 && VAR_5->info->buswidth != 8) {
  FUNC_2(&VAR_4->dev, "bus width error\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_6(&VAR_5->subdev, 1);
 if (VAR_7 < 0)
  return VAR_7;





 VAR_6 = FUNC_4(VAR_4, VAR_1);
 VAR_5->revision = FUNC_1(VAR_6);
 VAR_6 = FUNC_0(VAR_6);

 if (VAR_6 != 0x0b || VAR_5->revision > 0x01) {
  FUNC_2(&VAR_4->dev, "Product ID error %x:%x\n",
   VAR_6, VAR_5->revision);
  VAR_7 = -VAR_0;
  goto done;
 }

 FUNC_3(&VAR_4->dev, "tw9910 Product ID %0x:%0x\n",
   VAR_6, VAR_5->revision);

 VAR_5->norm = VAR_2;
 VAR_5->scale = &VAR_3[0];

done:
 FUNC_6(&VAR_5->subdev, 0);

 return VAR_7;
}
