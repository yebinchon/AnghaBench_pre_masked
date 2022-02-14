
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int watchdog_timeo; int max_mtu; int min_mtu; int priv_flags; int * perm_addr; int * dev_addr; } ;
struct TYPE_8__ {int ena_tc; } ;
struct ice_vsi {scalar_t__ type; struct net_device* netdev; TYPE_4__ tc_cfg; TYPE_3__* port_info; int alloc_rxq; int alloc_txq; struct ice_pf* back; } ;
struct ice_pf {TYPE_1__* pdev; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
struct TYPE_6__ {int * perm_addr; } ;
struct TYPE_7__ {TYPE_2__ mac; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ice_vsi*,int ) ;
 struct ice_netdev_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct ice_vsi *VAR_7)
{
 struct ice_pf *VAR_8 = VAR_7->back;
 struct ice_netdev_priv *VAR_9;
 struct net_device *VAR_10;
 u8 VAR_11[VAR_1];
 int VAR_12;

 VAR_10 = FUNC_1(sizeof(*VAR_9), VAR_7->alloc_txq,
        VAR_7->alloc_rxq);
 if (!VAR_10)
  return -VAR_0;

 VAR_7->netdev = VAR_10;
 VAR_9 = FUNC_6(VAR_10);
 VAR_9->vsi = VAR_7;

 FUNC_3(VAR_10);

 FUNC_4(VAR_10);

 if (VAR_7->type == VAR_5) {
  FUNC_0(VAR_10, &VAR_8->pdev->dev);
  FUNC_2(VAR_11, VAR_7->port_info->mac.perm_addr);
  FUNC_2(VAR_10->dev_addr, VAR_11);
  FUNC_2(VAR_10->perm_addr, VAR_11);
 }

 VAR_10->priv_flags |= VAR_6;


 FUNC_5(VAR_7, VAR_7->tc_cfg.ena_tc);


 VAR_10->watchdog_timeo = 5 * VAR_3;

 VAR_10->min_mtu = VAR_2;
 VAR_10->max_mtu = VAR_4;

 VAR_12 = FUNC_9(VAR_7->netdev);
 if (VAR_12)
  return VAR_12;

 FUNC_7(VAR_7->netdev);


 FUNC_8(VAR_7->netdev);

 return 0;
}
