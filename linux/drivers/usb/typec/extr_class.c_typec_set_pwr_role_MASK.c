
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct typec_port {int pwr_role; TYPE_1__ dev; } ;
typedef enum typec_role { ____Placeholder_typec_role } typec_role ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,char*) ;

void FUNC_2(struct typec_port *VAR_1, enum typec_role VAR_2)
{
 if (VAR_1->pwr_role == VAR_2)
  return;

 VAR_1->pwr_role = VAR_2;
 FUNC_1(&VAR_1->dev.kobj, ((void*)0), "power_role");
 FUNC_0(&VAR_1->dev.kobj, VAR_0);
}
