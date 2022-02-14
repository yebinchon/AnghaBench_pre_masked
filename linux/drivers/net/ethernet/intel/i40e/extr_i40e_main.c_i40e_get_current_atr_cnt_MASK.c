
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i40e_pf {scalar_t__ fdir_pf_active_filters; } ;


 scalar_t__ FUNC_0 (struct i40e_pf*) ;

u32 FUNC_1(struct i40e_pf *VAR_0)
{
 return FUNC_0(VAR_0) - VAR_0->fdir_pf_active_filters;
}
