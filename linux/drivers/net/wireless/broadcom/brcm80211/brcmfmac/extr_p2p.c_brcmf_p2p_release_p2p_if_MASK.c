
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct brcmf_if {int dummy; } ;
struct TYPE_4__ {TYPE_1__* netdev; } ;
struct brcmf_cfg80211_vif {TYPE_2__ wdev; } ;
struct brcmf_cfg80211_info {int dummy; } ;
struct TYPE_3__ {int * dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcmf_if*,char*,int *,int ) ;
 struct net_device* FUNC_1 (struct brcmf_cfg80211_info*) ;
 struct brcmf_if* FUNC_2 (struct net_device*) ;
 struct brcmf_cfg80211_info* FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct brcmf_cfg80211_vif *VAR_1)
{
 struct brcmf_cfg80211_info *VAR_2 = FUNC_3(&VAR_1->wdev);
 struct net_device *VAR_3 = FUNC_1(VAR_2);
 struct brcmf_if *VAR_4 = FUNC_2(VAR_3);
 u8 *VAR_5 = VAR_1->wdev.netdev->dev_addr;

 return FUNC_0(VAR_4, "p2p_ifdel", VAR_5, VAR_0);
}
