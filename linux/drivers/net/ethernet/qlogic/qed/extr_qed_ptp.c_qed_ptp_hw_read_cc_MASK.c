
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {struct qed_ptt* p_ptp_ptt; } ;
struct qed_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qed_hwfn* FUNC_0 (struct qed_dev*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ) ;

__attribute__((used)) static int FUNC_2(struct qed_dev *VAR_2, u64 *VAR_3)
{
 struct qed_hwfn *VAR_4 = FUNC_0(VAR_2);
 struct qed_ptt *VAR_5 = VAR_4->p_ptp_ptt;
 u32 VAR_6 = 0;

 VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_0);
 *VAR_3 = FUNC_1(VAR_4, VAR_5, VAR_1);
 *VAR_3 <<= 32;
 *VAR_3 |= VAR_6;

 return 0;
}
