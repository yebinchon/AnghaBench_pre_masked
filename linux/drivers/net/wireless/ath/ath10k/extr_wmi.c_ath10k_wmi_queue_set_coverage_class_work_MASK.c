
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ coverage_class; } ;
struct TYPE_5__ {TYPE_1__* hw_ops; } ;
struct ath10k {int data_lock; int set_coverage_class_work; int workqueue; TYPE_3__ fw_coverage; TYPE_2__ hw_params; } ;
struct TYPE_4__ {scalar_t__ set_coverage_class; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct ath10k *VAR_0)
{
 if (VAR_0->hw_params.hw_ops->set_coverage_class) {
  FUNC_1(&VAR_0->data_lock);






  if (VAR_0->fw_coverage.coverage_class)
   FUNC_0(VAR_0->workqueue, &VAR_0->set_coverage_class_work);

  FUNC_2(&VAR_0->data_lock);
 }
}
