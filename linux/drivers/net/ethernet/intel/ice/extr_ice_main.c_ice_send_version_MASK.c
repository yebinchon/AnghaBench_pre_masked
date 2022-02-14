
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_pf {int hw; } ;
struct ice_driver_ver {scalar_t__ driver_string; scalar_t__ subbuild_ver; int build_ver; int minor_ver; int major_ver; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct ice_driver_ver*,int *) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static enum ice_status FUNC_2(struct ice_pf *VAR_4)
{
 struct ice_driver_ver VAR_5;

 VAR_5.major_ver = VAR_2;
 VAR_5.minor_ver = VAR_3;
 VAR_5.build_ver = VAR_1;
 VAR_5.subbuild_ver = 0;
 FUNC_1((char *)VAR_5.driver_string, VAR_0,
  sizeof(VAR_5.driver_string));
 return FUNC_0(&VAR_4->hw, &VAR_5, ((void*)0));
}
