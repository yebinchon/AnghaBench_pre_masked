
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int,int,...) ;
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
 int FUNC_2 (struct bnx2x*,int) ;
 int FUNC_3 (struct bnx2x*,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

void FUNC_6(struct bnx2x *VAR_14, u8 VAR_15, u8 VAR_16, bool VAR_17)
{
 u32 VAR_18, VAR_19, VAR_20 = 100;
 u32 VAR_21 = VAR_9;
 u32 VAR_22 = VAR_10;
 u32 VAR_23 = VAR_11 + (VAR_16/32)*4;
 u32 VAR_24 = 1 << (VAR_16%32);
 u32 VAR_25 = VAR_15 | (VAR_17 ? 1 : 0) << VAR_5;
 u32 VAR_26 = VAR_0 + VAR_16;


 if (FUNC_0(VAR_14))
  return;

 VAR_18 = (VAR_12
   << VAR_8) |
  VAR_7 |
  VAR_6;

 VAR_19 = VAR_26 << VAR_2 |
       VAR_25 << VAR_3 |
       VAR_1 << VAR_4;

 FUNC_1(VAR_13, "write 0x%08x to IGU(via GRC) addr 0x%x\n",
    VAR_18, VAR_21);
 FUNC_3(VAR_14, VAR_21, VAR_18);
 FUNC_4();
 FUNC_1(VAR_13, "write 0x%08x to IGU(via GRC) addr 0x%x\n",
     VAR_19, VAR_22);
 FUNC_3(VAR_14, VAR_22, VAR_19);
 FUNC_4();


 while (!(FUNC_2(VAR_14, VAR_23) & VAR_24) && --VAR_20)
  FUNC_5(20);

 if (!(FUNC_2(VAR_14, VAR_23) & VAR_24)) {
  FUNC_1(VAR_13,
     "Unable to finish IGU cleanup: idu_sb_id %d offset %d bit %d (cnt %d)\n",
     VAR_16, VAR_16/32, VAR_16%32, VAR_20);
 }
}
