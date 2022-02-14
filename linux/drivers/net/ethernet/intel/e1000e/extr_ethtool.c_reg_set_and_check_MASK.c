
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct e1000_adapter {int hw; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (char*,int,int,int) ;

__attribute__((used)) static bool FUNC_3(struct e1000_adapter *VAR_0, u64 *VAR_1,
         int VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 FUNC_1(&VAR_0->hw, VAR_2, VAR_4 & VAR_3);
 VAR_5 = FUNC_0(&VAR_0->hw, VAR_2);
 if ((VAR_4 & VAR_3) != (VAR_5 & VAR_3)) {
  FUNC_2("set/check test failed (reg 0x%05X): got 0x%08X expected 0x%08X\n",
        VAR_2, (VAR_5 & VAR_3), (VAR_4 & VAR_3));
  *VAR_1 = VAR_2;
  return 1;
 }
 return 0;
}
