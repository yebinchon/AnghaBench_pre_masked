
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 struct i2c_client* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_1(VAR_3);
 int VAR_5 = 0, VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_5 & VAR_1)
  VAR_6 = 512;
 else if (VAR_5 & VAR_0)
  VAR_6 = 1024;
 else
  VAR_6 = 0;

 return VAR_6;
}
