
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m111 {int ctx; int subdev; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct mt9m111*) ;
 int FUNC_2 (struct mt9m111*) ;
 int FUNC_3 (struct mt9m111*,int ) ;
 struct i2c_client* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mt9m111 *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_4(&VAR_0->subdev);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2)
  VAR_2 = FUNC_2(VAR_0);
 if (!VAR_2)
  VAR_2 = FUNC_3(VAR_0, VAR_0->ctx);
 if (VAR_2)
  FUNC_0(&VAR_1->dev, "mt9m111 init failed: %d\n", VAR_2);
 return VAR_2;
}
