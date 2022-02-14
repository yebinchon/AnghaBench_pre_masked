
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_hwfn {int b_int_requested; int b_int_enabled; } ;
typedef enum qed_int_mode { ____Placeholder_qed_int_mode } qed_int_mode ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct qed_hwfn*) ;
 int VAR_1 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int) ;
 int FUNC_4 (struct qed_hwfn*) ;

int
FUNC_5(struct qed_hwfn *VAR_2,
     struct qed_ptt *VAR_3, enum qed_int_mode VAR_4)
{
 int VAR_5 = 0;

 FUNC_2(VAR_2, VAR_3);

 if ((VAR_4 != VAR_1) || FUNC_1(VAR_2)) {
  VAR_5 = FUNC_4(VAR_2);
  if (VAR_5) {
   FUNC_0(VAR_2, "Slowpath IRQ request failed\n");
   return -VAR_0;
  }
  VAR_2->b_int_requested = 1;
 }

 FUNC_3(VAR_2, VAR_3, VAR_4);
 VAR_2->b_int_enabled = 1;

 return VAR_5;
}
