
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnx2x*,scalar_t__) ;
 int FUNC_2 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int ) ;
 int FUNC_4 (struct bnx2x*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_4, u8 VAR_5,
         u8 VAR_6)
{
 u32 VAR_7 = 0;






 VAR_7 = FUNC_1(VAR_4,
        VAR_1 + VAR_5*8);
 FUNC_0(VAR_0, "latch_status = 0x%x\n", VAR_7);

 if (VAR_6)
  FUNC_4(VAR_4,
         VAR_2
         + VAR_5*4,
         VAR_3);
 else
  FUNC_3(VAR_4,
          VAR_2
          + VAR_5*4,
          VAR_3);

 if (VAR_7 & 1) {


  FUNC_2(VAR_4, VAR_1 + VAR_5*8,
         (VAR_7 & 0xfffe) | (VAR_7 & 1));
 }

}
