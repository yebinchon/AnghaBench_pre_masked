
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {int dummy; } ;


 int VAR_0 ;
 struct qed_hwfn* FUNC_0 (struct qed_dev*) ;
 struct qed_ptt* FUNC_1 (struct qed_hwfn*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*) ;

__attribute__((used)) static int FUNC_4(struct qed_dev *VAR_1)
{
 struct qed_hwfn *VAR_2 = FUNC_0(VAR_1);
 struct qed_ptt *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_2, VAR_3);

 FUNC_2(VAR_2, VAR_3);

 return VAR_4;
}
