
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ethtool_regs {int version; } ;
struct TYPE_4__ {int aq_hw_caps; } ;
struct aq_nic_s {TYPE_2__ aq_nic_cfg; int aq_hw; TYPE_1__* aq_hw_ops; } ;
struct TYPE_3__ {int (* hw_get_regs ) (int ,int ,int *) ;} ;


 int FUNC_0 (int ,int ,int *) ;

int FUNC_1(struct aq_nic_s *VAR_0, struct ethtool_regs *VAR_1, void *VAR_2)
{
 u32 *VAR_3 = VAR_2;
 int VAR_4 = 0;

 VAR_1->version = 1;

 VAR_4 = VAR_0->aq_hw_ops->hw_get_regs(VAR_0->aq_hw,
        VAR_0->aq_nic_cfg.aq_hw_caps,
        VAR_3);
 if (VAR_4 < 0)
  goto err_exit;

err_exit:
 return VAR_4;
}
