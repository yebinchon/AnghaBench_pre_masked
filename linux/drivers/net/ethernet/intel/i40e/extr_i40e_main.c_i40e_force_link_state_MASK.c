
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int asq_last_status; } ;
struct i40e_hw {TYPE_2__ aq; } ;
struct i40e_pf {struct i40e_hw hw; TYPE_1__* pdev; } ;
struct i40e_aq_set_phy_config {scalar_t__ link_speed; int fec_config; int low_power_ctrl; int eeer; int eee_capability; int abilities; void* phy_type_ext; int phy_type; int member_0; } ;
struct i40e_aq_get_phy_abilities_resp {scalar_t__ link_speed; scalar_t__ phy_type; int fec_cfg_curr_mod_ext_info; int d3_lpan; int eeer_val; int eee_capability; int abilities; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,int,int,struct i40e_aq_get_phy_abilities_resp*,int *) ;
 int FUNC_3 (struct i40e_hw*,int,int *) ;
 scalar_t__ FUNC_4 (struct i40e_hw*,struct i40e_aq_set_phy_config*,int *) ;
 int FUNC_5 (struct i40e_hw*,int ) ;
 int FUNC_6 (struct i40e_hw*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct i40e_hw*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static i40e_status FUNC_9(struct i40e_pf *VAR_3, bool VAR_4)
{
 struct i40e_aq_get_phy_abilities_resp VAR_5;
 struct i40e_aq_set_phy_config VAR_6 = {0};
 struct i40e_hw *VAR_7 = &VAR_3->hw;
 i40e_status VAR_8;
 u64 VAR_9;
 u8 VAR_10;







 VAR_8 = FUNC_2(VAR_7, 0, 1, &VAR_5,
        ((void*)0));
 if (VAR_8) {
  FUNC_1(&VAR_3->pdev->dev,
   "failed to get phy cap., ret =  %s last_status =  %s\n",
   FUNC_6(VAR_7, VAR_8),
   FUNC_5(VAR_7, VAR_7->aq.asq_last_status));
  return VAR_8;
 }
 VAR_10 = VAR_5.link_speed;


 VAR_8 = FUNC_2(VAR_7, 0, 0, &VAR_5,
        ((void*)0));
 if (VAR_8) {
  FUNC_1(&VAR_3->pdev->dev,
   "failed to get phy cap., ret =  %s last_status =  %s\n",
   FUNC_6(VAR_7, VAR_8),
   FUNC_5(VAR_7, VAR_7->aq.asq_last_status));
  return VAR_8;
 }




 if (VAR_4 && VAR_5.phy_type != 0 && VAR_5.link_speed != 0)
  return VAR_2;





 VAR_9 = VAR_1;
 VAR_6.phy_type = VAR_4 ? FUNC_0((u32)(VAR_9 & 0xffffffff)) : 0;
 VAR_6.phy_type_ext = VAR_4 ? (u8)((VAR_9 >> 32) & 0xff) : 0;

 VAR_6.abilities = VAR_5.abilities;
 if (VAR_5.link_speed != 0)
  VAR_6.link_speed = VAR_5.link_speed;
 else
  VAR_6.link_speed = VAR_10;
 VAR_6.eee_capability = VAR_5.eee_capability;
 VAR_6.eeer = VAR_5.eeer_val;
 VAR_6.low_power_ctrl = VAR_5.d3_lpan;
 VAR_6.fec_config = VAR_5.fec_cfg_curr_mod_ext_info &
       VAR_0;
 VAR_8 = FUNC_4(VAR_7, &VAR_6, ((void*)0));

 if (VAR_8) {
  FUNC_1(&VAR_3->pdev->dev,
   "set phy config ret =  %s last_status =  %s\n",
   FUNC_6(&VAR_3->hw, VAR_8),
   FUNC_5(&VAR_3->hw, VAR_3->hw.aq.asq_last_status));
  return VAR_8;
 }


 VAR_8 = FUNC_7(VAR_7);
 if (VAR_8) {




  FUNC_8(1000);
  FUNC_7(VAR_7);
 }

 FUNC_3(VAR_7, 1, ((void*)0));

 return VAR_2;
}
