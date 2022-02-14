
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; } ;
struct aq_nic_s {size_t aq_vecs; int * aq_vec; } ;
struct aq_nic_cfg_s {size_t vecs; void* txds; void* rxds; struct aq_hw_caps_s* aq_hw_caps; } ;
struct aq_hw_caps_s {int txds_max; int txds_min; int rxds_max; int rxds_min; } ;


 void* FUNC_0 (void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct aq_nic_s*) ;
 struct aq_nic_cfg_s* FUNC_2 (struct aq_nic_s*) ;
 int FUNC_3 (struct aq_nic_s*,size_t,struct aq_nic_cfg_s*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int *) ;
 void* FUNC_6 (int ,int ) ;
 void* FUNC_7 (void*,int ) ;
 struct aq_nic_s* FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_4,
       struct ethtool_ringparam *VAR_5)
{
 int VAR_6 = 0;
 bool VAR_7 = 0;
 struct aq_nic_s *VAR_8 = FUNC_8(VAR_4);
 struct aq_nic_cfg_s *VAR_9 = FUNC_2(VAR_8);
 const struct aq_hw_caps_s *VAR_10 = VAR_9->aq_hw_caps;

 if (VAR_5->rx_mini_pending || VAR_5->rx_jumbo_pending) {
  VAR_6 = -VAR_3;
  goto err_exit;
 }

 if (FUNC_9(VAR_4)) {
  VAR_7 = 1;
  FUNC_4(VAR_4);
 }

 FUNC_1(VAR_8);

 VAR_9->rxds = FUNC_6(VAR_5->rx_pending, VAR_10->rxds_min);
 VAR_9->rxds = FUNC_7(VAR_9->rxds, VAR_10->rxds_max);
 VAR_9->rxds = FUNC_0(VAR_9->rxds, VAR_0);

 VAR_9->txds = FUNC_6(VAR_5->tx_pending, VAR_10->txds_min);
 VAR_9->txds = FUNC_7(VAR_9->txds, VAR_10->txds_max);
 VAR_9->txds = FUNC_0(VAR_9->txds, VAR_1);

 for (VAR_8->aq_vecs = 0; VAR_8->aq_vecs < VAR_9->vecs;
      VAR_8->aq_vecs++) {
  VAR_8->aq_vec[VAR_8->aq_vecs] =
      FUNC_3(VAR_8, VAR_8->aq_vecs, VAR_9);
  if (FUNC_10(!VAR_8->aq_vec[VAR_8->aq_vecs])) {
   VAR_6 = -VAR_2;
   goto err_exit;
  }
 }
 if (VAR_7)
  VAR_6 = FUNC_5(VAR_4, ((void*)0));

err_exit:
 return VAR_6;
}
