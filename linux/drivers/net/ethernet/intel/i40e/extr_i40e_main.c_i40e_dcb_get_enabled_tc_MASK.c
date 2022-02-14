
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i40e_dcbx_config {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct i40e_dcbx_config*) ;

__attribute__((used)) static u8 FUNC_2(struct i40e_dcbx_config *VAR_0)
{
 u8 VAR_1 = FUNC_1(VAR_0);
 u8 VAR_2 = 1;
 u8 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2 |= FUNC_0(VAR_3);

 return VAR_2;
}
