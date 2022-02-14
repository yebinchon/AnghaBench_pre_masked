
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {struct qed_ptt* p_ptp_ptt; } ;
struct qed_dev {int dummy; } ;
typedef int s64 ;
typedef int s32 ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct qed_hwfn* FUNC_1 (struct qed_dev*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct qed_dev *VAR_6, s32 VAR_7)
{
 s64 VAR_8 = 0, VAR_9, VAR_10 = 0, VAR_11, VAR_12, VAR_13, VAR_14;
 struct qed_hwfn *VAR_15 = FUNC_1(VAR_6);
 struct qed_ptt *VAR_16 = VAR_15->p_ptp_ptt;
 u32 VAR_17 = 0, VAR_18;
 int VAR_19 = 1;

 if (VAR_7 < 0) {
  VAR_7 = -VAR_7;
  VAR_19 = 0;
 }

 if (VAR_7 > 1) {
  s64 VAR_20 = VAR_7, VAR_21 = 1;




  for (VAR_9 = 7; VAR_9 > 0; VAR_9--) {
   VAR_11 = FUNC_2(VAR_9 * 1000000000, VAR_7);
   VAR_11 -= 8;
   VAR_11 >>= 4;
   if (VAR_11 < 1)
    VAR_11 = 1;
   if (VAR_11 > 0xFFFFFFE)
    VAR_11 = 0xFFFFFFE;


   VAR_12 = VAR_11 * 16 + 8;
   VAR_13 = VAR_7 * VAR_12 - VAR_9 * 1000000000;
   VAR_14 = VAR_13 + 16 * VAR_7;

   if (VAR_13 < 0)
    VAR_13 = -VAR_13;
   if (VAR_14 < 0)
    VAR_14 = -VAR_14;


   if (VAR_13 * (VAR_12 + 16) > VAR_14 * VAR_12) {
    VAR_11++;
    VAR_12 += 16;
    VAR_13 = VAR_14;
   }


   if (VAR_20 * VAR_12 > VAR_13 * VAR_21) {
    VAR_20 = VAR_13;
    VAR_8 = VAR_9;
    VAR_10 = VAR_11;
    VAR_21 = VAR_12;
   }
  }
 } else if (VAR_7 == 1) {




  VAR_8 = 4;
  VAR_10 = 0xee6b27f;
 } else {
  VAR_8 = 0;
  VAR_10 = 0xFFFFFFF;
 }

 VAR_17 = (VAR_10 << VAR_5) |
   (((int)VAR_8) << VAR_3) |
   (((int)VAR_19) << VAR_4);

 FUNC_4(VAR_15, VAR_16, VAR_2, 0x1);

 VAR_18 = FUNC_3(VAR_15, VAR_16, VAR_2);
 if (VAR_18 & 1) {
  FUNC_4(VAR_15, VAR_16, VAR_1,
         VAR_17);
 } else {
  FUNC_0(VAR_15, "Drift counter is not reset\n");
  return -VAR_0;
 }

 FUNC_4(VAR_15, VAR_16, VAR_2, 0x0);

 return 0;
}
