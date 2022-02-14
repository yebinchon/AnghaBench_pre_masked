
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_ulp_ops {int (* ulp_sriov_config ) (int ,int) ;} ;
struct bnxt_ulp {int handle; int ulp_ops; } ;
struct bnxt_en_dev {struct bnxt_ulp* ulp_tbl; } ;
struct bnxt {struct bnxt_en_dev* edev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt_ulp*) ;
 int FUNC_1 (struct bnxt_ulp*) ;
 struct bnxt_ulp_ops* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct bnxt *VAR_1, int VAR_2)
{
 struct bnxt_en_dev *VAR_3 = VAR_1->edev;
 struct bnxt_ulp_ops *VAR_4;
 int VAR_5;

 if (!VAR_3)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct bnxt_ulp *VAR_6 = &VAR_3->ulp_tbl[VAR_5];

  FUNC_3();
  VAR_4 = FUNC_2(VAR_6->ulp_ops);
  if (!VAR_4 || !VAR_4->ulp_sriov_config) {
   FUNC_4();
   continue;
  }
  FUNC_0(VAR_6);
  FUNC_4();
  VAR_4->ulp_sriov_config(VAR_6->handle, VAR_2);
  FUNC_1(VAR_6);
 }
}
