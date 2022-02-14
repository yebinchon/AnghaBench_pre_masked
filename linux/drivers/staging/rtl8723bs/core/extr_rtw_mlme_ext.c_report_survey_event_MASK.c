
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union recv_frame {int dummy; } recv_frame ;
struct cmd_obj {int cmdsz; scalar_t__ rspsz; int * rsp; struct cmd_obj* parmbuf; int cmdcode; int list; } ;
typedef struct cmd_obj u8 ;
typedef int u32 ;
struct wlan_bssid_ex {int dummy; } ;
struct survey_event {int bss; } ;
struct TYPE_2__ {int bss_cnt; } ;
struct mlme_ext_priv {TYPE_1__ sitesurvey_res; int event_seq; } ;
struct cmd_priv {int dummy; } ;
struct adapter {struct cmd_priv cmdpriv; struct mlme_ext_priv mlmeextpriv; } ;
struct C2HEvent_Header {int len; int seq; int ID; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct adapter*,union recv_frame*,struct wlan_bssid_ex*) ;
 int FUNC_5 (struct cmd_obj*) ;
 int FUNC_6 (struct adapter*,int *) ;
 int FUNC_7 (struct cmd_priv*,struct cmd_obj*) ;
 struct cmd_obj* FUNC_8 (int) ;

void FUNC_9(struct adapter *VAR_3, union recv_frame *VAR_4)
{
 struct cmd_obj *VAR_5;
 u8 *VAR_6;
 u32 VAR_7;
 struct survey_event *VAR_8;
 struct C2HEvent_Header *VAR_9;
 struct mlme_ext_priv *VAR_10;
 struct cmd_priv *VAR_11;



 if (!VAR_3)
  return;

 VAR_10 = &VAR_3->mlmeextpriv;
 VAR_11 = &VAR_3->cmdpriv;

 VAR_5 = FUNC_8(sizeof(struct cmd_obj));
 if (!VAR_5)
  return;

 VAR_7 = (sizeof(struct survey_event) + sizeof(struct C2HEvent_Header));
 VAR_6 = FUNC_8(VAR_7);
 if (!VAR_6) {
  FUNC_5(VAR_5);
  return;
 }

 FUNC_2(&VAR_5->list);

 VAR_5->cmdcode = FUNC_0(VAR_1);
 VAR_5->cmdsz = VAR_7;
 VAR_5->parmbuf = VAR_6;

 VAR_5->rsp = ((void*)0);
 VAR_5->rspsz = 0;

 VAR_9 = (struct C2HEvent_Header *)(VAR_6);
 VAR_9->len = sizeof(struct survey_event);
 VAR_9->ID = FUNC_1(VAR_2);
 VAR_9->seq = FUNC_3(&VAR_10->event_seq);

 VAR_8 = (struct survey_event *)(VAR_6 + sizeof(struct C2HEvent_Header));

 if (FUNC_4(VAR_3, VAR_4, (struct wlan_bssid_ex *)&VAR_8->bss) == VAR_0) {
  FUNC_5(VAR_5);
  FUNC_5(VAR_6);
  return;
 }

 FUNC_6(VAR_3, &VAR_8->bss);

 FUNC_7(VAR_11, VAR_5);

 VAR_10->sitesurvey_res.bss_cnt++;

 return;

}
