
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_ulp_ops {int (* ulp_start ) (int ) ;} ;
struct bnxt_ulp {int handle; int ulp_ops; } ;
struct bnxt_en_dev {struct bnxt_ulp* ulp_tbl; } ;
struct bnxt {struct bnxt_en_dev* edev; } ;


 int VAR_0 ;
 struct bnxt_ulp_ops* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct bnxt *VAR_1)
{
 struct bnxt_en_dev *VAR_2 = VAR_1->edev;
 struct bnxt_ulp_ops *VAR_3;
 int VAR_4;

 if (!VAR_2)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct bnxt_ulp *VAR_5 = &VAR_2->ulp_tbl[VAR_4];

  VAR_3 = FUNC_0(VAR_5->ulp_ops);
  if (!VAR_3 || !VAR_3->ulp_start)
   continue;
  VAR_3->ulp_start(VAR_5->handle);
 }
}
