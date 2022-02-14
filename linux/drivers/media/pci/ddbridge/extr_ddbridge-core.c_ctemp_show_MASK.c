
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct i2c_adapter {int dummy; } ;
struct TYPE_4__ {int* name; } ;
struct device_attribute {TYPE_2__ attr; } ;
struct device {int dummy; } ;
struct ddb {TYPE_1__* i2c; } ;
typedef int ssize_t ;
struct TYPE_3__ {struct i2c_adapter adap; } ;


 struct ddb* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct i2c_adapter*,int,int ,int*,int) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct ddb *VAR_3 = FUNC_0(VAR_0);
 struct i2c_adapter *VAR_4;
 int VAR_5;
 u8 VAR_6[2];
 int VAR_7 = VAR_1->attr.name[4] - 0x30;

 VAR_4 = &VAR_3->i2c[VAR_7].adap;
 if (!VAR_4)
  return 0;
 if (FUNC_1(VAR_4, 0x49, 0, VAR_6, 2) < 0)
  if (FUNC_1(VAR_4, 0x4d, 0, VAR_6, 2) < 0)
   return FUNC_2(VAR_2, "no sensor\n");
 VAR_5 = VAR_6[0] * 1000;
 return FUNC_2(VAR_2, "%d\n", VAR_5);
}
