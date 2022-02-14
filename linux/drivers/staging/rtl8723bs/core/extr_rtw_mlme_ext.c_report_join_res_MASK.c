
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wlan_bssid_ex {int dummy; } ;
struct mlme_ext_info {int network; } ;
struct mlme_ext_priv {int event_seq; struct mlme_ext_info mlmext_info; } ;
struct TYPE_2__ {int join_res; int aid; int network; } ;
struct joinbss_event {TYPE_1__ network; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int cmdsz; scalar_t__ rspsz; int * rsp; int * parmbuf; int cmdcode; int list; } ;
struct adapter {struct cmd_priv cmdpriv; struct mlme_ext_priv mlmeextpriv; } ;
struct C2HEvent_Header {int len; int seq; int ID; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cmd_obj*) ;
 int FUNC_6 (unsigned char*,int *,int) ;
 int FUNC_7 (struct cmd_priv*,struct cmd_obj*) ;
 int FUNC_8 (struct adapter*,int *) ;
 void* FUNC_9 (int) ;

void FUNC_10(struct adapter *VAR_2, int VAR_3)
{
 struct cmd_obj *VAR_4;
 u8 *VAR_5;
 u32 VAR_6;
 struct joinbss_event *VAR_7;
 struct C2HEvent_Header *VAR_8;
 struct mlme_ext_priv *VAR_9 = &VAR_2->mlmeextpriv;
 struct mlme_ext_info *VAR_10 = &(VAR_9->mlmext_info);
 struct cmd_priv *VAR_11 = &VAR_2->cmdpriv;

 VAR_4 = FUNC_9(sizeof(struct cmd_obj));
 if (!VAR_4)
  return;

 VAR_6 = (sizeof(struct joinbss_event) + sizeof(struct C2HEvent_Header));
 VAR_5 = FUNC_9(VAR_6);
 if (!VAR_5) {
  FUNC_5(VAR_4);
  return;
 }

 FUNC_3(&VAR_4->list);

 VAR_4->cmdcode = FUNC_1(VAR_1);
 VAR_4->cmdsz = VAR_6;
 VAR_4->parmbuf = VAR_5;

 VAR_4->rsp = ((void*)0);
 VAR_4->rspsz = 0;

 VAR_8 = (struct C2HEvent_Header *)(VAR_5);
 VAR_8->len = sizeof(struct joinbss_event);
 VAR_8->ID = FUNC_2(VAR_0);
 VAR_8->seq = FUNC_4(&VAR_9->event_seq);

 VAR_7 = (struct joinbss_event *)(VAR_5 + sizeof(struct C2HEvent_Header));
 FUNC_6((unsigned char *)(&(VAR_7->network.network)), &(VAR_10->network), sizeof(struct wlan_bssid_ex));
 VAR_7->network.join_res = VAR_7->network.aid = VAR_3;

 FUNC_0("report_join_res(%d)\n", VAR_3);


 FUNC_8(VAR_2, (u8 *)&VAR_7->network);


 FUNC_7(VAR_11, VAR_4);

 return;

}
