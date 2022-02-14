
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct i40e_hw {int dummy; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i40e_hw*,int ) ;

i40e_status FUNC_1(struct i40e_hw *VAR_4, u16 *VAR_5)
{
 u32 VAR_6;

 if (!VAR_5)
  return VAR_0;

 VAR_6 = FUNC_0(VAR_4, VAR_1);
 *VAR_5 = (u16)((VAR_6 & VAR_2) >>
   VAR_3);

 return 0;
}
