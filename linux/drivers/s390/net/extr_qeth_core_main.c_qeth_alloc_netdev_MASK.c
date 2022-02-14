
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct qeth_card {TYPE_2__* gdev; TYPE_1__ info; } ;
struct net_device {int min_mtu; int features; int vlan_features; int hw_features; int priv_flags; int * ethtool_ops; scalar_t__ mtu; scalar_t__ max_mtu; int watchdog_timeo; struct qeth_card* ml_priv; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qeth_card*) ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct net_device*,int *) ;
 struct net_device* FUNC_3 (int ) ;
 struct net_device* FUNC_4 (int ,int ,int) ;
 struct net_device* FUNC_5 (int ,char*,int ,int ) ;
 struct net_device* FUNC_6 (int ,char*,int ,int ,int ,int) ;
 int VAR_6 ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct net_device*,int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static struct net_device *FUNC_10(struct qeth_card *VAR_9)
{
 struct net_device *VAR_10;

 switch (VAR_9->info.type) {
 case 130:
  VAR_10 = FUNC_6(0, "hsi%d", VAR_2,
           VAR_6, VAR_4, 1);
  break;
 case 129:
  VAR_10 = FUNC_3(0);
  break;
 case 128:
  VAR_10 = FUNC_5(0, "osn%d", VAR_2, VAR_6);
  break;
 default:
  VAR_10 = FUNC_4(0, VAR_4, 1);
 }

 if (!VAR_10)
  return ((void*)0);

 VAR_10->ml_priv = VAR_9;
 VAR_10->watchdog_timeo = VAR_5;
 VAR_10->min_mtu = FUNC_1(VAR_9) ? 64 : 576;

 VAR_10->max_mtu = 0;
 VAR_10->mtu = 0;
 FUNC_2(VAR_10, &VAR_9->gdev->dev);
 FUNC_8(VAR_10);

 if (FUNC_1(VAR_9)) {
  VAR_10->ethtool_ops = &VAR_8;
 } else {
  VAR_10->ethtool_ops = &VAR_7;
  VAR_10->priv_flags &= ~VAR_0;
  VAR_10->hw_features |= VAR_1;
  VAR_10->vlan_features |= VAR_1;
  if (FUNC_0(VAR_9)) {
   VAR_10->features |= VAR_1;
   if (FUNC_9(VAR_10,
        VAR_3)) {
    FUNC_7(VAR_10);
    return ((void*)0);
   }
  }
 }

 return VAR_10;
}
