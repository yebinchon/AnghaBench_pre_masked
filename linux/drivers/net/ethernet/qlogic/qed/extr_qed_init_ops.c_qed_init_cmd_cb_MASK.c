
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct init_callback_op {int callback_id; } ;



 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,char*) ;

__attribute__((used)) static int FUNC_2(struct qed_hwfn *VAR_1,
      struct qed_ptt *VAR_2,
      struct init_callback_op *VAR_3)
{
 int VAR_4;

 switch (VAR_3->callback_id) {
 case 128:
  VAR_4 = FUNC_1(VAR_1, VAR_2, "engine_phase");
  break;
 default:
  FUNC_0(VAR_1, "Unexpected init op callback ID %d\n",
     VAR_3->callback_id);
  return -VAR_0;
 }

 return VAR_4;
}
