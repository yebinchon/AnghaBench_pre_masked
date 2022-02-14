
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stassoc_event {int cam_id; int macaddr; } ;
struct mlme_ext_priv {int event_seq; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int cmdsz; scalar_t__ rspsz; int * rsp; int * parmbuf; int cmdcode; int list; } ;
struct adapter {struct cmd_priv cmdpriv; struct mlme_ext_priv mlmeextpriv; } ;
struct C2HEvent_Header {int len; int seq; int ID; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cmd_obj*) ;
 int FUNC_6 (unsigned char*,unsigned char*,int ) ;
 int FUNC_7 (struct cmd_priv*,struct cmd_obj*) ;
 void* FUNC_8 (int) ;

void FUNC_9(struct adapter *VAR_3, unsigned char *VAR_4, int VAR_5)
{
 struct cmd_obj *VAR_6;
 u8 *VAR_7;
 u32 VAR_8;
 struct stassoc_event *VAR_9;
 struct C2HEvent_Header *VAR_10;
 struct mlme_ext_priv *VAR_11 = &VAR_3->mlmeextpriv;
 struct cmd_priv *VAR_12 = &VAR_3->cmdpriv;

 VAR_6 = FUNC_8(sizeof(struct cmd_obj));
 if (VAR_6 == ((void*)0))
  return;

 VAR_8 = (sizeof(struct stassoc_event) + sizeof(struct C2HEvent_Header));
 VAR_7 = FUNC_8(VAR_8);
 if (VAR_7 == ((void*)0)) {
  FUNC_5(VAR_6);
  return;
 }

 FUNC_3(&VAR_6->list);

 VAR_6->cmdcode = FUNC_1(VAR_2);
 VAR_6->cmdsz = VAR_8;
 VAR_6->parmbuf = VAR_7;

 VAR_6->rsp = ((void*)0);
 VAR_6->rspsz = 0;

 VAR_10 = (struct C2HEvent_Header *)(VAR_7);
 VAR_10->len = sizeof(struct stassoc_event);
 VAR_10->ID = FUNC_2(VAR_1);
 VAR_10->seq = FUNC_4(&VAR_11->event_seq);

 VAR_9 = (struct stassoc_event *)(VAR_7 + sizeof(struct C2HEvent_Header));
 FUNC_6((unsigned char *)(&(VAR_9->macaddr)), VAR_4, VAR_0);
 VAR_9->cam_id = VAR_5;

 FUNC_0("report_add_sta_event: add STA\n");

 FUNC_7(VAR_12, VAR_6);

 return;
}
