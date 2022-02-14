
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct i2c_adapter {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ddb_link {TYPE_2__* info; } ;
struct ddb {TYPE_1__* i2c; struct ddb_link* link; } ;
typedef int ssize_t ;
struct TYPE_4__ {int temp_num; size_t temp_bus; } ;
struct TYPE_3__ {struct i2c_adapter adap; } ;


 struct ddb* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct i2c_adapter*,int,int ,int*,int) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct ddb *VAR_3 = FUNC_0(VAR_0);
 struct ddb_link *VAR_4 = &VAR_3->link[0];
 struct i2c_adapter *VAR_5;
 int VAR_6, VAR_7;
 u8 VAR_8[2];

 if (!VAR_4->info->temp_num)
  return FUNC_2(VAR_2, "no sensor\n");
 VAR_5 = &VAR_3->i2c[VAR_4->info->temp_bus].adap;
 if (FUNC_1(VAR_5, 0x48, 0, VAR_8, 2) < 0)
  return FUNC_2(VAR_2, "read_error\n");
 VAR_6 = (VAR_8[0] << 3) | (VAR_8[1] >> 5);
 VAR_6 *= 125;
 if (VAR_4->info->temp_num == 2) {
  if (FUNC_1(VAR_5, 0x49, 0, VAR_8, 2) < 0)
   return FUNC_2(VAR_2, "read_error\n");
  VAR_7 = (VAR_8[0] << 3) | (VAR_8[1] >> 5);
  VAR_7 *= 125;
  return FUNC_2(VAR_2, "%d %d\n", VAR_6, VAR_7);
 }
 return FUNC_2(VAR_2, "%d\n", VAR_6);
}
