
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,int,int) ;
 int FUNC_1 (struct ath_hw*,int,int,int,int,int,int,int,int,int*) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,int ,char*,...) ;

__attribute__((used)) static bool FUNC_4(struct ath_hw *VAR_2,
       s32 VAR_3,
       const s32 VAR_4[],
       s32 VAR_5[])
{
 s32 VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_10, VAR_11,
     VAR_12, VAR_13, VAR_14,
     VAR_15, VAR_16, VAR_17;
 s32 VAR_18, VAR_19, VAR_20, VAR_21,
     VAR_22, VAR_23, VAR_24, VAR_25,
     VAR_26, VAR_27,
     VAR_28, VAR_29;
 s32 VAR_30, VAR_31, VAR_32, VAR_33;
 s32 VAR_34[4], VAR_35, VAR_36, VAR_37, VAR_38,
     VAR_39, VAR_40;
 const s32 VAR_41 = 1 << 15;
 const s32 VAR_42 = 1 << 8;
 s32 VAR_43, VAR_44;
 struct ath_common *VAR_45 = FUNC_2(VAR_2);

 VAR_6 = VAR_4[0] & 0xfff;
 VAR_7 = (VAR_4[0] >> 12) & 0xfff;
 VAR_8 = ((VAR_4[0] >> 24) & 0xff) + ((VAR_4[1] & 0xf) << 8);

 if (VAR_6 > 0x800)
  VAR_6 = -((0xfff - VAR_6) + 1);

 if (VAR_7 > 0x800)
  VAR_7 = -((0xfff - VAR_7) + 1);

 if (VAR_8 > 0x800)
  VAR_8 = -((0xfff - VAR_8) + 1);

 VAR_9 = (VAR_4[1] >> 4) & 0xfff;
 VAR_10 = (VAR_4[2] & 0xfff);
 VAR_11 = (VAR_4[2] >> 12) & 0xfff;

 if (VAR_9 > 0x800)
  VAR_9 = -((0xfff - VAR_9) + 1);

 if (VAR_11 > 0x800)
  VAR_11 = -((0xfff - VAR_11) + 1);

 VAR_12 = ((VAR_4[2] >> 24) & 0xff) + ((VAR_4[3] & 0xf) << 8);
 VAR_13 = (VAR_4[3] >> 4) & 0xfff;
 VAR_14 = VAR_4[4] & 0xfff;

 if (VAR_12 > 0x800)
  VAR_12 = -((0xfff - VAR_12) + 1);

 if (VAR_13 > 0x800)
  VAR_13 = -((0xfff - VAR_13) + 1);

 if (VAR_14 > 0x800)
  VAR_14 = -((0xfff - VAR_14) + 1);

 VAR_15 = (VAR_4[4] >> 12) & 0xfff;
 VAR_16 = ((VAR_4[4] >> 24) & 0xff) + ((VAR_4[5] & 0xf) << 8);
 VAR_17 = (VAR_4[5] >> 4) & 0xfff;

 if (VAR_15 > 0x800)
  VAR_15 = -((0xfff - VAR_15) + 1);

 if (VAR_16 > 0x800)
  VAR_16 = -((0xfff - VAR_16) + 1);

 if (VAR_17 > 0x800)
  VAR_17 = -((0xfff - VAR_17) + 1);

 if ((VAR_7 == 0) || (VAR_10 == 0) ||
     (VAR_13 == 0) || (VAR_16 == 0)) {
  FUNC_3(VAR_45, VAR_0,
   "Divide by 0:\n"
   "a0_d0=%d\n"
   "a0_d1=%d\n"
   "a2_d0=%d\n"
   "a1_d1=%d\n",
   VAR_7, VAR_10,
   VAR_13, VAR_16);
  return 0;
 }

 if ((VAR_7 < 1024) || (VAR_7 > 2047) ||
            (VAR_13 < 0) || (VAR_16 < 0) ||
            (VAR_7 <= VAR_6) ||
            (VAR_7 <= VAR_8) ||
            (VAR_10 <= VAR_9) ||
            (VAR_10 <= VAR_11) ||
            (VAR_13 <= VAR_12) ||
            (VAR_13 <= VAR_14) ||
            (VAR_16 <= VAR_15) ||
            (VAR_16 <= VAR_17)) {
  return 0;
 }

 VAR_18 = (VAR_6 * VAR_41) / VAR_7;
 VAR_22 = (VAR_8 * VAR_41) / VAR_7;

 VAR_20 = (VAR_9 * VAR_41) / VAR_10;
 VAR_24 = (VAR_11 * VAR_41) / VAR_10;

 VAR_19 = (VAR_12 * VAR_41) / VAR_13;
 VAR_23 = (VAR_14 * VAR_41) / VAR_13;

 VAR_21 = (VAR_15 * VAR_41) / VAR_16;
 VAR_25 = (VAR_17 * VAR_41) / VAR_16;


 VAR_26 = (((VAR_18 - VAR_20) * VAR_42) / VAR_1);

 VAR_27 = (((VAR_24 - VAR_22) * VAR_42) / VAR_1);

 VAR_28 = (((VAR_19 - VAR_21) * VAR_42) / VAR_1);

 VAR_29 = (((VAR_25 - VAR_23) * VAR_42) / VAR_1);





 VAR_43 = FUNC_0(VAR_2, VAR_27, VAR_26);
 VAR_44 = FUNC_0(VAR_2, VAR_29, VAR_28);

 if ((VAR_43 == 0) || (VAR_44 == 0)) {
  FUNC_3(VAR_45, VAR_0, "Divide by 0: mag1=%d, mag2=%d\n",
   VAR_43, VAR_44);
  return 0;
 }


 VAR_26 = (VAR_26 * VAR_41 / VAR_43);
 VAR_27 = (VAR_27 * VAR_41 / VAR_43);
 VAR_28 = (VAR_28 * VAR_41 / VAR_44);
 VAR_29 = (VAR_29 * VAR_41 / VAR_44);


 if (!FUNC_1(VAR_2,
        VAR_26, VAR_27,
        VAR_28, VAR_29,
        VAR_18, VAR_22,
        VAR_19,
        VAR_23, VAR_34)) {
  FUNC_3(VAR_45, VAR_0,
   "Call to ar9003_hw_solve_iq_cal() failed\n");
  return 0;
 }

 VAR_30 = VAR_34[0];
 VAR_31 = VAR_34[1];
 VAR_32 = VAR_34[2];
 VAR_33 = VAR_34[3];

 FUNC_3(VAR_45, VAR_0,
  "chain %d: mag mismatch=%d phase mismatch=%d\n",
  VAR_3, VAR_30/VAR_41, VAR_31/VAR_41);

 if (VAR_41 == VAR_30) {
  FUNC_3(VAR_45, VAR_0,
   "Divide by 0: mag_tx=%d, res_scale=%d\n",
   VAR_30, VAR_41);
  return 0;
 }


 VAR_35 = (VAR_30 * VAR_41) / (VAR_41 - VAR_30);
 VAR_36 = -VAR_31;

 VAR_39 = (VAR_35 * 128 / VAR_41);
 VAR_40 = (VAR_36 * 256 / VAR_41);

 FUNC_3(VAR_45, VAR_0, "tx chain %d: mag corr=%d  phase corr=%d\n",
  VAR_3, VAR_39, VAR_40);

 if (VAR_40 < -63)
  VAR_40 = -63;
 if (VAR_40 > 63)
  VAR_40 = 63;
 if (VAR_39 < -63)
  VAR_39 = -63;
 if (VAR_39 > 63)
  VAR_39 = 63;

 VAR_5[0] = (VAR_39 * 128) + (0x7f & VAR_40);

 FUNC_3(VAR_45, VAR_0, "tx chain %d: iq corr coeff=%x\n",
  VAR_3, VAR_5[0]);

 if (-VAR_32 == VAR_41) {
  FUNC_3(VAR_45, VAR_0,
   "Divide by 0: mag_rx=%d, res_scale=%d\n",
   VAR_32, VAR_41);
  return 0;
 }


 VAR_37 = (-VAR_32 * VAR_41) / (VAR_41 + VAR_32);
 VAR_38 = -VAR_33;

 VAR_39 = (VAR_37 * 128 / VAR_41);
 VAR_40 = (VAR_38 * 256 / VAR_41);

 FUNC_3(VAR_45, VAR_0, "rx chain %d: mag corr=%d  phase corr=%d\n",
  VAR_3, VAR_39, VAR_40);

 if (VAR_40 < -63)
  VAR_40 = -63;
 if (VAR_40 > 63)
  VAR_40 = 63;
 if (VAR_39 < -63)
  VAR_39 = -63;
 if (VAR_39 > 63)
  VAR_39 = 63;

 VAR_5[1] = (VAR_39 * 128) + (0x7f & VAR_40);

 FUNC_3(VAR_45, VAR_0, "rx chain %d: iq corr coeff=%x\n",
  VAR_3, VAR_5[1]);

 return 1;
}
