
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct mwifiex_private {int adapter; int netdev; int bss_cfg; scalar_t__ ap_11n_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct mwifiex_private*) ;
 int FUNC_2 (int ,int ,char*) ;
 scalar_t__ FUNC_3 (struct mwifiex_private*) ;
 struct mwifiex_private* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct mwifiex_private*,int ,int ,int ,int *,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct wiphy *VAR_4, struct net_device *VAR_5)
{
 struct mwifiex_private *VAR_6 = FUNC_4(VAR_5);

 FUNC_1(VAR_6);

 if (FUNC_3(VAR_6))
  FUNC_2(VAR_6->adapter, VAR_0,
       "Failed to delete mgmt IEs!\n");

 VAR_6->ap_11n_enabled = 0;
 FUNC_0(&VAR_6->bss_cfg, 0, sizeof(VAR_6->bss_cfg));

 if (FUNC_5(VAR_6, VAR_3,
        VAR_2, 0, ((void*)0), 1)) {
  FUNC_2(VAR_6->adapter, VAR_0,
       "Failed to stop the BSS\n");
  return -1;
 }

 if (FUNC_5(VAR_6, VAR_1,
        VAR_2, 0, ((void*)0), 1)) {
  FUNC_2(VAR_6->adapter, VAR_0,
       "Failed to reset BSS\n");
  return -1;
 }

 if (FUNC_8(VAR_6->netdev))
  FUNC_7(VAR_6->netdev);
 FUNC_6(VAR_6->netdev, VAR_6->adapter);

 return 0;
}
