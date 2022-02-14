
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;
struct mwifiex_private {int hs2_enabled; int cfg_bssid; TYPE_1__ wdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mwifiex_private*,int *) ;
 struct mwifiex_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct mwifiex_private*) ;

__attribute__((used)) static int
FUNC_5(struct wiphy *VAR_1, struct net_device *VAR_2,
       u16 VAR_3)
{
 struct mwifiex_private *VAR_4 = FUNC_3(VAR_2);

 if (!FUNC_4(VAR_4))
  FUNC_0(VAR_4->wdev.wiphy, 0);

 if (FUNC_2(VAR_4, ((void*)0)))
  return -VAR_0;

 FUNC_1(VAR_4->cfg_bssid);
 VAR_4->hs2_enabled = 0;

 return 0;
}
