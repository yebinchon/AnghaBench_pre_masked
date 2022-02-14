
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40e_hw {int flags; } ;
typedef scalar_t__ i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int ) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int ,int *,int *) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,int ,int *,int *) ;
 int FUNC_3 (struct i40e_hw*) ;

i40e_status FUNC_4(struct i40e_hw *VAR_2, u16 VAR_3,
     u16 *VAR_4, u16 *VAR_5)
{
 i40e_status VAR_6 = 0;

 if (VAR_2->flags & VAR_0) {
  VAR_6 = FUNC_0(VAR_2, VAR_1);
  if (!VAR_6) {
   VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4,
          VAR_5);
   FUNC_3(VAR_2);
  }
 } else {
  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 }

 return VAR_6;
}
