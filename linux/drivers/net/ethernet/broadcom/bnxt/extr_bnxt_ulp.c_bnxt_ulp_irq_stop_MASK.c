
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_ulp_ops {int (* ulp_irq_stop ) (int ) ;} ;
struct bnxt_ulp {int handle; int ulp_ops; int msix_requested; } ;
struct bnxt_en_dev {int flags; struct bnxt_ulp* ulp_tbl; } ;
struct bnxt {struct bnxt_en_dev* edev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct bnxt_en_dev*,size_t) ;
 struct bnxt_ulp_ops* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct bnxt *VAR_2)
{
 struct bnxt_en_dev *VAR_3 = VAR_2->edev;
 struct bnxt_ulp_ops *VAR_4;

 if (!VAR_3 || !(VAR_3->flags & VAR_0))
  return;

 if (FUNC_0(VAR_2->edev, VAR_1)) {
  struct bnxt_ulp *VAR_5 = &VAR_3->ulp_tbl[VAR_1];

  if (!VAR_5->msix_requested)
   return;

  VAR_4 = FUNC_1(VAR_5->ulp_ops);
  if (!VAR_4 || !VAR_4->ulp_irq_stop)
   return;
  VAR_4->ulp_irq_stop(VAR_5->handle);
 }
}
