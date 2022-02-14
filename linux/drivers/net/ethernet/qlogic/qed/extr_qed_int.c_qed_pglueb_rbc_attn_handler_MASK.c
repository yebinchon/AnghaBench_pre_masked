
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct qed_hwfn*,char*,int,...) ;
 scalar_t__ FUNC_2 (int,int ) ;
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
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int ,int ) ;

int FUNC_5(struct qed_hwfn *VAR_28,
    struct qed_ptt *VAR_29)
{
 u32 VAR_30;

 VAR_30 = FUNC_3(VAR_28, VAR_29, VAR_22);
 if (VAR_30 & VAR_9) {
  u32 VAR_31, VAR_32, VAR_33;

  VAR_31 = FUNC_3(VAR_28, VAR_29,
     VAR_19);
  VAR_32 = FUNC_3(VAR_28, VAR_29,
     VAR_20);
  VAR_33 = FUNC_3(VAR_28, VAR_29,
     VAR_21);

  FUNC_1(VAR_28,
     "Illegal write by chip to [%08x:%08x] blocked.\n"
     "Details: %08x [PFID %02x, VFID %02x, VF_VALID %02x]\n"
     "Details2 %08x [Was_error %02x BME deassert %02x FID_enable deassert %02x]\n",
     VAR_32, VAR_31, VAR_33,
     (u8)FUNC_2(VAR_33, VAR_3),
     (u8)FUNC_2(VAR_33, VAR_4),
     FUNC_2(VAR_33,
        VAR_5) ? 1 : 0,
     VAR_30,
     FUNC_2(VAR_30,
        VAR_2) ? 1 : 0,
     FUNC_2(VAR_30,
        VAR_0) ? 1 : 0,
     FUNC_2(VAR_30,
        VAR_1) ? 1 : 0);
 }

 VAR_30 = FUNC_3(VAR_28, VAR_29, VAR_18);
 if (VAR_30 & VAR_8) {
  u32 VAR_34, VAR_35, VAR_36;

  VAR_34 = FUNC_3(VAR_28, VAR_29,
     VAR_15);
  VAR_35 = FUNC_3(VAR_28, VAR_29,
     VAR_16);
  VAR_36 = FUNC_3(VAR_28, VAR_29,
     VAR_17);

  FUNC_1(VAR_28,
     "Illegal read by chip from [%08x:%08x] blocked.\n"
     "Details: %08x [PFID %02x, VFID %02x, VF_VALID %02x]\n"
     "Details2 %08x [Was_error %02x BME deassert %02x FID_enable deassert %02x]\n",
     VAR_35, VAR_34, VAR_36,
     (u8)FUNC_2(VAR_36, VAR_3),
     (u8)FUNC_2(VAR_36, VAR_4),
     FUNC_2(VAR_36,
        VAR_5) ? 1 : 0,
     VAR_30,
     FUNC_2(VAR_30,
        VAR_2) ? 1 : 0,
     FUNC_2(VAR_30,
        VAR_0) ? 1 : 0,
     FUNC_2(VAR_30,
        VAR_1) ? 1 : 0);
 }

 VAR_30 = FUNC_3(VAR_28, VAR_29, VAR_23);
 if (VAR_30 & VAR_6)
  FUNC_1(VAR_28, "ICPL error - %08x\n", VAR_30);

 VAR_30 = FUNC_3(VAR_28, VAR_29, VAR_14);
 if (VAR_30 & VAR_10) {
  u32 VAR_37, VAR_38;

  VAR_38 = FUNC_3(VAR_28, VAR_29,
     VAR_12);
  VAR_37 = FUNC_3(VAR_28, VAR_29,
     VAR_13);

  FUNC_1(VAR_28, "ZLR error - %08x [Address %08x:%08x]\n",
     VAR_30, VAR_37, VAR_38);
 }

 VAR_30 = FUNC_3(VAR_28, VAR_29, VAR_27);
 if (VAR_30 & VAR_7) {
  u32 VAR_39, VAR_40, VAR_41;

  VAR_40 = FUNC_3(VAR_28, VAR_29,
     VAR_24);
  VAR_39 = FUNC_3(VAR_28, VAR_29,
     VAR_25);
  VAR_41 = FUNC_3(VAR_28, VAR_29,
     VAR_26);

  FUNC_1(VAR_28,
     "ILT error - Details %08x Details2 %08x [Address %08x:%08x]\n",
     VAR_41, VAR_30, VAR_39, VAR_40);
 }


 FUNC_4(VAR_28, VAR_29, VAR_11, FUNC_0(2));

 return 0;
}
