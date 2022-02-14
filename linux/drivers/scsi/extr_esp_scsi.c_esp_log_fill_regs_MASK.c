
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esp_event_ent {int event; int select_state; int ireg; int sreg2; int seqreg; int sreg; } ;
struct esp {int event; int select_state; int ireg; int sreg2; int seqreg; int sreg; } ;



__attribute__((used)) static void FUNC_0(struct esp *VAR_0,
         struct esp_event_ent *VAR_1)
{
 VAR_1->sreg = VAR_0->sreg;
 VAR_1->seqreg = VAR_0->seqreg;
 VAR_1->sreg2 = VAR_0->sreg2;
 VAR_1->ireg = VAR_0->ireg;
 VAR_1->select_state = VAR_0->select_state;
 VAR_1->event = VAR_0->event;
}
