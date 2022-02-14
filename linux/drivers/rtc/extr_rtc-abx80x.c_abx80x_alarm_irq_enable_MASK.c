
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3, unsigned int VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;

 if (VAR_4)
  VAR_6 = FUNC_0(VAR_5, VAR_2,
      (VAR_1 |
       VAR_0));
 else
  VAR_6 = FUNC_0(VAR_5, VAR_2,
      VAR_1);
 return VAR_6;
}
