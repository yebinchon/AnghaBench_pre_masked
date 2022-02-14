
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_port {scalar_t__ vconn_role; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 struct typec_port* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct typec_port *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_3, "%s\n",
         VAR_4->vconn_role == VAR_0 ? "yes" : "no");
}
