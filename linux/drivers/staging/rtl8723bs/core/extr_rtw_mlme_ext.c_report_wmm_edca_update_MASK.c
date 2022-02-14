
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wmm_event {scalar_t__ wmm; } ;
struct mlme_ext_priv {int event_seq; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int cmdsz; scalar_t__ rspsz; int * rsp; int * parmbuf; int cmdcode; int list; } ;
struct adapter {struct cmd_priv cmdpriv; struct mlme_ext_priv mlmeextpriv; } ;
struct C2HEvent_Header {int len; int seq; int ID; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cmd_obj*) ;
 int FUNC_5 (struct cmd_priv*,struct cmd_obj*) ;
 void* FUNC_6 (int) ;

void FUNC_7(struct adapter *VAR_2)
{
 struct cmd_obj *VAR_3;
 u8 *VAR_4;
 u32 VAR_5;
 struct wmm_event *VAR_6;
 struct C2HEvent_Header *VAR_7;
 struct mlme_ext_priv *VAR_8 = &VAR_2->mlmeextpriv;
 struct cmd_priv *VAR_9 = &VAR_2->cmdpriv;

 VAR_3 = FUNC_6(sizeof(struct cmd_obj));
 if (!VAR_3)
  return;

 VAR_5 = (sizeof(struct wmm_event) + sizeof(struct C2HEvent_Header));
 VAR_4 = FUNC_6(VAR_5);
 if (!VAR_4) {
  FUNC_4(VAR_3);
  return;
 }

 FUNC_2(&VAR_3->list);

 VAR_3->cmdcode = FUNC_0(VAR_0);
 VAR_3->cmdsz = VAR_5;
 VAR_3->parmbuf = VAR_4;

 VAR_3->rsp = ((void*)0);
 VAR_3->rspsz = 0;

 VAR_7 = (struct C2HEvent_Header *)(VAR_4);
 VAR_7->len = sizeof(struct wmm_event);
 VAR_7->ID = FUNC_1(VAR_1);
 VAR_7->seq = FUNC_3(&VAR_8->event_seq);

 VAR_6 = (struct wmm_event *)(VAR_4 + sizeof(struct C2HEvent_Header));
 VAR_6->wmm = 0;

 FUNC_5(VAR_9, VAR_3);

 return;

}
