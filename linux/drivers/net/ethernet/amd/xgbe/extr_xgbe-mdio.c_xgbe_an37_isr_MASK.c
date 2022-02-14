
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {unsigned int an_int; unsigned int an_status; TYPE_1__* vdata; int an_irq_work; int an_workqueue; } ;
struct TYPE_2__ {scalar_t__ irq_reissue_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,unsigned int) ;
 int VAR_3 ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_6(struct xgbe_prv_data *VAR_4)
{
 unsigned int VAR_5;


 FUNC_4(VAR_4);


 VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_1);
 VAR_4->an_int = VAR_5 & VAR_2;
 VAR_4->an_status = VAR_5 & ~VAR_2;

 if (VAR_4->an_int) {

  VAR_5 &= ~VAR_2;
  FUNC_1(VAR_4, VAR_0, VAR_1, VAR_5);

  FUNC_3(VAR_4->an_workqueue, &VAR_4->an_irq_work);
 } else {

  FUNC_5(VAR_4);


  if (VAR_4->vdata->irq_reissue_support)
   FUNC_2(VAR_4, VAR_3, 1 << 3);
 }
}
