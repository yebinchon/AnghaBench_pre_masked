
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int bCTSToSelfEnable; int CTSToSelfTH; } ;


 int VAR_0 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_0(VAR_1);

 VAR_2->ieee80211->bCTSToSelfEnable = 1;
 VAR_2->ieee80211->CTSToSelfTH = VAR_0;
}
