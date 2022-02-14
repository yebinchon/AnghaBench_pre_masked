
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_eee {int supported; int advertised; int lp_advertised; int eee_enabled; int tx_lpi_enabled; int eee_active; } ;
struct TYPE_4__ {scalar_t__ eee_speeds; } ;
struct aq_nic_s {TYPE_2__ aq_nic_cfg; int fwreq_mutex; int aq_hw; TYPE_1__* aq_fw_ops; } ;
struct TYPE_3__ {int (* get_eee_rate ) (int ,int *,int *) ;} ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct aq_nic_s* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, struct ethtool_eee *VAR_2)
{
 struct aq_nic_s *VAR_3 = FUNC_3(VAR_1);
 u32 VAR_4, VAR_5;
 int VAR_6 = 0;

 if (!VAR_3->aq_fw_ops->get_eee_rate)
  return -VAR_0;

 FUNC_1(&VAR_3->fwreq_mutex);
 VAR_6 = VAR_3->aq_fw_ops->get_eee_rate(VAR_3->aq_hw, &VAR_4,
           &VAR_5);
 FUNC_2(&VAR_3->fwreq_mutex);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_2->supported = FUNC_0(VAR_5);

 if (VAR_3->aq_nic_cfg.eee_speeds)
  VAR_2->advertised = VAR_2->supported;

 VAR_2->lp_advertised = FUNC_0(VAR_4);

 VAR_2->eee_enabled = !!VAR_2->advertised;

 VAR_2->tx_lpi_enabled = VAR_2->eee_enabled;
 if (VAR_2->advertised & VAR_2->lp_advertised)
  VAR_2->eee_active = 1;

 return 0;
}
