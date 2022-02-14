
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int red; int green; int blue; } ;
struct platform_zone {TYPE_1__ colors; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct platform_zone* FUNC_0 (struct device_attribute*) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct platform_zone *VAR_3;
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == ((void*)0))
  return FUNC_1(VAR_2, "red: -1, green: -1, blue: -1\n");
 return FUNC_1(VAR_2, "red: %d, green: %d, blue: %d\n",
         VAR_3->colors.red,
         VAR_3->colors.green, VAR_3->colors.blue);

}
