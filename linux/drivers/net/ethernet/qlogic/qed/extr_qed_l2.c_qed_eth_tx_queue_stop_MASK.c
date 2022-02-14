
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_queue_cid {int dummy; } ;
struct qed_hwfn {int cdev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_queue_cid*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_queue_cid*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_queue_cid*) ;

int FUNC_4(struct qed_hwfn *VAR_0, void *VAR_1)
{
 struct qed_queue_cid *VAR_2 = (struct qed_queue_cid *)VAR_1;
 int VAR_3;

 if (FUNC_0(VAR_0->cdev))
  VAR_3 = FUNC_1(VAR_0, VAR_2);
 else
  VAR_3 = FUNC_3(VAR_0, VAR_2);

 if (!VAR_3)
  FUNC_2(VAR_0, VAR_2);
 return VAR_3;
}
