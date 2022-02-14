
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {int SetBWModeInProgress; int CurrentChannelBW; int nCur40MhzPrimeSC; TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
typedef enum ht_extchnl_offset { ____Placeholder_ht_extchnl_offset } ht_extchnl_offset ;
typedef enum ht_channel_width { ____Placeholder_ht_channel_width } ht_channel_width ;
struct TYPE_2__ {int atm_swbw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_5, enum ht_channel_width VAR_6,
   enum ht_extchnl_offset VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_2(VAR_5);


 if (VAR_8->SetBWModeInProgress)
  return;

 FUNC_1(&(VAR_8->rtllib->atm_swbw));
 VAR_8->SetBWModeInProgress = 1;

 VAR_8->CurrentChannelBW = VAR_6;

 if (VAR_7 == VAR_3)
  VAR_8->nCur40MhzPrimeSC = VAR_2;
 else if (VAR_7 == VAR_4)
  VAR_8->nCur40MhzPrimeSC = VAR_1;
 else
  VAR_8->nCur40MhzPrimeSC = VAR_0;

 FUNC_0(VAR_5);

}
