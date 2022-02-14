
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct i40e_lldp_variables {int adminstatus; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {int dcb; } ;
struct i40e_hw {int flags; int port; scalar_t__ dcbx_status; TYPE_2__ mac; TYPE_1__ func_caps; } ;
typedef scalar_t__ i40e_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int,int *) ;
 scalar_t__ FUNC_1 (struct i40e_hw*) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct i40e_hw*,struct i40e_lldp_variables*) ;
 scalar_t__ FUNC_4 (struct i40e_hw*,int ,int,int,int*) ;

i40e_status FUNC_5(struct i40e_hw *VAR_11, bool VAR_12)
{
 i40e_status VAR_13 = 0;
 struct i40e_lldp_variables VAR_14;
 u8 VAR_15 = 0;

 if (!VAR_11->func_caps.dcb)
  return VAR_9;


 if (VAR_11->flags & VAR_4) {
  u8 VAR_16 = 0;

  if (VAR_11->mac.type == VAR_8)
   VAR_16 = VAR_6;
  else if (VAR_11->mac.type == VAR_7)
   VAR_16 = VAR_5;
  else
   return VAR_9;

  VAR_13 = FUNC_4(VAR_11,
      VAR_10,
      VAR_16, 1,
      &VAR_14.adminstatus);
 } else {
  VAR_13 = FUNC_3(VAR_11, &VAR_14);
 }
 if (VAR_13)
  return VAR_3;


 VAR_15 = VAR_14.adminstatus >> (VAR_11->port * 4);
 VAR_15 &= 0xF;


 if (!VAR_15) {
  VAR_11->dcbx_status = VAR_0;
  return VAR_3;
 }


 VAR_13 = FUNC_2(VAR_11, &VAR_11->dcbx_status);
 if (VAR_13)
  return VAR_13;


 if (VAR_11->dcbx_status == VAR_1 ||
     VAR_11->dcbx_status == VAR_2) {

  VAR_13 = FUNC_1(VAR_11);
  if (VAR_13)
   return VAR_13;
 } else if (VAR_11->dcbx_status == VAR_0) {
  return VAR_3;
 }


 if (VAR_12)
  VAR_13 = FUNC_0(VAR_11, 1, ((void*)0));

 return VAR_13;
}
