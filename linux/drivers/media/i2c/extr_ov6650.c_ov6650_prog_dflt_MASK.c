
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ,int ,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_3->dev, "initializing\n");

 VAR_4 = FUNC_2(VAR_3, VAR_1, 0);
 if (!VAR_4)
  VAR_4 = FUNC_1(VAR_3, VAR_2, 0, VAR_0);

 return VAR_4;
}
