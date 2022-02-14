
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int SetBWModeInProgress; int CurrentChannelBW; int nCur40MhzPrimeSC; } ;
struct net_device {int dummy; } ;
typedef enum ht_extension_chan_offset { ____Placeholder_ht_extension_chan_offset } ht_extension_chan_offset ;
typedef enum ht_channel_width { ____Placeholder_ht_channel_width } ht_channel_width ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_5,
         enum ht_channel_width VAR_6,
         enum ht_extension_chan_offset VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_0(VAR_5);

 if (VAR_8->SetBWModeInProgress)
  return;
 VAR_8->SetBWModeInProgress = 1;

 VAR_8->CurrentChannelBW = VAR_6;

 if (VAR_7 == VAR_3)
  VAR_8->nCur40MhzPrimeSC = VAR_2;
 else if (VAR_7 == VAR_4)
  VAR_8->nCur40MhzPrimeSC = VAR_1;
 else
  VAR_8->nCur40MhzPrimeSC = VAR_0;

 FUNC_1(VAR_5);

}
