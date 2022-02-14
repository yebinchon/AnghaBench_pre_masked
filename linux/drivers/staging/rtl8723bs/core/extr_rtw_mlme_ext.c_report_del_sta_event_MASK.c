
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stadel_event {int mac_id; scalar_t__ rsvd; int macaddr; } ;
struct sta_info {scalar_t__ mac_id; } ;
struct mlme_ext_priv {int event_seq; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int cmdsz; scalar_t__ rspsz; int * rsp; int * parmbuf; int cmdcode; int list; } ;
struct adapter {int stapriv; struct cmd_priv cmdpriv; struct mlme_ext_priv mlmeextpriv; } ;
struct C2HEvent_Header {int len; int seq; int ID; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cmd_obj*) ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;
 int FUNC_7 (struct cmd_priv*,struct cmd_obj*) ;
 struct sta_info* FUNC_8 (int *,unsigned char*) ;
 void* FUNC_9 (int) ;

void FUNC_10(struct adapter *VAR_3, unsigned char *VAR_4, unsigned short VAR_5)
{
 struct cmd_obj *VAR_6;
 u8 *VAR_7;
 u32 VAR_8;
 struct sta_info *VAR_9;
 int VAR_10;
 struct stadel_event *VAR_11;
 struct C2HEvent_Header *VAR_12;
 struct mlme_ext_priv *VAR_13 = &VAR_3->mlmeextpriv;
 struct cmd_priv *VAR_14 = &VAR_3->cmdpriv;

 VAR_6 = FUNC_9(sizeof(struct cmd_obj));
 if (VAR_6 == ((void*)0)) {
  return;
 }

 VAR_8 = (sizeof(struct stadel_event) + sizeof(struct C2HEvent_Header));
 VAR_7 = FUNC_9(VAR_8);
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

 VAR_12 = (struct C2HEvent_Header *)(VAR_7);
 VAR_12->len = sizeof(struct stadel_event);
 VAR_12->ID = FUNC_2(VAR_1);
 VAR_12->seq = FUNC_4(&VAR_13->event_seq);

 VAR_11 = (struct stadel_event *)(VAR_7 + sizeof(struct C2HEvent_Header));
 FUNC_6((unsigned char *)(&(VAR_11->macaddr)), VAR_4, VAR_0);
 FUNC_6((unsigned char *)(VAR_11->rsvd), (unsigned char *)(&VAR_5), 2);


 VAR_9 = FUNC_8(&VAR_3->stapriv, VAR_4);
 if (VAR_9)
  VAR_10 = (int)VAR_9->mac_id;
 else
  VAR_10 = (-1);

 VAR_11->mac_id = VAR_10;

 FUNC_0("report_del_sta_event: delete STA, mac_id =%d\n", VAR_10);

 FUNC_7(VAR_14, VAR_6);

 return;
}
