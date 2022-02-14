
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_12__ {int param1; int param2; int cmd; } ;
struct TYPE_13__ {TYPE_5__ s; scalar_t__ u64; } ;
struct octnic_ctrl_pkt {TYPE_6__ ncmd; int cb_fn; scalar_t__ netpndev; int iq_no; } ;
struct octeon_device {scalar_t__ chip_id; scalar_t__ tx_pause; scalar_t__ rx_pause; TYPE_7__* pci_dev; } ;
struct TYPE_8__ {scalar_t__ duplex; } ;
struct TYPE_9__ {TYPE_1__ s; } ;
struct oct_link_info {TYPE_4__* txpciq; TYPE_2__ link; } ;
struct net_device {int dummy; } ;
struct lio {struct octeon_device* oct_dev; struct oct_link_info linfo; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;
struct TYPE_14__ {int dev; } ;
struct TYPE_10__ {int q_no; } ;
struct TYPE_11__ {TYPE_3__ s; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct lio* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_4 ;
 int FUNC_2 (struct octnic_ctrl_pkt*,int ,int) ;
 int FUNC_3 (struct octeon_device*,struct octnic_ctrl_pkt*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_5, struct ethtool_pauseparam *VAR_6)
{



 struct lio *VAR_7 = FUNC_0(VAR_5);
 struct octeon_device *VAR_8 = VAR_7->oct_dev;
 struct octnic_ctrl_pkt VAR_9;
 struct oct_link_info *VAR_10 = &VAR_7->linfo;

 int VAR_11 = 0;

 if (VAR_8->chip_id != VAR_2)
  return -VAR_1;

 if (VAR_10->link.s.duplex == 0) {

  if (VAR_6->rx_pause || VAR_6->tx_pause)
   return -VAR_1;
 }


 if (VAR_6->autoneg == VAR_0)
  return -VAR_1;

 FUNC_2(&VAR_9, 0, sizeof(struct octnic_ctrl_pkt));

 VAR_9.ncmd.u64 = 0;
 VAR_9.ncmd.s.cmd = VAR_3;
 VAR_9.iq_no = VAR_7->linfo.txpciq[0].s.q_no;
 VAR_9.netpndev = (u64)VAR_5;
 VAR_9.cb_fn = VAR_4;

 if (VAR_6->rx_pause) {

  VAR_9.ncmd.s.param1 = 1;
 } else {

  VAR_9.ncmd.s.param1 = 0;
 }

 if (VAR_6->tx_pause) {

  VAR_9.ncmd.s.param2 = 1;
 } else {

  VAR_9.ncmd.s.param2 = 0;
 }

 VAR_11 = FUNC_3(VAR_7->oct_dev, &VAR_9);
 if (VAR_11) {
  FUNC_1(&VAR_8->pci_dev->dev,
   "Failed to set pause parameter, ret=%d\n", VAR_11);
  return -VAR_1;
 }

 VAR_8->rx_pause = VAR_6->rx_pause;
 VAR_8->tx_pause = VAR_6->tx_pause;

 return 0;
}
