
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct int3400_thermal_priv {int uuid_bitmap; int current_uuid_index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct int3400_thermal_priv* FUNC_0 (struct device*) ;
 char** VAR_0 ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct int3400_thermal_priv *VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->uuid_bitmap & (1 << VAR_4->current_uuid_index))
  return FUNC_1(VAR_3, "%s\n",
          VAR_0[VAR_4->current_uuid_index]);
 else
  return FUNC_1(VAR_3, "INVALID\n");
}
