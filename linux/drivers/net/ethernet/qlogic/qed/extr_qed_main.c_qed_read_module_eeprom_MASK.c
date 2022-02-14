
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qed_dev*) ;
 int FUNC_1 (struct qed_hwfn*) ;
 struct qed_hwfn* FUNC_2 (struct qed_dev*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int ,int ,char*) ;
 struct qed_ptt* FUNC_4 (struct qed_hwfn*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*) ;

__attribute__((used)) static int FUNC_6(struct qed_dev *VAR_1, char *VAR_2,
      u8 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct qed_hwfn *VAR_6 = FUNC_2(VAR_1);
 struct qed_ptt *VAR_7;
 int VAR_8 = 0;

 if (FUNC_0(VAR_1))
  return 0;

 VAR_7 = FUNC_4(VAR_6);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_6, VAR_7, FUNC_1(VAR_6), VAR_3,
      VAR_4, VAR_5, VAR_2);

 FUNC_5(VAR_6, VAR_7);

 return VAR_8;
}
