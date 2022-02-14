
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath5k_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath5k_hw*,int ) ;

u32
FUNC_1(struct ath5k_hw *VAR_3, u32 VAR_4)
{
 if (VAR_4 >= VAR_2)
  return 0xffffffff;


 return ((FUNC_0(VAR_3, VAR_0) & VAR_1) >> VAR_4) &
  0x1;
}
