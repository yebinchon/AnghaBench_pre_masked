
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct typec_port {size_t prefer_role; TYPE_1__* cap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 struct typec_port* FUNC_1 (struct device*) ;
 char** VAR_1 ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3,
      char *VAR_4)
{
 struct typec_port *VAR_5 = FUNC_1(VAR_2);

 if (VAR_5->cap->type != VAR_0)
  return 0;

 if (VAR_5->prefer_role < 0)
  return 0;

 return FUNC_0(VAR_4, "%s\n", VAR_1[VAR_5->prefer_role]);
}
