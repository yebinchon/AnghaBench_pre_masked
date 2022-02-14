
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_filter_control_settings {int enable_fdir; int enable_ethtype; int enable_macvlan; int hash_lut_size; } ;
struct i40e_pf {int flags; int hw; struct i40e_filter_control_settings filter_settings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,struct i40e_filter_control_settings*) ;

__attribute__((used)) static int FUNC_1(struct i40e_pf *VAR_4)
{
 struct i40e_filter_control_settings *VAR_5 = &VAR_4->filter_settings;

 VAR_5->hash_lut_size = VAR_3;


 if (VAR_4->flags & (VAR_2 | VAR_1))
  VAR_5->enable_fdir = 1;


 VAR_5->enable_ethtype = 1;
 VAR_5->enable_macvlan = 1;

 if (FUNC_0(&VAR_4->hw, VAR_5))
  return -VAR_0;

 return 0;
}
