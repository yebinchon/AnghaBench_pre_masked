
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_ulp_ops {int (* ulp_irq_restart ) (int ,struct bnxt_msix_entry*) ;} ;
struct bnxt_ulp {int handle; int msix_requested; int ulp_ops; } ;
struct bnxt_msix_entry {int dummy; } ;
struct bnxt_en_dev {int flags; struct bnxt_ulp* ulp_tbl; } ;
struct bnxt {struct bnxt_en_dev* edev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt*,struct bnxt_msix_entry*) ;
 scalar_t__ FUNC_1 (struct bnxt_en_dev*,size_t) ;
 struct bnxt_msix_entry* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct bnxt_msix_entry*) ;
 struct bnxt_ulp_ops* FUNC_4 (int ) ;
 int FUNC_5 (int ,struct bnxt_msix_entry*) ;

void FUNC_6(struct bnxt *VAR_3, int VAR_4)
{
 struct bnxt_en_dev *VAR_5 = VAR_3->edev;
 struct bnxt_ulp_ops *VAR_6;

 if (!VAR_5 || !(VAR_5->flags & VAR_0))
  return;

 if (FUNC_1(VAR_3->edev, VAR_1)) {
  struct bnxt_ulp *VAR_7 = &VAR_5->ulp_tbl[VAR_1];
  struct bnxt_msix_entry *VAR_8 = ((void*)0);

  if (!VAR_7->msix_requested)
   return;

  VAR_6 = FUNC_4(VAR_7->ulp_ops);
  if (!VAR_6 || !VAR_6->ulp_irq_restart)
   return;

  if (!VAR_4) {
   VAR_8 = FUNC_2(VAR_7->msix_requested, sizeof(*VAR_8),
          VAR_2);
   if (!VAR_8)
    return;
   FUNC_0(VAR_3, VAR_8);
  }
  VAR_6->ulp_irq_restart(VAR_7->handle, VAR_8);
  FUNC_3(VAR_8);
 }
}
