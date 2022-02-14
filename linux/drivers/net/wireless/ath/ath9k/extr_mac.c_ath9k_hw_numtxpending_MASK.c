
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hw*,int ) ;

u32 FUNC_2(struct ath_hw *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_2, FUNC_0(VAR_3)) & VAR_0;
 if (VAR_4 == 0) {

  if (FUNC_1(VAR_2, VAR_1) & (1 << VAR_3))
   VAR_4 = 1;
 }

 return VAR_4;
}
