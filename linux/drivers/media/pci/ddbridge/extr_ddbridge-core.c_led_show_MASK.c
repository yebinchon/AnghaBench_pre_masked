
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
struct ddb {int leds; } ;
typedef int ssize_t ;


 struct ddb* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
   struct device_attribute *VAR_1, char *VAR_2)
{
 struct ddb *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = VAR_1->attr.name[3] - 0x30;

 return FUNC_1(VAR_2, "%d\n", VAR_3->leds & (1 << VAR_4) ? 1 : 0);
}
