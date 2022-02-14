
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esp_event_ent {scalar_t__ type; int event; int select_state; int ireg; int sreg2; int seqreg; int sreg; int val; } ;
struct esp {int esp_event_cur; int host; struct esp_event_ent* esp_event_log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,...) ;

__attribute__((used)) static void FUNC_1(struct esp *VAR_3)
{
 int VAR_4 = VAR_3->esp_event_cur;
 int VAR_5 = VAR_4;

 FUNC_0(VAR_2, VAR_3->host, "Dumping command log\n");
 do {
  struct esp_event_ent *VAR_6 = &VAR_3->esp_event_log[VAR_4];

  FUNC_0(VAR_2, VAR_3->host,
        "ent[%d] %s val[%02x] sreg[%02x] seqreg[%02x] "
        "sreg2[%02x] ireg[%02x] ss[%02x] event[%02x]\n",
        VAR_4,
        VAR_6->type == VAR_1 ? "CMD" : "EVENT",
        VAR_6->val, VAR_6->sreg, VAR_6->seqreg,
        VAR_6->sreg2, VAR_6->ireg, VAR_6->select_state, VAR_6->event);

  VAR_4 = (VAR_4 + 1) & (VAR_0 - 1);
 } while (VAR_4 != VAR_5);
}
