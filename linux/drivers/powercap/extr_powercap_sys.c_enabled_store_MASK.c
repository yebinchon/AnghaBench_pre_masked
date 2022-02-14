
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
typedef size_t ssize_t ;
struct TYPE_4__ {int (* set_enable ) (struct powercap_zone*,int) ;} ;
struct TYPE_3__ {int (* set_enable ) (struct powercap_control_type*,int) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int*) ;
 int FUNC_1 (struct powercap_zone*,int) ;
 int FUNC_2 (struct powercap_control_type*,int) ;
 struct powercap_control_type* FUNC_3 (struct device*) ;
 struct powercap_zone* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
    struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 bool VAR_6;

 if (FUNC_0(VAR_4, &VAR_6))
  return -VAR_0;
 if (VAR_2->parent) {
  struct powercap_zone *VAR_7 = FUNC_4(VAR_2);
  if (VAR_7->ops->set_enable)
   if (!VAR_7->ops->set_enable(VAR_7, VAR_6))
    return VAR_5;
 } else {
  struct powercap_control_type *VAR_8 =
      FUNC_3(VAR_2);
  if (VAR_8->ops && VAR_8->ops->set_enable)
   if (!VAR_8->ops->set_enable(VAR_8, VAR_6))
    return VAR_5;
 }

 return -VAR_1;
}
