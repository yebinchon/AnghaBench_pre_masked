
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, unsigned int VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_3(VAR_2);
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_4, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_3)
  VAR_5 |= VAR_0;
 else
  VAR_5 &= ~VAR_0;

 VAR_6 = FUNC_2(VAR_4, VAR_1, VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_2, "Unable to enable alarm IRQ %d\n", VAR_6);
  return VAR_6;
 }
 return 0;
}
