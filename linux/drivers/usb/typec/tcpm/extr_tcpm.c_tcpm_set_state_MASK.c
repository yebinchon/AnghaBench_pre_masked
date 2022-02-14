
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {size_t state; int delayed_state; unsigned int delay_ms; size_t prev_state; int state_machine; int wq; int state_machine_running; scalar_t__ delayed_runtime; } ;
typedef enum tcpm_state { ____Placeholder_tcpm_state } tcpm_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct tcpm_port*,char*,int ,int ,...) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_3(struct tcpm_port *VAR_3, enum tcpm_state VAR_4,
      unsigned int VAR_5)
{
 if (VAR_5) {
  FUNC_2(VAR_3, "pending state change %s -> %s @ %u ms",
    VAR_2[VAR_3->state], VAR_2[VAR_4],
    VAR_5);
  VAR_3->delayed_state = VAR_4;
  FUNC_0(VAR_3->wq, &VAR_3->state_machine,
     FUNC_1(VAR_5));
  VAR_3->delayed_runtime = VAR_1 + FUNC_1(VAR_5);
  VAR_3->delay_ms = VAR_5;
 } else {
  FUNC_2(VAR_3, "state change %s -> %s",
    VAR_2[VAR_3->state], VAR_2[VAR_4]);
  VAR_3->delayed_state = VAR_0;
  VAR_3->prev_state = VAR_3->state;
  VAR_3->state = VAR_4;






  if (!VAR_3->state_machine_running)
   FUNC_0(VAR_3->wq, &VAR_3->state_machine, 0);
 }
}
