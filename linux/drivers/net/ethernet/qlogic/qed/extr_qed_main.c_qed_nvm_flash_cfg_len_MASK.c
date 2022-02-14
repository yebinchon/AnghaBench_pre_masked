
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {int dummy; } ;


 int FUNC_0 (struct qed_dev*,char*,int,int) ;
 struct qed_hwfn* FUNC_1 (struct qed_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int,int ,int ,int *,int*) ;
 struct qed_ptt* FUNC_3 (struct qed_hwfn*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*) ;

__attribute__((used)) static int FUNC_5(struct qed_dev *VAR_2, u32 VAR_3)
{
 struct qed_hwfn *VAR_4 = FUNC_1(VAR_2);
 u8 VAR_5[VAR_0];
 struct qed_ptt *VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_4);
 if (!VAR_6)
  return VAR_0;

 VAR_8 = FUNC_2(VAR_4, VAR_6, VAR_3, 0, VAR_1, VAR_5,
     &VAR_7);
 if (VAR_8 || !VAR_7) {
  FUNC_0(VAR_2, "Error %d reading %d\n", VAR_8, VAR_3);
  VAR_7 = VAR_0;
 }

 FUNC_4(VAR_4, VAR_6);

 return VAR_7;
}
