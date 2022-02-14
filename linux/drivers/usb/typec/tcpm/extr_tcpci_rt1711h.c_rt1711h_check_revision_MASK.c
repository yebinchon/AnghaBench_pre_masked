
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_6 != VAR_2) {
  FUNC_0(&VAR_5->dev, "vid is not correct, 0x%04x\n", VAR_6);
  return -VAR_0;
 }
 VAR_6 = FUNC_1(VAR_5, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_6 != VAR_1) {
  FUNC_0(&VAR_5->dev, "pid is not correct, 0x%04x\n", VAR_6);
  return -VAR_0;
 }
 return 0;
}
