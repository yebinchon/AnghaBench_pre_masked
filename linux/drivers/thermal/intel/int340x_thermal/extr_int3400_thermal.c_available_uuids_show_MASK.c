
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct int3400_thermal_priv {int uuid_bitmap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct int3400_thermal_priv* FUNC_0 (struct device*) ;
 char** VAR_2 ;
 scalar_t__ FUNC_1 (char*,int,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
        struct device_attribute *VAR_4,
        char *VAR_5)
{
 struct int3400_thermal_priv *VAR_6 = FUNC_0(VAR_3);
 int VAR_7;
 int VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_6->uuid_bitmap & (1 << VAR_7))
   if (VAR_1 - VAR_8 > 0)
    VAR_8 += FUNC_1(&VAR_5[VAR_8],
         VAR_1 - VAR_8,
         "%s\n",
         VAR_2[VAR_7]);
 }

 return VAR_8;
}
