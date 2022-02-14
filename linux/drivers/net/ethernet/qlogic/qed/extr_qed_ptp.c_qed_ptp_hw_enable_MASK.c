
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_hwfn {int cdev; struct qed_ptt* p_ptp_ptt; } ;
struct qed_dev {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct qed_hwfn* FUNC_4 (struct qed_dev*) ;
 int VAR_17 ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*) ;
 struct qed_ptt* FUNC_6 (struct qed_hwfn*) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct qed_dev *VAR_18)
{
 struct qed_hwfn *VAR_19 = FUNC_4(VAR_18);
 struct qed_ptt *VAR_20;
 int VAR_21;

 VAR_20 = FUNC_6(VAR_19);
 if (!VAR_20) {
  FUNC_1(VAR_19, "Failed to acquire PTT for PTP\n");
  return -VAR_0;
 }

 VAR_19->p_ptp_ptt = VAR_20;

 VAR_21 = FUNC_5(VAR_19, VAR_20);
 if (VAR_21) {
  FUNC_0(VAR_19,
   "Couldn't acquire the resource lock, skip ptp enable for this PF\n");
  FUNC_7(VAR_19, VAR_20);
  VAR_19->p_ptp_ptt = ((void*)0);
  return VAR_21;
 }


 FUNC_8(VAR_19, VAR_20, VAR_2, 0x7FF);
 FUNC_8(VAR_19, VAR_20, VAR_3, 0x3FFF);
 FUNC_8(VAR_19, VAR_20, VAR_14, 0x7FF);
 FUNC_8(VAR_19, VAR_20, VAR_15, 0x3FFF);

 FUNC_8(VAR_19, VAR_20, VAR_16, 7);
 FUNC_8(VAR_19, VAR_20, VAR_5, 7);

 FUNC_8(VAR_19, VAR_20, VAR_12, 0x1);


 if (FUNC_3(VAR_19->cdev))
  FUNC_8(VAR_19, VAR_20, VAR_6, 2);
 if (FUNC_2(VAR_19->cdev))
  FUNC_8(VAR_19, VAR_20, VAR_8, 2);

 FUNC_8(VAR_19, VAR_20, VAR_9, 0);
 FUNC_8(VAR_19, VAR_20, VAR_10, 0);

 if (FUNC_3(VAR_19->cdev))
  FUNC_8(VAR_19, VAR_20, VAR_6, 4);
 if (FUNC_2(VAR_19->cdev)) {
  FUNC_8(VAR_19, VAR_20, VAR_8, 4);
  FUNC_8(VAR_19, VAR_20, VAR_4, 1);
 }


 FUNC_8(VAR_19, VAR_20, VAR_7, 0x0);
 FUNC_8(VAR_19, VAR_20, VAR_11, 0x0);


 FUNC_8(VAR_19, VAR_20, VAR_1,
        VAR_17);
 FUNC_8(VAR_19, VAR_20, VAR_13, VAR_17);

 return 0;
}
