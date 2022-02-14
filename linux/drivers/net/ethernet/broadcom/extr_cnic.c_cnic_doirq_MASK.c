
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int sw_prod_idx; int ** kcq; } ;
struct TYPE_4__ {int * gen; } ;
struct cnic_local {int cnic_irq_task; TYPE_1__ kcq1; TYPE_2__ status_blk; } ;
struct cnic_dev {int flags; struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct cnic_dev *VAR_2)
{
 struct cnic_local *VAR_3 = VAR_2->cnic_priv;

 if (FUNC_2(FUNC_5(VAR_0, &VAR_2->flags))) {
  u16 VAR_4 = VAR_3->kcq1.sw_prod_idx & VAR_1;

  FUNC_3(VAR_3->status_blk.gen);
  FUNC_3(&VAR_3->kcq1.kcq[FUNC_1(VAR_4)][FUNC_0(VAR_4)]);

  FUNC_4(&VAR_3->cnic_irq_task);
 }
}
