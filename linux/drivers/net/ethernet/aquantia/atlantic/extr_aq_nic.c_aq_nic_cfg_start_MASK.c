
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base_cpu_number; } ;
struct aq_nic_cfg_s {unsigned int is_rss; unsigned int vecs; scalar_t__ irq_type; int link_irq_vec; int features; int is_vlan_rx_strip; int is_vlan_tx_insert; int is_vlan_force_promisc; TYPE_2__* aq_hw_caps; int link_speed_msk; void* num_rss_queues; void* txds; void* rxds; int is_lro; int is_autoneg; int mtu; int flow_control; TYPE_1__ aq_rss; int rxpageorder; int rx_itr; int tx_itr; int itr; int is_polling; int tcs; } ;
struct aq_nic_s {scalar_t__ irqvecs; struct aq_nic_cfg_s aq_nic_cfg; } ;
struct TYPE_4__ {unsigned int rxds_max; unsigned int txds_max; unsigned int vecs; int hw_features; int link_speed_msk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct aq_nic_s*,void*) ;
 scalar_t__ FUNC_1 (struct aq_nic_s*) ;
 void* FUNC_2 (unsigned int,scalar_t__) ;
 scalar_t__ FUNC_3 () ;

void FUNC_4(struct aq_nic_s *VAR_21)
{
 struct aq_nic_cfg_s *VAR_22 = &VAR_21->aq_nic_cfg;

 VAR_22->tcs = VAR_11;

 VAR_22->is_polling = VAR_3;

 VAR_22->itr = VAR_18;
 VAR_22->tx_itr = VAR_20;
 VAR_22->rx_itr = VAR_19;

 VAR_22->rxpageorder = VAR_9;
 VAR_22->is_rss = VAR_4;
 VAR_22->num_rss_queues = VAR_6;
 VAR_22->aq_rss.base_cpu_number = VAR_7;
 VAR_22->flow_control = VAR_0;

 VAR_22->mtu = VAR_5;
 VAR_22->link_speed_msk = VAR_10;
 VAR_22->is_autoneg = VAR_1;

 VAR_22->is_lro = VAR_2;


 VAR_22->rxds = FUNC_2(VAR_22->aq_hw_caps->rxds_max, VAR_8);
 VAR_22->txds = FUNC_2(VAR_22->aq_hw_caps->txds_max, VAR_12);


 VAR_22->vecs = FUNC_2(VAR_22->aq_hw_caps->vecs, VAR_13);
 VAR_22->vecs = FUNC_2(VAR_22->vecs, FUNC_3());
 if (VAR_21->irqvecs > VAR_15)
  VAR_22->vecs = FUNC_2(VAR_22->vecs, VAR_21->irqvecs - VAR_15);

 if (VAR_22->vecs >= 8U)
  VAR_22->vecs = 8U;
 else if (VAR_22->vecs >= 4U)
  VAR_22->vecs = 4U;
 else if (VAR_22->vecs >= 2U)
  VAR_22->vecs = 2U;
 else
  VAR_22->vecs = 1U;

 VAR_22->num_rss_queues = FUNC_2(VAR_22->vecs, VAR_6);

 FUNC_0(VAR_21, VAR_22->num_rss_queues);

 VAR_22->irq_type = FUNC_1(VAR_21);

 if ((VAR_22->irq_type == VAR_14) ||
     (VAR_22->aq_hw_caps->vecs == 1U) ||
     (VAR_22->vecs == 1U)) {
  VAR_22->is_rss = 0U;
  VAR_22->vecs = 1U;
 }





 if (VAR_15 > 0 && VAR_22->vecs + 1 <= VAR_21->irqvecs)
  VAR_22->link_irq_vec = VAR_22->vecs;
 else
  VAR_22->link_irq_vec = 0;

 VAR_22->link_speed_msk &= VAR_22->aq_hw_caps->link_speed_msk;
 VAR_22->features = VAR_22->aq_hw_caps->hw_features;
 VAR_22->is_vlan_rx_strip = !!(VAR_22->features & VAR_16);
 VAR_22->is_vlan_tx_insert = !!(VAR_22->features & VAR_17);
 VAR_22->is_vlan_force_promisc = 1;
}
