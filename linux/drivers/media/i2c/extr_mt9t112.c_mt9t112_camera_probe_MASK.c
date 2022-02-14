
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9t112_priv {int num_formats; int subdev; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,char const*,int) ;
 int VAR_1 ;
 int FUNC_3 (int,struct i2c_client*,int) ;
 int FUNC_4 (int *,int) ;
 struct mt9t112_priv* FUNC_5 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2)
{
 struct mt9t112_priv *VAR_3 = FUNC_5(VAR_2);
 const char *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_4(&VAR_3->subdev, 1);
 if (VAR_6 < 0)
  return VAR_6;


 FUNC_3(VAR_5, VAR_2, 0x0000);

 switch (VAR_5) {
 case 0x2680:
  VAR_4 = "mt9t111";
  VAR_3->num_formats = 1;
  break;
 case 0x2682:
  VAR_4 = "mt9t112";
  VAR_3->num_formats = FUNC_0(VAR_1);
  break;
 default:
  FUNC_1(&VAR_2->dev, "Product ID error %04x\n", VAR_5);
  VAR_6 = -VAR_0;
  goto done;
 }

 FUNC_2(&VAR_2->dev, "%s chip ID %04x\n", VAR_4, VAR_5);

done:
 FUNC_4(&VAR_3->subdev, 0);

 return VAR_6;
}
