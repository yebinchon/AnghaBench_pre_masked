
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {int wq; int role_sw; int typec_port; int * port_altmode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tcpm_port*) ;
 int FUNC_3 (struct tcpm_port*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct tcpm_port *VAR_0)
{
 int VAR_1;

 FUNC_3(VAR_0);
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->port_altmode); VAR_1++)
  FUNC_4(VAR_0->port_altmode[VAR_1]);
 FUNC_5(VAR_0->typec_port);
 FUNC_6(VAR_0->role_sw);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0->wq);
}
