
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int rx_auth_rs_err; int rx_auth_rs_ok; } ;
struct TYPE_5__ {scalar_t__ mode; } ;
struct ieee80211_device {int bHalfWirelessN24GMode; TYPE_3__ softmac_stats; int dev; TYPE_2__ current_network; int (* SetWirelessMode ) (int ,scalar_t__) ;int (* GetNmodeSupportBySecCfg ) (int ) ;TYPE_1__* pHTInfo; int state; scalar_t__ open_wep; } ;
struct TYPE_4__ {int IOTAction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (struct sk_buff*,int **,int*) ;
 int FUNC_3 (struct ieee80211_device*) ;
 int FUNC_4 (struct ieee80211_device*) ;
 int FUNC_5 (struct ieee80211_device*,int *,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_device *VAR_4,
       struct sk_buff *VAR_5)
{

 bool VAR_6 = 1, VAR_7 = 0;
 u16 VAR_8;
 u8 *VAR_9;
 int VAR_10 = 0;
 u32 VAR_11;

 VAR_8 = FUNC_2(VAR_5, &VAR_9, &VAR_10);
 if (!VAR_8) {
  if (VAR_4->open_wep || !VAR_9) {
   VAR_4->state = VAR_1;
   VAR_4->softmac_stats.rx_auth_rs_ok++;
   VAR_11 = VAR_4->pHTInfo->IOTAction;
   if (!(VAR_11 & VAR_0)) {
    if (!VAR_4->GetNmodeSupportBySecCfg(VAR_4->dev)) {

     if (FUNC_1(VAR_4)) {
      VAR_6 = 1;
      VAR_7 = 1;
     } else {
      VAR_6 = 0;
      VAR_7 = 0;
     }
     FUNC_6(VAR_4->dev, "SEC(%d, %d)\n",
       VAR_6,
       VAR_7);
    }
   }

   if (VAR_6) {

    VAR_4->SetWirelessMode(VAR_4->dev,
      VAR_4->current_network.mode);
   } else {

    VAR_4->SetWirelessMode(VAR_4->dev, VAR_2);
   }

   if (VAR_4->current_network.mode == VAR_3 &&
     VAR_7) {
    FUNC_6(VAR_4->dev, "enter half N mode\n");
    VAR_4->bHalfWirelessN24GMode = 1;
   } else {
    VAR_4->bHalfWirelessN24GMode = 0;
   }
   FUNC_4(VAR_4);
  } else {
   FUNC_5(VAR_4, VAR_9, VAR_10);
  }
 } else {
  VAR_4->softmac_stats.rx_auth_rs_err++;
  FUNC_0("Auth response status code 0x%x", VAR_8);
  FUNC_3(VAR_4);
 }
}
