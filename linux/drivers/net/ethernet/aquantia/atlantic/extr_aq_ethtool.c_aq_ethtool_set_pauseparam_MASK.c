
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;
struct aq_nic_s {int fwreq_mutex; TYPE_3__* aq_hw; TYPE_2__* aq_fw_ops; } ;
struct TYPE_6__ {TYPE_1__* aq_nic_cfg; } ;
struct TYPE_5__ {int (* set_flow_control ) (TYPE_3__*) ;} ;
struct TYPE_4__ {int flow_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct aq_nic_s* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
         struct ethtool_pauseparam *VAR_5)
{
 struct aq_nic_s *VAR_6 = FUNC_2(VAR_4);
 int VAR_7 = 0;

 if (!VAR_6->aq_fw_ops->set_flow_control)
  return -VAR_3;

 if (VAR_5->autoneg == VAR_2)
  return -VAR_3;

 if (VAR_5->rx_pause)
  VAR_6->aq_hw->aq_nic_cfg->flow_control |= VAR_0;
 else
  VAR_6->aq_hw->aq_nic_cfg->flow_control &= ~VAR_0;

 if (VAR_5->tx_pause)
  VAR_6->aq_hw->aq_nic_cfg->flow_control |= VAR_1;
 else
  VAR_6->aq_hw->aq_nic_cfg->flow_control &= ~VAR_1;

 FUNC_0(&VAR_6->fwreq_mutex);
 VAR_7 = VAR_6->aq_fw_ops->set_flow_control(VAR_6->aq_hw);
 FUNC_1(&VAR_6->fwreq_mutex);

 return VAR_7;
}
