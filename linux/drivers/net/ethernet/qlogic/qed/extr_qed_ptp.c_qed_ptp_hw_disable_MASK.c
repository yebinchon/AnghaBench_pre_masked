
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_hwfn {struct qed_ptt* p_ptp_ptt; } ;
struct qed_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct qed_hwfn* FUNC_0 (struct qed_dev*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct qed_dev *VAR_6)
{
 struct qed_hwfn *VAR_7 = FUNC_0(VAR_6);
 struct qed_ptt *VAR_8 = VAR_7->p_ptp_ptt;

 FUNC_1(VAR_7, VAR_8);


 FUNC_3(VAR_7, VAR_8, VAR_0, 0x7FF);
 FUNC_3(VAR_7, VAR_8, VAR_1, 0x3FFF);

 FUNC_3(VAR_7, VAR_8, VAR_3, 0x7FF);
 FUNC_3(VAR_7, VAR_8, VAR_4, 0x3FFF);


 FUNC_3(VAR_7, VAR_8, VAR_2, 0x0);
 FUNC_3(VAR_7, VAR_8, VAR_5, 0x0);

 FUNC_2(VAR_7, VAR_8);
 VAR_7->p_ptp_ptt = ((void*)0);

 return 0;
}
