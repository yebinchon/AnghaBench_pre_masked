
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rapl_if_priv {TYPE_1__* platform_rapl_domain; int control_type; } ;
struct TYPE_2__ {int power_zone; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct rapl_if_priv *VAR_0)
{
 if (VAR_0->platform_rapl_domain) {
  FUNC_1(VAR_0->control_type,
     &VAR_0->platform_rapl_domain->power_zone);
  FUNC_0(VAR_0->platform_rapl_domain);
 }
}
