
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_obj {int cmdsz; scalar_t__ rspsz; int * rsp; struct cmd_obj* parmbuf; int cmdcode; int list; } ;
typedef struct cmd_obj u8 ;
typedef int u32 ;
struct wlan_bssid_ex {int dummy; } ;
struct survey_event {int bss; } ;
struct recv_frame {int dummy; } ;
struct TYPE_2__ {int bss_cnt; } ;
struct mlme_ext_priv {TYPE_1__ sitesurvey_res; int event_seq; } ;
struct cmd_priv {int dummy; } ;
struct adapter {struct cmd_priv cmdpriv; struct mlme_ext_priv mlmeextpriv; } ;
struct C2HEvent_Header {int len; int seq; int ID; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct adapter*,struct recv_frame*,struct wlan_bssid_ex*) ;
 int FUNC_3 (struct cmd_obj*) ;
 struct cmd_obj* FUNC_4 (int,int ) ;
 int FUNC_5 (struct adapter*,int *) ;
 int FUNC_6 (struct cmd_priv*,struct cmd_obj*) ;

void FUNC_7(struct adapter *VAR_4,
    struct recv_frame *VAR_5)
{
 struct cmd_obj *VAR_6;
 u8 *VAR_7;
 u32 VAR_8;
 struct survey_event *VAR_9;
 struct C2HEvent_Header *VAR_10;
 struct mlme_ext_priv *VAR_11;
 struct cmd_priv *VAR_12;

 if (!VAR_4)
  return;

 VAR_11 = &VAR_4->mlmeextpriv;
 VAR_12 = &VAR_4->cmdpriv;

 VAR_6 = FUNC_4(sizeof(struct cmd_obj), VAR_0);
 if (!VAR_6)
  return;

 VAR_8 = sizeof(struct survey_event) + sizeof(struct C2HEvent_Header);
 VAR_7 = FUNC_4(VAR_8, VAR_0);
 if (!VAR_7) {
  FUNC_3(VAR_6);
  return;
 }

 FUNC_0(&VAR_6->list);

 VAR_6->cmdcode = VAR_2;
 VAR_6->cmdsz = VAR_8;
 VAR_6->parmbuf = VAR_7;

 VAR_6->rsp = ((void*)0);
 VAR_6->rspsz = 0;

 VAR_10 = (struct C2HEvent_Header *)(VAR_7);
 VAR_10->len = sizeof(struct survey_event);
 VAR_10->ID = VAR_3;
 VAR_10->seq = FUNC_1(&VAR_11->event_seq);

 VAR_9 = (struct survey_event *)(VAR_7 + sizeof(struct C2HEvent_Header));

 if (FUNC_2(VAR_4, VAR_5, (struct wlan_bssid_ex *)&VAR_9->bss) == VAR_1) {
  FUNC_3(VAR_6);
  FUNC_3(VAR_7);
  return;
 }

 FUNC_5(VAR_4, &VAR_9->bss);

 FUNC_6(VAR_12, VAR_6);

 VAR_11->sitesurvey_res.bss_cnt++;
}
