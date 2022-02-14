
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_queue_cid {int dummy; } ;
struct qed_hwfn {int cdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_queue_cid*,int,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_queue_cid*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_queue_cid*,int) ;

int FUNC_4(struct qed_hwfn *VAR_1,
     void *VAR_2,
     bool VAR_3, bool VAR_4)
{
 struct qed_queue_cid *VAR_5 = (struct qed_queue_cid *)VAR_2;
 int VAR_6 = -VAR_0;

 if (FUNC_0(VAR_1->cdev))
  VAR_6 = FUNC_1(VAR_1, VAR_5,
           VAR_3,
           VAR_4);
 else
  VAR_6 = FUNC_3(VAR_1, VAR_5, VAR_4);

 if (!VAR_6)
  FUNC_2(VAR_1, VAR_5);
 return VAR_6;
}
