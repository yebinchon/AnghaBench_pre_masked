
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_resc_lock_params {int b_granted; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {scalar_t__ abs_pf_id; TYPE_1__* cdev; } ;
typedef enum qed_resc_lock { ____Placeholder_qed_resc_lock } qed_resc_lock ;
struct TYPE_2__ {scalar_t__ num_ports_in_engine; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,struct qed_resc_lock_params*) ;
 int FUNC_2 (struct qed_resc_lock_params*,int *,int,int) ;
 int FUNC_3 (struct qed_hwfn*) ;

__attribute__((used)) static int FUNC_4(struct qed_hwfn *VAR_3, struct qed_ptt *VAR_4)
{
 struct qed_resc_lock_params VAR_5;
 enum qed_resc_lock VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6 == VAR_2)
  return -VAR_1;

 FUNC_2(&VAR_5, ((void*)0), VAR_6, 1);

 VAR_7 = FUNC_1(VAR_3, VAR_4, &VAR_5);
 if (VAR_7 && VAR_7 != -VAR_1) {
  return VAR_7;
 } else if (VAR_7 == -VAR_1) {



  if (VAR_3->abs_pf_id < VAR_3->cdev->num_ports_in_engine)
   return 0;

  FUNC_0(VAR_3, "PF doesn't have lock ownership\n");
  return -VAR_0;
 } else if (!VAR_7 && !VAR_5.b_granted) {
  FUNC_0(VAR_3, "Failed to acquire ptp resource lock\n");
  return -VAR_0;
 }

 return VAR_7;
}
