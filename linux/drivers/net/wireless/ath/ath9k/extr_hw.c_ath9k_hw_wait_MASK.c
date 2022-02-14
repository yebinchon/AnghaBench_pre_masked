
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath_hw*,int) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (int ,int ,char*,int,int,int,int,int) ;
 int FUNC_4 (int) ;

bool FUNC_5(struct ath_hw *VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_6 < VAR_0);

 for (VAR_7 = 0; VAR_7 < (VAR_6 / VAR_0); VAR_7++) {
  if ((FUNC_1(VAR_2, VAR_3) & VAR_4) == VAR_5)
   return 1;

  FUNC_4(VAR_0);
 }

 FUNC_3(FUNC_2(VAR_2), VAR_1,
  "timeout (%d us) on reg 0x%x: 0x%08x & 0x%08x != 0x%08x\n",
  VAR_6, VAR_3, FUNC_1(VAR_2, VAR_3), VAR_4, VAR_5);

 return 0;
}
