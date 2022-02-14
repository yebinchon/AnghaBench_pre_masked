
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct typec_port {int port_type_lock; TYPE_1__* cap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* dr_set ) (TYPE_1__*,int) ;scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,char const*) ;
 struct typec_port* FUNC_5 (struct device*) ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
          struct device_attribute *VAR_4,
          const char *VAR_5, size_t VAR_6)
{
 struct typec_port *VAR_7 = FUNC_5(VAR_3);
 int VAR_8;

 if (!VAR_7->cap->dr_set) {
  FUNC_0(VAR_3, "data role swapping not supported\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_4(VAR_2, VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_1(&VAR_7->port_type_lock);
 if (VAR_7->cap->data != VAR_1) {
  VAR_8 = -VAR_0;
  goto unlock_and_ret;
 }

 VAR_8 = VAR_7->cap->dr_set(VAR_7->cap, VAR_8);
 if (VAR_8)
  goto unlock_and_ret;

 VAR_8 = VAR_6;
unlock_and_ret:
 FUNC_2(&VAR_7->port_type_lock);
 return VAR_8;
}
