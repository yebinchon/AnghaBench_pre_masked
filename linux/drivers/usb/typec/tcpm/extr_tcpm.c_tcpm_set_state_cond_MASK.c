
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {size_t enter_state; size_t state; } ;
typedef enum tcpm_state { ____Placeholder_tcpm_state } tcpm_state ;


 int FUNC_0 (struct tcpm_port*,char*,char*,int ,int ,unsigned int,int ) ;
 int FUNC_1 (struct tcpm_port*,int,unsigned int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_2(struct tcpm_port *VAR_1, enum tcpm_state VAR_2,
    unsigned int VAR_3)
{
 if (VAR_1->enter_state == VAR_1->state)
  FUNC_1(VAR_1, VAR_2, VAR_3);
 else
  FUNC_0(VAR_1,
    "skipped %sstate change %s -> %s [%u ms], context state %s",
    VAR_3 ? "delayed " : "",
    VAR_0[VAR_1->state], VAR_0[VAR_2],
    VAR_3, VAR_0[VAR_1->enter_state]);
}
