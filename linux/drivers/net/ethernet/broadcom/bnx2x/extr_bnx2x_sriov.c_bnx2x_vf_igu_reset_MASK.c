
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct bnx2x*,scalar_t__) ;
 int FUNC_4 (struct bnx2x*,scalar_t__,int) ;
 int VAR_14 ;
 int FUNC_5 (struct bnx2x*,int ,int,int) ;
 int FUNC_6 (struct bnx2x*,int) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_virtf*,int,int ,int ,int ,int) ;
 int FUNC_8 (struct bnx2x_virtf*,int) ;
 int FUNC_9 (struct bnx2x_virtf*) ;

__attribute__((used)) static void FUNC_10(struct bnx2x *VAR_15, struct bnx2x_virtf *VAR_16)
{
 int VAR_17;
 u32 VAR_18;


 FUNC_6(VAR_15, FUNC_2(VAR_15, VAR_16->abs_vfid));

 FUNC_4(VAR_15, VAR_5, 0);
 FUNC_4(VAR_15, VAR_6, 0);
 FUNC_4(VAR_15, VAR_7, 0);
 FUNC_4(VAR_15, VAR_8, 0);
 FUNC_4(VAR_15, VAR_2, 0);
 FUNC_4(VAR_15, VAR_3, 0);

 VAR_18 = FUNC_3(VAR_15, VAR_9);
 VAR_18 |= (VAR_10 | VAR_11);
 VAR_18 &= ~VAR_12;
 VAR_18 |= (FUNC_0(VAR_15) >> 1) << VAR_13;
 FUNC_4(VAR_15, VAR_9, VAR_18);

 FUNC_1(VAR_0,
    "value in IGU_REG_VF_CONFIGURATION of vf %d after write is 0x%08x\n",
    VAR_16->abs_vfid, VAR_18);

 FUNC_6(VAR_15, FUNC_0(VAR_15));


 for (VAR_17 = 0; VAR_17 < FUNC_9(VAR_16); VAR_17++) {
  u8 VAR_19 = FUNC_8(VAR_16, VAR_17);


  FUNC_4(VAR_15, VAR_4 + VAR_19 * 4, 0);


  FUNC_5(VAR_15, VAR_16->abs_vfid, VAR_19,
           0 );


  FUNC_7(VAR_15, VAR_16, VAR_19, VAR_14, 0,
        VAR_1, 1);
 }
}
