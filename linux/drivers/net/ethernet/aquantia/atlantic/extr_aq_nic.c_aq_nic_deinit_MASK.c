
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct aq_vec_s {int dummy; } ;
struct aq_nic_s {unsigned int aq_vecs; scalar_t__ power_state; int fwreq_mutex; TYPE_3__* ndev; TYPE_4__* aq_hw; TYPE_2__* aq_fw_ops; struct aq_vec_s** aq_vec; } ;
struct TYPE_10__ {TYPE_1__* aq_nic_cfg; } ;
struct TYPE_9__ {int dev_addr; } ;
struct TYPE_8__ {int (* set_power ) (TYPE_4__*,scalar_t__,int ) ;int (* deinit ) (TYPE_4__*) ;} ;
struct TYPE_7__ {scalar_t__ wol; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct aq_vec_s*) ;
 scalar_t__ FUNC_1 (int (*) (TYPE_4__*)) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,scalar_t__,int ) ;

void FUNC_6(struct aq_nic_s *VAR_1)
{
 struct aq_vec_s *VAR_2 = ((void*)0);
 unsigned int VAR_3 = 0U;

 if (!VAR_1)
  goto err_exit;

 for (VAR_3 = 0U, VAR_2 = VAR_1->aq_vec[0];
  VAR_1->aq_vecs > VAR_3; ++VAR_3, VAR_2 = VAR_1->aq_vec[VAR_3])
  FUNC_0(VAR_2);

 if (FUNC_1(VAR_1->aq_fw_ops->deinit)) {
  FUNC_2(&VAR_1->fwreq_mutex);
  VAR_1->aq_fw_ops->deinit(VAR_1->aq_hw);
  FUNC_3(&VAR_1->fwreq_mutex);
 }

 if (VAR_1->power_state != VAR_0 ||
     VAR_1->aq_hw->aq_nic_cfg->wol)
  if (FUNC_1(VAR_1->aq_fw_ops->set_power)) {
   FUNC_2(&VAR_1->fwreq_mutex);
   VAR_1->aq_fw_ops->set_power(VAR_1->aq_hw,
         VAR_1->power_state,
         VAR_1->ndev->dev_addr);
   FUNC_3(&VAR_1->fwreq_mutex);
  }


err_exit:;
}
