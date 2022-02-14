
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u16 ;
struct TYPE_10__ {int phy_types; } ;
struct TYPE_9__ {int asq_last_status; scalar_t__ api_maj_ver; scalar_t__ api_min_ver; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct i40e_hw {TYPE_5__ phy; TYPE_4__ aq; TYPE_3__ mac; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aq_get_phy_abilities_resp {scalar_t__ phy_type_ext; int phy_type; } ;
struct TYPE_6__ {int param0; } ;
struct TYPE_7__ {TYPE_1__ external; } ;
struct i40e_aq_desc {TYPE_2__ params; int flags; } ;
typedef scalar_t__ i40e_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,int,int *,int *) ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (struct i40e_hw*,struct i40e_aq_desc*,struct i40e_aq_get_phy_abilities_resp*,scalar_t__,struct i40e_asq_cmd_details*) ;
 int FUNC_4 (struct i40e_aq_desc*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;

i40e_status FUNC_7(struct i40e_hw *VAR_13,
   bool VAR_14, bool VAR_15,
   struct i40e_aq_get_phy_abilities_resp *VAR_16,
   struct i40e_asq_cmd_details *VAR_17)
{
 struct i40e_aq_desc VAR_18;
 i40e_status VAR_19;
 u16 VAR_20 = sizeof(struct i40e_aq_get_phy_abilities_resp);
 u16 VAR_21 = VAR_10, VAR_22 = 0;

 if (!VAR_16)
  return VAR_5;

 do {
  FUNC_4(&VAR_18,
            VAR_12);

  VAR_18.flags |= FUNC_0((u16)VAR_0);
  if (VAR_20 > VAR_2)
   VAR_18.flags |= FUNC_0((u16)VAR_1);

  if (VAR_14)
   VAR_18.params.external.param0 |=
   FUNC_1(VAR_4);

  if (VAR_15)
   VAR_18.params.external.param0 |=
   FUNC_1(VAR_3);

  VAR_19 = FUNC_3(VAR_13, &VAR_18, VAR_16,
            VAR_20, VAR_17);

  switch (VAR_13->aq.asq_last_status) {
  case 128:
   VAR_19 = VAR_7;
   break;
  case 129:
   FUNC_6(1000, 2000);
   VAR_22++;
   VAR_19 = VAR_6;
   break;

  default:
   break;
  }

 } while ((VAR_13->aq.asq_last_status == 129) &&
  (VAR_22 < VAR_21));

 if (VAR_19)
  return VAR_19;

 if (VAR_15) {
  if (VAR_13->mac.type == VAR_9 &&
      VAR_13->aq.api_maj_ver == VAR_8 &&
      VAR_13->aq.api_min_ver >= VAR_11) {
   VAR_19 = FUNC_2(VAR_13, 1, ((void*)0), ((void*)0));
  } else {
   VAR_13->phy.phy_types = FUNC_5(VAR_16->phy_type);
   VAR_13->phy.phy_types |=
     ((u64)VAR_16->phy_type_ext << 32);
  }
 }

 return VAR_19;
}
