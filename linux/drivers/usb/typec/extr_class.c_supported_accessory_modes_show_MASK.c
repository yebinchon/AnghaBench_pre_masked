
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct typec_port {TYPE_1__* cap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int* accessory; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (char*,char*,...) ;
 struct typec_port* FUNC_2 (struct device*) ;
 char** VAR_0 ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
           struct device_attribute *VAR_2,
           char *VAR_3)
{
 struct typec_port *VAR_4 = FUNC_2(VAR_1);
 ssize_t VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->cap->accessory); VAR_6++) {
  if (VAR_4->cap->accessory[VAR_6])
   VAR_5 += FUNC_1(VAR_3 + VAR_5, "%s ",
          VAR_0[VAR_4->cap->accessory[VAR_6]]);
 }

 if (!VAR_5)
  return FUNC_1(VAR_3, "none\n");

 VAR_3[VAR_5 - 1] = '\n';

 return VAR_5;
}
