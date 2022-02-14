
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl2_hw {int dummy; } ;


 int FUNC_0 (struct atl2_hw*,int ) ;
 int FUNC_1 (struct atl2_hw*,int ) ;
 int FUNC_2 (struct atl2_hw*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct atl2_hw *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4 & VAR_2) {
  VAR_4 &= ~VAR_2;
  FUNC_2(VAR_3, VAR_1, VAR_4);
 }
 VAR_4 = FUNC_1(VAR_3, VAR_0);
 return ((VAR_4 & 0xFF00) == 0x6C00) ? 0 : 1;
}
