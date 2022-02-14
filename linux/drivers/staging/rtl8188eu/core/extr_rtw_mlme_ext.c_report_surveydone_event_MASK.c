
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct surveydone_event {int bss_cnt; } ;
struct TYPE_2__ {int bss_cnt; } ;
struct mlme_ext_priv {TYPE_1__ sitesurvey_res; int event_seq; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int cmdsz; scalar_t__ rspsz; int * rsp; int * parmbuf; int cmdcode; int list; } ;
struct adapter {struct cmd_priv cmdpriv; struct mlme_ext_priv mlmeextpriv; } ;
struct C2HEvent_Header {int len; int seq; int ID; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cmd_obj*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct cmd_priv*,struct cmd_obj*) ;

void FUNC_6(struct adapter *VAR_3)
{
 struct cmd_obj *VAR_4;
 u8 *VAR_5;
 u32 VAR_6;
 struct surveydone_event *VAR_7;
 struct C2HEvent_Header *VAR_8;
 struct mlme_ext_priv *VAR_9 = &VAR_3->mlmeextpriv;
 struct cmd_priv *VAR_10 = &VAR_3->cmdpriv;

 VAR_4 = FUNC_4(sizeof(struct cmd_obj), VAR_0);
 if (!VAR_4)
  return;

 VAR_6 = sizeof(struct surveydone_event) + sizeof(struct C2HEvent_Header);
 VAR_5 = FUNC_4(VAR_6, VAR_0);
 if (!VAR_5) {
  FUNC_3(VAR_4);
  return;
 }

 FUNC_1(&VAR_4->list);

 VAR_4->cmdcode = VAR_1;
 VAR_4->cmdsz = VAR_6;
 VAR_4->parmbuf = VAR_5;

 VAR_4->rsp = ((void*)0);
 VAR_4->rspsz = 0;

 VAR_8 = (struct C2HEvent_Header *)(VAR_5);
 VAR_8->len = sizeof(struct surveydone_event);
 VAR_8->ID = VAR_2;
 VAR_8->seq = FUNC_2(&VAR_9->event_seq);

 VAR_7 = (struct surveydone_event *)(VAR_5 + sizeof(struct C2HEvent_Header));
 VAR_7->bss_cnt = VAR_9->sitesurvey_res.bss_cnt;

 FUNC_0("survey done event(%x)\n", VAR_7->bss_cnt);

 FUNC_5(VAR_10, VAR_4);
}
