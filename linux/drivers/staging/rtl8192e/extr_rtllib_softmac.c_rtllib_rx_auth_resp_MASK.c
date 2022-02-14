
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {scalar_t__ mode; } ;
struct TYPE_4__ {int rx_auth_rs_ok; int rx_auth_rs_err; } ;
struct rtllib_device {int bHalfWirelessN24GMode; int dev; TYPE_3__ current_network; int (* SetWirelessMode ) (int ,scalar_t__) ;int (* GetNmodeSupportBySecCfg ) (int ) ;TYPE_2__* pHTInfo; TYPE_1__ softmac_stats; int state; scalar_t__ open_wep; } ;
struct TYPE_5__ {int IOTAction; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct rtllib_device*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,struct sk_buff*,int **,int*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct rtllib_device*) ;
 int FUNC_4 (struct rtllib_device*) ;
 int FUNC_5 (struct rtllib_device*,int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct rtllib_device *VAR_4, struct sk_buff *VAR_5)
{
 u16 VAR_6;
 u8 *VAR_7;
 int VAR_8 = 0;
 bool VAR_9 = 1, VAR_10 = 0;

 VAR_6 = FUNC_1(VAR_4->dev, VAR_5, &VAR_7, &VAR_8);

 if (VAR_6) {
  VAR_4->softmac_stats.rx_auth_rs_err++;
  FUNC_2(VAR_4->dev,
       "Authentication response status code 0x%x",
       VAR_6);
  FUNC_3(VAR_4);
  return;
 }

 if (VAR_4->open_wep || !VAR_7) {
  VAR_4->state = VAR_3;
  VAR_4->softmac_stats.rx_auth_rs_ok++;
  if (!(VAR_4->pHTInfo->IOTAction & VAR_0)) {
   if (!VAR_4->GetNmodeSupportBySecCfg(VAR_4->dev)) {
    if (FUNC_0(VAR_4)) {
     VAR_9 = 1;
     VAR_10 = 1;
    } else {
     VAR_9 = 0;
     VAR_10 = 0;
    }
   }
  }

  if (VAR_9) {
   VAR_4->SetWirelessMode(VAR_4->dev,
           VAR_4->current_network.mode);
  } else {

   VAR_4->SetWirelessMode(VAR_4->dev, VAR_1);
  }

  if ((VAR_4->current_network.mode == VAR_2) &&
      VAR_10) {
   FUNC_2(VAR_4->dev, "======>enter half N mode\n");
   VAR_4->bHalfWirelessN24GMode = 1;
  } else {
   VAR_4->bHalfWirelessN24GMode = 0;
  }
  FUNC_4(VAR_4);
 } else {
  FUNC_5(VAR_4, VAR_7, VAR_8);
 }
}
