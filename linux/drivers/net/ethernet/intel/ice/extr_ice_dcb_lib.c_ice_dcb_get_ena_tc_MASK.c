
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ice_dcbx_cfg {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct ice_dcbx_cfg*) ;

u8 FUNC_2(struct ice_dcbx_cfg *VAR_0)
{
 u8 VAR_1, VAR_2, VAR_3 = 1;

 VAR_2 = FUNC_1(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
  VAR_3 |= FUNC_0(VAR_1);

 return VAR_3;
}
