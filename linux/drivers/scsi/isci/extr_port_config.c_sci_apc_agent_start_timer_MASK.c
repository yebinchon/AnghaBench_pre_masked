
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sci_port_configuration_agent {int timer_pending; int timer; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct sci_port_configuration_agent *VAR_0,
          u32 VAR_1)
{
 VAR_0->timer_pending = 1;
 FUNC_0(&VAR_0->timer, VAR_1);
}
