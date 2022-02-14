
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qed_ll2_params {int dummy; } ;
struct qed_ll2_acquire_data {int dummy; } ;
struct TYPE_3__ {int ll2_ooo_queue_id; } ;
struct TYPE_4__ {TYPE_1__ iscsi_pf_params; } ;
struct qed_hwfn {TYPE_2__ pf_params; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ll2_acquire_data*) ;
 int FUNC_2 (struct qed_hwfn*,int ) ;
 int FUNC_3 (struct qed_hwfn*,int ) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ll2_acquire_data*,struct qed_ll2_params*,int ,int *,int) ;

__attribute__((used)) static int FUNC_5(struct qed_hwfn *VAR_2,
        struct qed_ll2_params *VAR_3)
{
 u8 *VAR_4 = &VAR_2->pf_params.iscsi_pf_params.ll2_ooo_queue_id;
 struct qed_ll2_acquire_data VAR_5;
 int VAR_6;

 FUNC_4(VAR_2, &VAR_5, VAR_3,
         VAR_0, VAR_4, 1);

 VAR_6 = FUNC_1(VAR_2, &VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_2, "Failed to acquire LL2 OOO connection\n");
  goto out;
 }

 VAR_6 = FUNC_2(VAR_2, *VAR_4);
 if (VAR_6) {
  FUNC_0(VAR_2, "Failed to establish LL2 OOO connection\n");
  goto fail;
 }

 return 0;

fail:
 FUNC_3(VAR_2, *VAR_4);
out:
 *VAR_4 = VAR_1;
 return VAR_6;
}
