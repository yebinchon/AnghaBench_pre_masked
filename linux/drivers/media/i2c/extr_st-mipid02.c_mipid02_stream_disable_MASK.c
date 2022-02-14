
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipid02_dev {struct i2c_client* i2c_client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct mipid02_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mipid02_dev *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_3->i2c_client;
 int VAR_5;


 VAR_5 = FUNC_1(VAR_3, VAR_0, 0);
 if (VAR_5)
  goto error;
 VAR_5 = FUNC_1(VAR_3, VAR_1, 0);
 if (VAR_5)
  goto error;
 VAR_5 = FUNC_1(VAR_3, VAR_2, 0);
 if (VAR_5)
  goto error;
error:
 if (VAR_5)
  FUNC_0(&VAR_4->dev, "failed to stream off %d", VAR_5);

 return VAR_5;
}
