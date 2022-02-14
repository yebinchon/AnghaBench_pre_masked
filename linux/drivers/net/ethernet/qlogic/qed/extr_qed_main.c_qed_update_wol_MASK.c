
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
 int VAR_3 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 struct qed_ptt* FUNC_4 (struct qed_hwfn*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*) ;

__attribute__((used)) static int FUNC_6(struct qed_dev *VAR_4, bool VAR_5)
{
 struct qed_hwfn *VAR_6 = FUNC_1(VAR_4);
 struct qed_ptt *VAR_7;
 int VAR_8 = 0;

 if (FUNC_0(VAR_4))
  return 0;

 VAR_7 = FUNC_4(VAR_6);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_5 ? VAR_3
       : VAR_2);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_1);

out:
 FUNC_5(VAR_6, VAR_7);
 return VAR_8;
}
