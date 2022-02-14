
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_pf {int hw; } ;
struct i40e_driver_version {int driver_string; scalar_t__ subbuild_version; int build_version; int minor_version; int major_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct i40e_driver_version*,int *) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct i40e_pf *VAR_4)
{
 struct i40e_driver_version VAR_5;

 VAR_5.major_version = VAR_2;
 VAR_5.minor_version = VAR_3;
 VAR_5.build_version = VAR_1;
 VAR_5.subbuild_version = 0;
 FUNC_1(VAR_5.driver_string, VAR_0, sizeof(VAR_5.driver_string));
 FUNC_0(&VAR_4->hw, &VAR_5, ((void*)0));
}
