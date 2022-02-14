
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_en_dev {TYPE_1__* ulp_tbl; } ;
struct bnxt {struct bnxt_en_dev* edev; } ;
struct TYPE_2__ {int msix_requested; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct bnxt_en_dev*,size_t) ;

int FUNC_1(struct bnxt *VAR_1)
{
 if (FUNC_0(VAR_1->edev, VAR_0)) {
  struct bnxt_en_dev *VAR_2 = VAR_1->edev;

  return VAR_2->ulp_tbl[VAR_0].msix_requested;
 }
 return 0;
}
