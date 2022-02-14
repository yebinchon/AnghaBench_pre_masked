
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct i40e_hw {int dummy; } ;
typedef scalar_t__ i40e_status ;


 scalar_t__ FUNC_0 (struct i40e_hw*,size_t,size_t*) ;

__attribute__((used)) static i40e_status FUNC_1(struct i40e_hw *VAR_0, u16 VAR_1,
           u16 *VAR_2, u16 *VAR_3)
{
 i40e_status VAR_4 = 0;
 u16 VAR_5, VAR_6;


 for (VAR_6 = 0; VAR_6 < *VAR_2; VAR_6++) {
  VAR_5 = VAR_1 + VAR_6;
  VAR_4 = FUNC_0(VAR_0, VAR_5, &VAR_3[VAR_6]);
  if (VAR_4)
   break;
 }


 *VAR_2 = VAR_6;

 return VAR_4;
}
