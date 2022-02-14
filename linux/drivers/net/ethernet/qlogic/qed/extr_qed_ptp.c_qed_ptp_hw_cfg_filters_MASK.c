
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {struct qed_ptt* p_ptp_ptt; } ;
struct qed_dev {int dummy; } ;
typedef enum qed_ptp_hwtstamp_tx_type { ____Placeholder_qed_ptp_hwtstamp_tx_type } qed_ptp_hwtstamp_tx_type ;
typedef enum qed_ptp_filter_type { ____Placeholder_qed_ptp_filter_type } qed_ptp_filter_type ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct qed_hwfn* FUNC_1 (struct qed_dev*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct qed_dev *VAR_11,
      enum qed_ptp_filter_type VAR_12,
      enum qed_ptp_hwtstamp_tx_type VAR_13)
{
 struct qed_hwfn *VAR_14 = FUNC_1(VAR_11);
 struct qed_ptt *VAR_15 = VAR_14->p_ptp_ptt;
 u32 VAR_16, VAR_17 = 0x0;

 switch (VAR_12) {
 case 136:
  VAR_17 = 0x0;
  VAR_16 = 0x3FFF;
  break;
 case 137:
  VAR_17 = 0x7;
  VAR_16 = 0x3CAA;
  break;
 case 135:
  VAR_17 = 0x3;
  VAR_16 = 0x3FFA;
  break;
 case 134:
  VAR_17 = 0x3;
  VAR_16 = 0x3FFE;
  break;
 case 129:
  VAR_17 = 0x5;
  VAR_16 = 0x3FAA;
  break;
 case 128:
  VAR_17 = 0x5;
  VAR_16 = 0x3FEE;
  break;
 case 131:
  VAR_17 = 0x5;
  VAR_16 = 0x3CFF;
  break;
 case 130:
  VAR_17 = 0x5;
  VAR_16 = 0x3EFF;
  break;
 case 133:
  VAR_17 = 0x5;
  VAR_16 = 0x3CAA;
  break;
 case 132:
  VAR_17 = 0x5;
  VAR_16 = 0x3EEE;
  break;
 default:
  FUNC_0(VAR_14, "Invalid PTP filter type %d\n", VAR_12);
  return -VAR_0;
 }

 FUNC_2(VAR_14, VAR_15, VAR_2,
        VAR_9);
 FUNC_2(VAR_14, VAR_15, VAR_3, VAR_16);
 FUNC_2(VAR_14, VAR_15, VAR_4, VAR_17);

 if (VAR_13 == VAR_8) {
  FUNC_2(VAR_14, VAR_15, VAR_7, 0x0);
  FUNC_2(VAR_14, VAR_15, VAR_5, 0x7FF);
  FUNC_2(VAR_14, VAR_15, VAR_6, 0x3FFF);
 } else {
  FUNC_2(VAR_14, VAR_15, VAR_7, VAR_17);
  FUNC_2(VAR_14, VAR_15, VAR_5,
         VAR_9);
  FUNC_2(VAR_14, VAR_15, VAR_6, VAR_16);
 }


 FUNC_2(VAR_14, VAR_15, VAR_1,
        VAR_10);

 return 0;
}
