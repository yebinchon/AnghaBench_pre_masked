
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ice_vsi {int netdev; struct ice_pf* back; } ;
struct ice_ring_container {int itr_setting; int target_itr; TYPE_2__* ring; } ;
struct TYPE_8__ {int intrl_gran; } ;
struct ice_pf {TYPE_3__* pdev; TYPE_4__ hw; } ;
struct ethtool_coalesce {int use_adaptive_rx_coalesce; int rx_coalesce_usecs; int use_adaptive_tx_coalesce; int tx_coalesce_usecs; int tx_coalesce_usecs_high; int rx_coalesce_usecs_high; } ;
typedef enum ice_container_type { ____Placeholder_ice_container_type } ice_container_type ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {TYPE_1__* q_vector; } ;
struct TYPE_5__ {int reg_idx; int intrl; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,char const*,...) ;
 int FUNC_6 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static int
FUNC_7(enum ice_container_type VAR_4, struct ethtool_coalesce *VAR_5,
      struct ice_ring_container *VAR_6, struct ice_vsi *VAR_7)
{
 const char *VAR_8 = (VAR_4 == 129) ? "rx" : "tx";
 u32 VAR_9, VAR_10;
 struct ice_pf *VAR_11 = VAR_7->back;
 u16 VAR_12;

 if (!VAR_6->ring)
  return -VAR_0;

 switch (VAR_4) {
 case 129:
  if (VAR_5->rx_coalesce_usecs_high > VAR_3 ||
      (VAR_5->rx_coalesce_usecs_high &&
       VAR_5->rx_coalesce_usecs_high < VAR_11->hw.intrl_gran)) {
   FUNC_5(VAR_7->netdev,
        "Invalid value, %s-usecs-high valid values are 0 (disabled), %d-%d\n",
        VAR_8, VAR_11->hw.intrl_gran,
        VAR_3);
   return -VAR_0;
  }
  if (VAR_5->rx_coalesce_usecs_high != VAR_6->ring->q_vector->intrl) {
   VAR_6->ring->q_vector->intrl = VAR_5->rx_coalesce_usecs_high;
   FUNC_6(&VAR_11->hw, FUNC_0(VAR_6->ring->q_vector->reg_idx),
        FUNC_4(VAR_5->rx_coalesce_usecs_high,
         VAR_11->hw.intrl_gran));
  }

  VAR_9 = VAR_5->use_adaptive_rx_coalesce;
  VAR_10 = VAR_5->rx_coalesce_usecs;

  break;
 case 128:
  if (VAR_5->tx_coalesce_usecs_high) {
   FUNC_5(VAR_7->netdev,
        "setting %s-usecs-high is not supported\n",
        VAR_8);
   return -VAR_0;
  }

  VAR_9 = VAR_5->use_adaptive_tx_coalesce;
  VAR_10 = VAR_5->tx_coalesce_usecs;

  break;
 default:
  FUNC_3(&VAR_11->pdev->dev, "Invalid container type %d\n", VAR_4);
  return -VAR_0;
 }

 VAR_12 = VAR_6->itr_setting & ~VAR_1;
 if (VAR_10 != VAR_12 && VAR_9) {
  FUNC_5(VAR_7->netdev,
       "%s interrupt throttling cannot be changed if adaptive-%s is enabled\n",
       VAR_8, VAR_8);
  return -VAR_0;
 }

 if (VAR_10 > VAR_2) {
  FUNC_5(VAR_7->netdev,
       "Invalid value, %s-usecs range is 0-%d\n",
       VAR_8, VAR_2);
  return -VAR_0;
 }


 if (VAR_10 % 2 != 0) {
  FUNC_5(VAR_7->netdev,
       "Invalid value, %s-usecs must be even\n",
       VAR_8);
  return -VAR_0;
 }

 if (VAR_9) {
  VAR_6->itr_setting |= VAR_1;
 } else {

  VAR_6->itr_setting = VAR_10;

  VAR_6->target_itr =
   FUNC_2(FUNC_1(VAR_6->itr_setting));
 }

 return 0;
}
