
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qed_dev*) ;
 struct qed_hwfn* FUNC_1 (struct qed_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 struct qed_ptt* FUNC_3 (struct qed_hwfn*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*) ;

__attribute__((used)) static int FUNC_5(struct qed_dev *VAR_3, bool VAR_4)
{
 struct qed_hwfn *VAR_5 = FUNC_1(VAR_3);
 struct qed_ptt *VAR_6;
 int VAR_7 = 0;

 if (FUNC_0(VAR_3))
  return 0;

 VAR_6 = FUNC_3(VAR_5);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_5, VAR_6, VAR_4 ?
      VAR_1 :
      VAR_2);

 FUNC_4(VAR_5, VAR_6);

 return VAR_7;
}
