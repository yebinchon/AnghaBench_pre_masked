
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {struct qed_ptt* p_ptp_ptt; } ;
struct qed_dev {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct qed_hwfn* FUNC_1 (struct qed_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct qed_dev *VAR_6, u64 *VAR_7)
{
 struct qed_hwfn *VAR_8 = FUNC_1(VAR_6);
 struct qed_ptt *VAR_9 = VAR_8->p_ptp_ptt;
 u32 VAR_10;

 *VAR_7 = 0;
 VAR_10 = FUNC_2(VAR_8, VAR_9, VAR_1);
 if (!(VAR_10 & VAR_5)) {
  FUNC_0(VAR_8, VAR_4,
      "Invalid Tx timestamp, buf_seqid = %08x\n", VAR_10);
  return -VAR_0;
 }

 VAR_10 = FUNC_2(VAR_8, VAR_9, VAR_2);
 *VAR_7 = FUNC_2(VAR_8, VAR_9, VAR_3);
 *VAR_7 <<= 32;
 *VAR_7 |= VAR_10;


 FUNC_3(VAR_8, VAR_9, VAR_1, VAR_5);

 return 0;
}
