
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40e_hw {int flags; } ;
typedef scalar_t__ i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int ,int *) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (struct i40e_hw*) ;

i40e_status FUNC_3(struct i40e_hw *VAR_2, u16 VAR_3,
          u16 *VAR_4)
{
 i40e_status VAR_5 = 0;

 if (VAR_2->flags & VAR_0)
  VAR_5 = FUNC_1(VAR_2, VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);

 if (VAR_2->flags & VAR_0)
  FUNC_2(VAR_2);

 return VAR_5;
}
