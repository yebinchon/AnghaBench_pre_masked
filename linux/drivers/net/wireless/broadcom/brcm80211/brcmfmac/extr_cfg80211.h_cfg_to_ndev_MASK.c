
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct brcmf_cfg80211_info {int pub; } ;
struct TYPE_2__ {struct net_device* ndev; } ;


 TYPE_1__* FUNC_0 (int ,int ) ;

__attribute__((used)) static inline
struct net_device *FUNC_1(struct brcmf_cfg80211_info *VAR_0)
{
 return FUNC_0(VAR_0->pub, 0)->ndev;
}
