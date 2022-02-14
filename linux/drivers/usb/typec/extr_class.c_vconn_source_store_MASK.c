
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct typec_port {TYPE_1__* cap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum typec_role { ____Placeholder_typec_role } typec_role ;
struct TYPE_2__ {int (* vconn_set ) (TYPE_1__*,int) ;int pd_revision; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (char const*,int*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 struct typec_port* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct typec_port *VAR_5 = FUNC_3(VAR_1);
 bool VAR_6;
 int VAR_7;

 if (!VAR_5->cap->pd_revision) {
  FUNC_0(VAR_1, "VCONN swap depends on USB Power Delivery\n");
  return -VAR_0;
 }

 if (!VAR_5->cap->vconn_set) {
  FUNC_0(VAR_1, "VCONN swapping not supported\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_3, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = VAR_5->cap->vconn_set(VAR_5->cap, (enum typec_role)VAR_6);
 if (VAR_7)
  return VAR_7;

 return VAR_4;
}
