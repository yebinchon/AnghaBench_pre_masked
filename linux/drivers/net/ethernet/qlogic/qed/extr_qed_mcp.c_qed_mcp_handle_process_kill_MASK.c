
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {struct qed_dev* cdev; } ;
struct qed_dev {int recov_in_prog; } ;


 int FUNC_0 (struct qed_hwfn*,char*,...) ;
 struct qed_hwfn* FUNC_1 (struct qed_dev*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_4 (struct qed_hwfn*) ;

__attribute__((used)) static void FUNC_5(struct qed_hwfn *VAR_0,
     struct qed_ptt *VAR_1)
{
 struct qed_dev *VAR_2 = VAR_0->cdev;
 u32 VAR_3;




 FUNC_3(VAR_0, VAR_1);

 FUNC_0(VAR_0, "Received a process kill indication\n");




 if (VAR_0 != FUNC_1(VAR_2))
  return;

 if (VAR_2->recov_in_prog) {
  FUNC_0(VAR_0,
     "Ignoring the indication since a recovery process is already in progress\n");
  return;
 }

 VAR_2->recov_in_prog = 1;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 FUNC_0(VAR_0, "Process kill counter: %d\n", VAR_3);

 FUNC_4(VAR_0);
}
