
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct powercap_zone {TYPE_2__* ops; } ;
struct powercap_control_type {TYPE_1__* ops; } ;
struct device_attribute {int dummy; } ;
struct device {scalar_t__ parent; } ;
typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ (* get_enable ) (struct powercap_zone*,int*) ;} ;
struct TYPE_3__ {scalar_t__ (* get_enable ) (struct powercap_control_type*,int*) ;} ;


 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (struct powercap_zone*,int*) ;
 scalar_t__ FUNC_2 (struct powercap_control_type*,int*) ;
 struct powercap_control_type* FUNC_3 (struct device*) ;
 struct powercap_zone* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
    struct device_attribute *VAR_1,
    char *VAR_2)
{
 bool VAR_3 = 1;


 if (VAR_0->parent) {
  struct powercap_zone *VAR_4 = FUNC_4(VAR_0);
  if (VAR_4->ops->get_enable)
   if (VAR_4->ops->get_enable(VAR_4, &VAR_3))
    VAR_3 = 0;
 } else {
  struct powercap_control_type *VAR_5 =
      FUNC_3(VAR_0);
  if (VAR_5->ops && VAR_5->ops->get_enable)
   if (VAR_5->ops->get_enable(VAR_5, &VAR_3))
    VAR_3 = 0;
 }

 return FUNC_0(VAR_2, "%d\n", VAR_3);
}
