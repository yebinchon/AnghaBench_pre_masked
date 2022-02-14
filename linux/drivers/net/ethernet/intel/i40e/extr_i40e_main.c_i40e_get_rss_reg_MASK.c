
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {struct i40e_hw hw; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t) ;
 size_t VAR_2 ;
 int FUNC_1 (size_t) ;
 size_t VAR_3 ;
 int FUNC_2 (struct i40e_hw*,int ) ;
 int FUNC_3 (struct i40e_hw*,int ) ;

__attribute__((used)) static int FUNC_4(struct i40e_vsi *VAR_4, u8 *VAR_5,
       u8 *VAR_6, u16 VAR_7)
{
 struct i40e_pf *VAR_8 = VAR_4->back;
 struct i40e_hw *VAR_9 = &VAR_8->hw;
 u16 VAR_10;

 if (VAR_5) {
  u32 *VAR_11 = (u32 *)VAR_5;

  for (VAR_10 = 0; VAR_10 <= VAR_2; VAR_10++)
   VAR_11[VAR_10] = FUNC_2(VAR_9, FUNC_0(VAR_10));
 }
 if (VAR_6) {
  u32 *VAR_12 = (u32 *)VAR_6;

  if (VAR_7 != VAR_1)
   return -VAR_0;
  for (VAR_10 = 0; VAR_10 <= VAR_3; VAR_10++)
   VAR_12[VAR_10] = FUNC_3(VAR_9, FUNC_1(VAR_10));
 }

 return 0;
}
