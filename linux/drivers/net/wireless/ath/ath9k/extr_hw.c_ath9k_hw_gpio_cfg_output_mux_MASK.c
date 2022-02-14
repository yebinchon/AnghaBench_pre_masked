
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int) ;
 int FUNC_2 (struct ath_hw*,int,int,int) ;
 int FUNC_3 (struct ath_hw*,int,int) ;

__attribute__((used)) static void FUNC_4(struct ath_hw *VAR_3, u32 VAR_4, u32 VAR_5)
{
 int VAR_6;
 u32 VAR_7, VAR_8;

 if (VAR_4 > 11)
  VAR_6 = VAR_2;
 else if (VAR_4 > 5)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_0;

 VAR_7 = (VAR_4 % 6) * 5;

 if (FUNC_0(VAR_3) ||
     (VAR_6 != VAR_0)) {
  FUNC_2(VAR_3, VAR_6, (VAR_5 << VAR_7),
   (0x1f << VAR_7));
 } else {
  VAR_8 = FUNC_1(VAR_3, VAR_6);
  VAR_8 = ((VAR_8 & 0x1F0) << 1) | (VAR_8 & ~0x1F0);
  VAR_8 &= ~(0x1f << VAR_7);
  VAR_8 |= (VAR_5 << VAR_7);
  FUNC_3(VAR_3, VAR_6, VAR_8);
 }
}
