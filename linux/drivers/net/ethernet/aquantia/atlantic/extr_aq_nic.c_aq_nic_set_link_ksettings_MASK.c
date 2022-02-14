
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ autoneg; int speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
struct TYPE_8__ {int is_autoneg; int link_speed_msk; TYPE_2__* aq_hw_caps; } ;
struct aq_nic_s {TYPE_4__ aq_nic_cfg; int fwreq_mutex; int aq_hw; TYPE_3__* aq_fw_ops; } ;
struct TYPE_7__ {int (* set_link_speed ) (int ,int) ;} ;
struct TYPE_6__ {int link_speed_msk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct aq_nic_s *VAR_6,
         const struct ethtool_link_ksettings *VAR_7)
{
 u32 VAR_8 = 0U;
 u32 VAR_9 = 0U;
 int VAR_10 = 0;

 if (VAR_7->base.autoneg == VAR_5) {
  VAR_9 = VAR_6->aq_nic_cfg.aq_hw_caps->link_speed_msk;
  VAR_6->aq_nic_cfg.is_autoneg = 1;
 } else {
  VAR_8 = VAR_7->base.speed;

  switch (VAR_8) {
  case 132:
   VAR_9 = VAR_0;
   break;

  case 131:
   VAR_9 = VAR_2;
   break;

  case 129:
   VAR_9 = VAR_3;
   break;

  case 128:
   VAR_9 = VAR_4;
   break;

  case 130:
   VAR_9 = VAR_1;
   break;

  default:
   VAR_10 = -1;
   goto err_exit;
  break;
  }
  if (!(VAR_6->aq_nic_cfg.aq_hw_caps->link_speed_msk & VAR_9)) {
   VAR_10 = -1;
   goto err_exit;
  }

  VAR_6->aq_nic_cfg.is_autoneg = 0;
 }

 FUNC_0(&VAR_6->fwreq_mutex);
 VAR_10 = VAR_6->aq_fw_ops->set_link_speed(VAR_6->aq_hw, VAR_9);
 FUNC_1(&VAR_6->fwreq_mutex);
 if (VAR_10 < 0)
  goto err_exit;

 VAR_6->aq_nic_cfg.link_speed_msk = VAR_9;

err_exit:
 return VAR_10;
}
