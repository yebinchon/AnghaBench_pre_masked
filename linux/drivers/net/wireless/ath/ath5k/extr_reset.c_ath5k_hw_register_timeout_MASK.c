
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath5k_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath5k_hw*,int) ;
 int FUNC_1 (int) ;

int
FUNC_2(struct ath5k_hw *VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5,
         bool VAR_6)
{
 int VAR_7;
 u32 VAR_8;

 for (VAR_7 = VAR_0; VAR_7 > 0; VAR_7--) {
  VAR_8 = FUNC_0(VAR_2, VAR_3);
  if (VAR_6 && (VAR_8 & VAR_4))
   break;
  else if ((VAR_8 & VAR_4) == VAR_5)
   break;
  FUNC_1(15);
 }

 return (VAR_7 <= 0) ? -VAR_1 : 0;
}
