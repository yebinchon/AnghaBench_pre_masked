
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {struct i40e_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct i40e_pf *VAR_5, int VAR_6, bool VAR_7)
{
 struct i40e_hw *VAR_8 = &VAR_5->hw;
 u32 VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_9 = FUNC_1(VAR_8, FUNC_0(VAR_6));
  if (((VAR_9 >> VAR_1) & 1) ==
      ((VAR_9 >> VAR_3) & 1))
   break;
  FUNC_2(1000, 2000);
 }


 if (VAR_7 == !!(VAR_9 & VAR_2))
  return;


 if (VAR_7)
  VAR_9 |= VAR_0;
 else
  VAR_9 &= ~VAR_0;

 FUNC_3(VAR_8, FUNC_0(VAR_6), VAR_9);
}
