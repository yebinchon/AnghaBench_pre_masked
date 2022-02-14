
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qed_dev*) ;
 struct qed_hwfn* FUNC_1 (struct qed_dev*) ;
 int VAR_1 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 struct qed_ptt* FUNC_4 (struct qed_hwfn*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*) ;

__attribute__((used)) static int FUNC_6(struct qed_dev *VAR_2, u16 VAR_3)
{
 struct qed_hwfn *VAR_4 = FUNC_1(VAR_2);
 struct qed_ptt *VAR_5;
 int VAR_6 = 0;

 if (FUNC_0(VAR_2))
  return 0;

 VAR_5 = FUNC_4(VAR_4);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_3);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_1);

out:
 FUNC_5(VAR_4, VAR_5);
 return VAR_6;
}
