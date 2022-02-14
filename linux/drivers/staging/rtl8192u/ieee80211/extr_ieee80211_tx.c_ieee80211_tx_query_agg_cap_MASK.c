
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int seq_num; } ;
struct TYPE_6__ {TYPE_1__ field; } ;
struct TYPE_7__ {TYPE_2__ start_seq_ctrl; int valid; } ;
struct tx_ts_record {int using_ba; int tx_cur_seq; TYPE_3__ tx_admitted_ba_record; } ;
struct ts_common_info {int dummy; } ;
struct sk_buff {int priority; scalar_t__ data; } ;
struct rtl_80211_hdr_1addr {int addr1; } ;
struct ieee80211_device {scalar_t__ iw_mode; int dev; int (* GetNmodeSupportBySecCfg ) (int ) ;TYPE_4__* pHTInfo; } ;
struct cb_desc {int bAMPDUEnable; int ampdu_factor; int ampdu_density; } ;
struct TYPE_8__ {int ForcedAMPDUMode; int ForcedAMPDUFactor; int ForcedMPDUDensity; int CurrentMPDUDensity; int CurrentAMPDUFactor; scalar_t__ bCurrentAMPDUEnable; int bEnableHT; int bCurrentHTSupport; } ;
typedef TYPE_4__* PRT_HIGH_THROUGHPUT ;


 int FUNC_0 (struct ieee80211_device*,struct ts_common_info**,int ,int ,int ,int) ;



 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_1 ;
 int FUNC_3 (struct ieee80211_device*,struct tx_ts_record*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_device *VAR_2,
           struct sk_buff *VAR_3, struct cb_desc *VAR_4)
{
 PRT_HIGH_THROUGHPUT VAR_5 = VAR_2->pHTInfo;
 struct tx_ts_record *VAR_6 = ((void*)0);
 struct rtl_80211_hdr_1addr *VAR_7 = (struct rtl_80211_hdr_1addr *)VAR_3->data;

 if (!VAR_5->bCurrentHTSupport || !VAR_5->bEnableHT)
  return;
 if (!FUNC_1(VAR_3->data))
  return;

 if (FUNC_4(VAR_7->addr1))
  return;

 if (!VAR_2->GetNmodeSupportBySecCfg(VAR_2->dev)) {
  return;
 }
 if (VAR_5->bCurrentAMPDUEnable) {
  if (!FUNC_0(VAR_2, (struct ts_common_info **)(&VAR_6), VAR_7->addr1, VAR_3->priority, VAR_1, 1)) {
   FUNC_5("===>can't get TS\n");
   return;
  }
  if (!VAR_6->tx_admitted_ba_record.valid) {
   FUNC_3(VAR_2, VAR_6);
   goto FORCED_AGG_SETTING;
  } else if (!VAR_6->using_ba) {
   if (FUNC_2(VAR_6->tx_admitted_ba_record.start_seq_ctrl.field.seq_num, (VAR_6->tx_cur_seq + 1) % 4096))
    VAR_6->using_ba = 1;
   else
    goto FORCED_AGG_SETTING;
  }

  if (VAR_2->iw_mode == VAR_0) {
   VAR_4->bAMPDUEnable = 1;
   VAR_4->ampdu_factor = VAR_5->CurrentAMPDUFactor;
   VAR_4->ampdu_density = VAR_5->CurrentMPDUDensity;
  }
 }
FORCED_AGG_SETTING:
 switch (VAR_5->ForcedAMPDUMode) {
  case 130:
   break;

  case 128:
   VAR_4->bAMPDUEnable = 1;
   VAR_4->ampdu_density = VAR_5->ForcedMPDUDensity;
   VAR_4->ampdu_factor = VAR_5->ForcedAMPDUFactor;
   break;

  case 129:
   VAR_4->bAMPDUEnable = 0;
   VAR_4->ampdu_density = 0;
   VAR_4->ampdu_factor = 0;
   break;

 }
  return;
}
