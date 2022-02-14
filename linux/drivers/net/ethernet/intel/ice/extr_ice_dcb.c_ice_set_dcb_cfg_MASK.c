
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ice_dcbx_cfg {scalar_t__ app_mode; } ;
struct ice_port_info {struct ice_dcbx_cfg local_dcbx_cfg; struct ice_hw* hw; } ;
struct ice_hw {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ice_hw*,int ,void*,int ,int *) ;
 int FUNC_3 (int *,int *,struct ice_dcbx_cfg*) ;
 int FUNC_4 (struct ice_hw*) ;

enum ice_status FUNC_5(struct ice_port_info *VAR_7)
{
 u8 VAR_8, *VAR_9 = ((void*)0);
 struct ice_dcbx_cfg *VAR_10;
 enum ice_status VAR_11;
 struct ice_hw *VAR_12;
 u16 VAR_13;

 if (!VAR_7)
  return VAR_3;

 VAR_12 = VAR_7->hw;


 VAR_10 = &VAR_7->local_dcbx_cfg;

 VAR_9 = FUNC_1(FUNC_4(VAR_12), VAR_4, VAR_0);
 if (!VAR_9)
  return VAR_2;

 VAR_8 = VAR_6;
 if (VAR_10->app_mode == VAR_1)
  VAR_8 |= VAR_5;

 FUNC_3(VAR_9, &VAR_13, VAR_10);
 VAR_11 = FUNC_2(VAR_12, VAR_8, (void *)VAR_9, VAR_13,
      ((void*)0));

 FUNC_0(FUNC_4(VAR_12), VAR_9);

 return VAR_11;
}
