
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct mwifiex_private {int cfg_bssid; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int ) ;
 scalar_t__ FUNC_2 (struct mwifiex_private*,int *) ;
 struct mwifiex_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct wiphy *VAR_2, struct net_device *VAR_3)
{
 struct mwifiex_private *VAR_4 = FUNC_3(VAR_3);

 FUNC_1(VAR_4->adapter, VAR_1, "info: disconnecting from essid %pM\n",
      VAR_4->cfg_bssid);
 if (FUNC_2(VAR_4, ((void*)0)))
  return -VAR_0;

 FUNC_0(VAR_4->cfg_bssid);

 return 0;
}
