
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_hwfn {struct qed_dev* cdev; } ;
struct qed_dev {scalar_t__ recov_in_prog; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

int FUNC_2(struct qed_hwfn *VAR_2, struct qed_ptt *VAR_3)
{
 struct qed_dev *VAR_4 = VAR_2->cdev;

 if (VAR_4->recov_in_prog) {
  FUNC_0(VAR_2,
     "Avoid triggering a recovery since such a process is already in progress\n");
  return -VAR_0;
 }

 FUNC_0(VAR_2, "Triggering a recovery process\n");
 FUNC_1(VAR_2, VAR_3, VAR_1, 0x1);

 return 0;
}
