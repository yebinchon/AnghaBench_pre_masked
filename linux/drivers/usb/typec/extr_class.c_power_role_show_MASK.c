
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct typec_port {size_t pwr_role; TYPE_1__* cap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,char*,char*) ;
 struct typec_port* FUNC_1 (struct device*) ;
 char** VAR_2 ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
          struct device_attribute *VAR_4, char *VAR_5)
{
 struct typec_port *VAR_6 = FUNC_1(VAR_3);

 if (VAR_6->cap->type == VAR_0)
  return FUNC_0(VAR_5, "%s\n", VAR_6->pwr_role == VAR_1 ?
          "[source] sink" : "source [sink]");

 return FUNC_0(VAR_5, "[%s]\n", VAR_2[VAR_6->pwr_role]);
}
