
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i40e_hw*,int) ;

u32 FUNC_1(struct i40e_hw *VAR_4)
{
 u32 VAR_5 = 0;
 int VAR_6;




 for (VAR_6 = VAR_3; VAR_6 <= VAR_2; VAR_6++) {
  u32 VAR_7 = FUNC_0(VAR_4, VAR_6);

  if (!VAR_7)
   continue;

  VAR_5 = (VAR_7 & VAR_0) >>
   VAR_1;
  break;
 }

 return VAR_5;
}
