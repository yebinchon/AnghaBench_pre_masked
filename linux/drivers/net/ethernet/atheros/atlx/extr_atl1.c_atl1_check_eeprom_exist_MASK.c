
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1_hw {scalar_t__ hw_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct atl1_hw *VAR_3)
{
 u32 VAR_4;
 VAR_4 = FUNC_1(VAR_3->hw_addr + VAR_1);
 if (VAR_4 & VAR_2) {
  VAR_4 &= ~VAR_2;
  FUNC_2(VAR_4, VAR_3->hw_addr + VAR_1);
 }

 VAR_4 = FUNC_0(VAR_3->hw_addr + VAR_0);
 return ((VAR_4 & 0xFF00) == 0x6C00) ? 0 : 1;
}
