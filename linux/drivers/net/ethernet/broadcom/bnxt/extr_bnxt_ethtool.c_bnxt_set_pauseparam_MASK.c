
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ tx_pause; scalar_t__ rx_pause; scalar_t__ autoneg; } ;
struct bnxt_link_info {int autoneg; int force_link_chng; int req_flow_ctrl; } ;
struct bnxt {int hwrm_spec_code; struct bnxt_link_info link_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnxt*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bnxt*) ;
 struct bnxt* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_7,
          struct ethtool_pauseparam *VAR_8)
{
 int VAR_9 = 0;
 struct bnxt *VAR_10 = FUNC_2(VAR_7);
 struct bnxt_link_info *VAR_11 = &VAR_10->link_info;

 if (!FUNC_0(VAR_10))
  return -VAR_5;

 if (VAR_8->autoneg) {
  if (!(VAR_11->autoneg & VAR_1))
   return -VAR_4;

  VAR_11->autoneg |= VAR_0;
  if (VAR_10->hwrm_spec_code >= 0x10201)
   VAR_11->req_flow_ctrl =
    VAR_6;
 } else {



  if (VAR_11->autoneg & VAR_0)
   VAR_11->force_link_chng = 1;
  VAR_11->autoneg &= ~VAR_0;
  VAR_11->req_flow_ctrl = 0;
 }
 if (VAR_8->rx_pause)
  VAR_11->req_flow_ctrl |= VAR_2;

 if (VAR_8->tx_pause)
  VAR_11->req_flow_ctrl |= VAR_3;

 if (FUNC_3(VAR_7))
  VAR_9 = FUNC_1(VAR_10);
 return VAR_9;
}
