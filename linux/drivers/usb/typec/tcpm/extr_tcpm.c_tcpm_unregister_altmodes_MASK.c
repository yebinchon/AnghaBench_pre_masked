
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_mode_data {int altmodes; } ;
struct tcpm_port {int ** partner_altmode; struct pd_mode_data mode_data; } ;


 int FUNC_0 (struct pd_mode_data*,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tcpm_port *VAR_0)
{
 struct pd_mode_data *VAR_1 = &VAR_0->mode_data;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->altmodes; VAR_2++) {
  FUNC_1(VAR_0->partner_altmode[VAR_2]);
  VAR_0->partner_altmode[VAR_2] = ((void*)0);
 }

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
}
