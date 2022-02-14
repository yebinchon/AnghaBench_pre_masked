
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int cdev; } ;


 int FUNC_0 (int ,int ,char*,...) ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 scalar_t__ FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int*) ;
 scalar_t__ FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int*) ;
 scalar_t__ FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int*,int*) ;
 scalar_t__ FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int*) ;

__attribute__((used)) static void FUNC_5(struct qed_hwfn *VAR_50,
         struct qed_ptt *VAR_51, u32 VAR_52,
         u32 *VAR_53)
{
 u32 VAR_54, VAR_55, VAR_56;
 u32 VAR_57, VAR_58;

 if (FUNC_2(VAR_50, VAR_51, &VAR_54))
  VAR_54 = 129;

 if (FUNC_3(VAR_50, VAR_51, &VAR_55, &VAR_56))
  VAR_56 = VAR_0;

 if (FUNC_4(VAR_50, VAR_51, &VAR_57))
  VAR_57 = 0xFFFFFFFF;

 if (FUNC_1(VAR_50, VAR_51, &VAR_58))
  VAR_58 = VAR_23;

 FUNC_0(VAR_50->cdev, VAR_13,
     "Media_type = 0x%x tcvr_state = 0x%x tcvr_type = 0x%x speed_mask = 0x%x board_cfg = 0x%x\n",
     VAR_54, VAR_55, VAR_56, VAR_57, VAR_58);

 switch (VAR_54) {
 case 135:
  *VAR_53 |= VAR_47;
  if (VAR_52 & VAR_16)
   *VAR_53 |= VAR_36;

  VAR_52 = VAR_52 & VAR_57;
  if (VAR_52 & VAR_15)
   *VAR_53 |= VAR_34;
  if (VAR_52 & VAR_14)
   *VAR_53 |= VAR_27;
  if (VAR_52 & VAR_18)
   *VAR_53 |= VAR_40;
  if (VAR_52 & VAR_17)
   *VAR_53 |= VAR_37;
  if (VAR_52 & VAR_19)
   *VAR_53 |= VAR_44;
  if (VAR_52 &
   VAR_20)
   *VAR_53 |= VAR_24;
  break;
 case 136:
  *VAR_53 |= VAR_48;
  if (VAR_58 & VAR_21) {
   if (VAR_52 &
       VAR_15) {
    *VAR_53 |= VAR_35;
   }
   if (VAR_52 &
       VAR_14) {
    *VAR_53 |= VAR_33;
   }
  }
  if (VAR_58 & VAR_22) {
   *VAR_53 |= VAR_47;
   if (VAR_56 == VAR_1)
    *VAR_53 |= VAR_35;
   if (VAR_56 == VAR_3)
    *VAR_53 |= VAR_33;
  }
  break;
 case 130:
 case 131:
 case 128:
 case 133:
  *VAR_53 |= VAR_47;
  if (VAR_52 &
      VAR_15) {
   if ((VAR_56 == VAR_8) ||
       (VAR_56 == VAR_9))
    *VAR_53 |= VAR_34;
  }
  if (VAR_52 &
      VAR_14) {
   if (VAR_56 == VAR_7)
    *VAR_53 |= VAR_32;
   if (VAR_56 == VAR_5)
    *VAR_53 |= VAR_30;
   if (VAR_56 == VAR_6)
    *VAR_53 |= VAR_29;
   if (VAR_56 == VAR_4)
    *VAR_53 |= VAR_31;
  }
  if (VAR_52 & VAR_16)
   *VAR_53 |= VAR_36;
  if (VAR_52 &
      VAR_17) {
   if (VAR_56 == VAR_10)
    *VAR_53 |= VAR_39;
  }
  if (VAR_52 &
      VAR_18) {
   if (VAR_56 == VAR_11)
    *VAR_53 |= VAR_42;
   if (VAR_56 == VAR_12)
    *VAR_53 |= VAR_43;
  }
  if (VAR_52 &
      VAR_19)
   *VAR_53 |= VAR_45;
  if (VAR_52 &
      VAR_20) {
   if (VAR_56 == VAR_2)
    *VAR_53 |= VAR_26;
  }

  break;
 case 134:
  *VAR_53 |= VAR_46;
  if (VAR_52 & VAR_16)
   *VAR_53 |= VAR_36;
  if (VAR_52 &
      VAR_15)
   *VAR_53 |= VAR_34;
  if (VAR_52 &
      VAR_14)
   *VAR_53 |= VAR_28;
  if (VAR_52 &
      VAR_17)
   *VAR_53 |= VAR_38;
  if (VAR_52 &
      VAR_18)
   *VAR_53 |= VAR_41;
  if (VAR_52 &
      VAR_19)
   *VAR_53 |= VAR_45;
  if (VAR_52 &
      VAR_20)
   *VAR_53 |= VAR_25;
  break;
 case 129:
 case 132:
  FUNC_0(VAR_50->cdev, VAR_49,
      "Unknown media and transceiver type;\n");
  break;
 }
}
