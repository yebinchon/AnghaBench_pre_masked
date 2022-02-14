
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct fcoe_port {int lport; } ;


 int FUNC_0 (int ,int *) ;
 struct fcoe_port* FUNC_1 (int ,struct timer_list*,int ) ;
 struct fcoe_port* VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct timer_list *VAR_2)
{
 struct fcoe_port *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);

 FUNC_0(VAR_3->lport, ((void*)0));
}
