
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8192_priv {int rf_type; struct ieee80211_device* ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_device {int* dot11HTOperationalRateSet; int mode; TYPE_1__* pHTInfo; } ;
struct TYPE_2__ {scalar_t__ bCurShortGI20MHz; scalar_t__ bCurTxBW40MHz; scalar_t__ bCurShortGI40MHz; int PeerMimoPs; } ;







 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int*) ;
 int FUNC_2 (struct net_device*,int ,int) ;
 int FUNC_3 (struct net_device*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4)
{
 struct r8192_priv *VAR_5 = FUNC_0(VAR_4);
 struct ieee80211_device *VAR_6 = VAR_5->ieee80211;
 u8 *VAR_7 = VAR_6->dot11HTOperationalRateSet;
 u32 VAR_8 = 0;
 u8 VAR_9 = 0;

 FUNC_1(VAR_4, (u16 *)(&VAR_8));
 VAR_8 |= (*(u16 *)(VAR_7)) << 12;
 switch (VAR_6->mode) {
 case 132:
  VAR_8 &= 0x00000FF0;
  break;
 case 131:
  VAR_8 &= 0x0000000F;
  break;
 case 130:
  VAR_8 &= 0x00000FF7;
  break;
 case 129:
 case 128:
  if (VAR_6->pHTInfo->PeerMimoPs == VAR_0) {
   VAR_8 &= 0x0007F007;
  } else {
   if (VAR_5->rf_type == VAR_2)
    VAR_8 &= 0x000FF007;
   else
    VAR_8 &= 0x0F81F007;
  }
  break;
 default:
  break;
 }
 VAR_8 &= 0x0FFFFFFF;
 if (VAR_6->pHTInfo->bCurTxBW40MHz && VAR_6->pHTInfo->bCurShortGI40MHz)
  VAR_8 |= 0x80000000;
 else if (!VAR_6->pHTInfo->bCurTxBW40MHz &&
   VAR_6->pHTInfo->bCurShortGI20MHz)
  VAR_8 |= 0x80000000;
 FUNC_3(VAR_4, VAR_1 + VAR_9 * 4, VAR_8);
 FUNC_2(VAR_4, VAR_3, 1);
}
