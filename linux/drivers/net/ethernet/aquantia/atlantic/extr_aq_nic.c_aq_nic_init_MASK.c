
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aq_vec_s {int dummy; } ;
struct aq_nic_s {unsigned int aq_vecs; int ndev; int aq_hw; TYPE_1__* aq_hw_ops; struct aq_vec_s** aq_vec; int fwreq_mutex; int power_state; } ;
struct TYPE_4__ {int dev_addr; } ;
struct TYPE_3__ {int (* hw_reset ) (int ) ;int (* hw_init ) (int ,int ) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct aq_nic_s*) ;
 int FUNC_1 (struct aq_vec_s*,TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

int FUNC_7(struct aq_nic_s *VAR_1)
{
 struct aq_vec_s *VAR_2 = ((void*)0);
 int VAR_3 = 0;
 unsigned int VAR_4 = 0U;

 VAR_1->power_state = VAR_0;
 FUNC_2(&VAR_1->fwreq_mutex);
 VAR_3 = VAR_1->aq_hw_ops->hw_reset(VAR_1->aq_hw);
 FUNC_3(&VAR_1->fwreq_mutex);
 if (VAR_3 < 0)
  goto err_exit;

 VAR_3 = VAR_1->aq_hw_ops->hw_init(VAR_1->aq_hw,
           FUNC_0(VAR_1)->dev_addr);
 if (VAR_3 < 0)
  goto err_exit;

 for (VAR_4 = 0U, VAR_2 = VAR_1->aq_vec[0];
  VAR_1->aq_vecs > VAR_4; ++VAR_4, VAR_2 = VAR_1->aq_vec[VAR_4])
  FUNC_1(VAR_2, VAR_1->aq_hw_ops, VAR_1->aq_hw);

 FUNC_4(VAR_1->ndev);

err_exit:
 return VAR_3;
}
