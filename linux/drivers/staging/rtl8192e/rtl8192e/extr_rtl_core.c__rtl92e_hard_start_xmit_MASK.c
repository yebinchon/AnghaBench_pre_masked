
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ cb; } ;
struct r8192_priv {TYPE_1__* rtllib; scalar_t__ bResetInProgress; int up; } ;
struct net_device {int dummy; } ;
struct cb_desc {scalar_t__ queue_index; int RATRIndex; int bTxDisableRateFallBack; int bTxUseDriverAssingedRate; int bTxEnableFwCalcDur; } ;
typedef int dev ;
struct TYPE_2__ {scalar_t__ eRFPowerState; int tx_headroom; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (struct net_device*,struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (unsigned char*,struct net_device**,int) ;
 struct r8192_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct r8192_priv *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;
 struct cb_desc *VAR_7 = (struct cb_desc *)(VAR_3->cb +
        VAR_0);
 u8 VAR_8 = VAR_7->queue_index;

 if (VAR_8 != VAR_1) {
  if ((VAR_5->rtllib->eRFPowerState == VAR_2) ||
       !VAR_5->up || VAR_5->bResetInProgress) {
   FUNC_2(VAR_3);
   return 0;
  }
 }

 FUNC_3((unsigned char *)(VAR_3->cb), &VAR_4, sizeof(VAR_4));
 if (VAR_8 == VAR_1) {
  FUNC_1(VAR_4, VAR_3);
  return 0;
 }

 VAR_7->RATRIndex = 7;
 VAR_7->bTxDisableRateFallBack = 1;
 VAR_7->bTxUseDriverAssingedRate = 1;
 VAR_7->bTxEnableFwCalcDur = 1;
 FUNC_5(VAR_3, VAR_5->rtllib->tx_headroom);
 VAR_6 = FUNC_0(VAR_4, VAR_3);
 if (VAR_6 != 0)
  FUNC_2(VAR_3);
 return VAR_6;
}
