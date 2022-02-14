
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_resc_unlock_params {int dummy; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {scalar_t__ abs_pf_id; TYPE_1__* cdev; } ;
typedef enum qed_resc_lock { ____Placeholder_qed_resc_lock } qed_resc_lock ;
struct TYPE_2__ {scalar_t__ num_ports_in_engine; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct qed_resc_unlock_params*,int,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,struct qed_resc_unlock_params*) ;
 int FUNC_3 (struct qed_hwfn*) ;

__attribute__((used)) static int FUNC_4(struct qed_hwfn *VAR_2, struct qed_ptt *VAR_3)
{
 struct qed_resc_unlock_params VAR_4;
 enum qed_resc_lock VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5 == VAR_1)
  return -VAR_0;

 FUNC_1(((void*)0), &VAR_4, VAR_5, 1);

 VAR_6 = FUNC_2(VAR_2, VAR_3, &VAR_4);
 if (VAR_6 == -VAR_0) {

  if (VAR_2->abs_pf_id < VAR_2->cdev->num_ports_in_engine) {
   VAR_6 = 0;
  } else {
   FUNC_0(VAR_2, "PF doesn't have lock ownership\n");
   return -VAR_0;
  }
 } else if (VAR_6) {
  FUNC_0(VAR_2, "Failed to release the ptp resource lock\n");
 }

 return VAR_6;
}
