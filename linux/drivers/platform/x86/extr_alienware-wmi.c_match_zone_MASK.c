
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct platform_zone {int location; scalar_t__ attr; } ;
struct device_attribute {int dummy; } ;
struct TYPE_2__ {size_t num_zones; } ;


 int FUNC_0 (char*,int ) ;
 TYPE_1__* VAR_0 ;
 struct platform_zone* VAR_1 ;

__attribute__((used)) static struct platform_zone *FUNC_1(struct device_attribute *VAR_2)
{
 u8 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_zones; VAR_3++) {
  if ((struct device_attribute *)VAR_1[VAR_3].attr == VAR_2) {
   FUNC_0("alienware-wmi: matched zone location: %d\n",
     VAR_1[VAR_3].location);
   return &VAR_1[VAR_3];
  }
 }
 return ((void*)0);
}
