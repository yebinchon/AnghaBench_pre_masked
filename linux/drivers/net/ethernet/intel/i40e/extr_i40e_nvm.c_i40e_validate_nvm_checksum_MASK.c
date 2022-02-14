
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct i40e_hw {int dummy; } ;
typedef scalar_t__ i40e_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int ) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,scalar_t__*) ;
 int FUNC_3 (struct i40e_hw*) ;

i40e_status FUNC_4(struct i40e_hw *VAR_3,
       u16 *VAR_4)
{
 i40e_status VAR_5 = 0;
 u16 VAR_6 = 0;
 u16 VAR_7 = 0;






 VAR_5 = FUNC_1(VAR_3, VAR_1);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_2(VAR_3, &VAR_7);
 FUNC_0(VAR_3, VAR_2, &VAR_6);
 FUNC_3(VAR_3);
 if (VAR_5)
  return VAR_5;




 if (VAR_7 != VAR_6)
  VAR_5 = VAR_0;


 if (VAR_4)
  *VAR_4 = VAR_7;

 return VAR_5;
}
