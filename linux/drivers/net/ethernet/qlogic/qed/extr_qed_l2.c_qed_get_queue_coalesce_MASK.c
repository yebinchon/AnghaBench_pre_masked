
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qed_queue_cid {scalar_t__ b_is_rx; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int cdev; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,struct qed_queue_cid*,int *) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,struct qed_queue_cid*,int *) ;
 struct qed_ptt* FUNC_4 (struct qed_hwfn*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_6 (struct qed_hwfn*,int *,struct qed_queue_cid*) ;

int FUNC_7(struct qed_hwfn *VAR_1, u16 *VAR_2, void *VAR_3)
{
 struct qed_queue_cid *VAR_4 = VAR_3;
 struct qed_ptt *VAR_5;
 int VAR_6 = 0;

 if (FUNC_1(VAR_1->cdev)) {
  VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_4);
  if (VAR_6)
   FUNC_0(VAR_1, "Unable to read queue coalescing\n");

  return VAR_6;
 }

 VAR_5 = FUNC_4(VAR_1);
 if (!VAR_5)
  return -VAR_0;

 if (VAR_4->b_is_rx) {
  VAR_6 = FUNC_2(VAR_1, VAR_5, VAR_4, VAR_2);
  if (VAR_6)
   goto out;
 } else {
  VAR_6 = FUNC_3(VAR_1, VAR_5, VAR_4, VAR_2);
  if (VAR_6)
   goto out;
 }

out:
 FUNC_5(VAR_1, VAR_5);

 return VAR_6;
}
