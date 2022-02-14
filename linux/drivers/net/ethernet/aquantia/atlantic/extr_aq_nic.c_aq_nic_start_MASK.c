
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct aq_vec_s {int dummy; } ;
struct TYPE_8__ {int link_irq_vec; scalar_t__ is_polling; } ;
struct TYPE_7__ {int count; int ar; } ;
struct aq_nic_s {unsigned int aq_vecs; int msix_entry_mask; TYPE_4__* ndev; int aq_hw; TYPE_3__* aq_hw_ops; TYPE_2__ aq_nic_cfg; int pdev; struct aq_vec_s** aq_vec; int polling_timer; int service_timer; int service_task; int packet_filter; TYPE_1__ mc_list; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {int (* hw_multicast_list_set ) (int ,int ,int ) ;int (* hw_packet_filter_set ) (int ,int ) ;int (* hw_start ) (int ) ;int (* hw_irq_enable ) (int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct aq_nic_s*) ;
 int FUNC_4 (struct aq_nic_s*,unsigned int,int ,int ,struct aq_vec_s*,int ) ;
 int FUNC_5 (struct aq_vec_s*) ;
 int VAR_6 ;
 int FUNC_6 (struct aq_vec_s*) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (TYPE_4__*,unsigned int) ;
 int FUNC_9 (TYPE_4__*,unsigned int) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int,int *,int ,int,int ,struct aq_nic_s*) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int *,int (*) (int *),int ) ;

int FUNC_18(struct aq_nic_s *VAR_8)
{
 struct aq_vec_s *VAR_9 = ((void*)0);
 int VAR_10 = 0;
 unsigned int VAR_11 = 0U;

 VAR_10 = VAR_8->aq_hw_ops->hw_multicast_list_set(VAR_8->aq_hw,
           VAR_8->mc_list.ar,
           VAR_8->mc_list.count);
 if (VAR_10 < 0)
  goto err_exit;

 VAR_10 = VAR_8->aq_hw_ops->hw_packet_filter_set(VAR_8->aq_hw,
          VAR_8->packet_filter);
 if (VAR_10 < 0)
  goto err_exit;

 for (VAR_11 = 0U, VAR_9 = VAR_8->aq_vec[0];
  VAR_8->aq_vecs > VAR_11; ++VAR_11, VAR_9 = VAR_8->aq_vec[VAR_11]) {
  VAR_10 = FUNC_6(VAR_9);
  if (VAR_10 < 0)
   goto err_exit;
 }

 VAR_10 = VAR_8->aq_hw_ops->hw_start(VAR_8->aq_hw);
 if (VAR_10 < 0)
  goto err_exit;

 VAR_10 = FUNC_3(VAR_8);
 if (VAR_10)
  goto err_exit;

 FUNC_0(&VAR_8->service_task, VAR_5);

 FUNC_17(&VAR_8->service_timer, FUNC_2, 0);
 FUNC_2(&VAR_8->service_timer);

 if (VAR_8->aq_nic_cfg.is_polling) {
  FUNC_17(&VAR_8->polling_timer, FUNC_1, 0);
  FUNC_7(&VAR_8->polling_timer, VAR_7 +
     VAR_1);
 } else {
  for (VAR_11 = 0U, VAR_9 = VAR_8->aq_vec[0];
   VAR_8->aq_vecs > VAR_11; ++VAR_11, VAR_9 = VAR_8->aq_vec[VAR_11]) {
   VAR_10 = FUNC_4(VAR_8, VAR_11, VAR_8->ndev->name,
          VAR_6, VAR_9,
          FUNC_5(VAR_9));
   if (VAR_10 < 0)
    goto err_exit;
  }

  if (VAR_8->aq_nic_cfg.link_irq_vec) {
   int VAR_12 = FUNC_11(VAR_8->pdev,
         VAR_8->aq_nic_cfg.link_irq_vec);
   VAR_10 = FUNC_12(VAR_12, ((void*)0),
         VAR_4,
         VAR_3 | VAR_2,
         VAR_8->ndev->name, VAR_8);
   if (VAR_10 < 0)
    goto err_exit;
   VAR_8->msix_entry_mask |= (1 << VAR_8->aq_nic_cfg.link_irq_vec);
  }

  VAR_10 = VAR_8->aq_hw_ops->hw_irq_enable(VAR_8->aq_hw,
           VAR_0);
  if (VAR_10 < 0)
   goto err_exit;
 }

 VAR_10 = FUNC_9(VAR_8->ndev, VAR_8->aq_vecs);
 if (VAR_10 < 0)
  goto err_exit;

 VAR_10 = FUNC_8(VAR_8->ndev, VAR_8->aq_vecs);
 if (VAR_10 < 0)
  goto err_exit;

 FUNC_10(VAR_8->ndev);

err_exit:
 return VAR_10;
}
