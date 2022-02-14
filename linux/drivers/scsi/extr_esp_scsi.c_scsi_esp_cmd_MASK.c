
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct esp_event_ent {int val; int type; } ;
struct esp {int esp_event_cur; struct esp_event_ent* esp_event_log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct esp*,struct esp_event_ent*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct esp *VAR_3, u8 VAR_4)
{
 struct esp_event_ent *VAR_5;
 int VAR_6 = VAR_3->esp_event_cur;

 VAR_5 = &VAR_3->esp_event_log[VAR_6];
 VAR_5->type = VAR_2;
 VAR_5->val = VAR_4;
 FUNC_1(VAR_3, VAR_5);

 VAR_3->esp_event_cur = (VAR_6 + 1) & (VAR_1 - 1);

 FUNC_0("cmd[%02x]\n", VAR_4);
 FUNC_2(VAR_4, VAR_0);
}
