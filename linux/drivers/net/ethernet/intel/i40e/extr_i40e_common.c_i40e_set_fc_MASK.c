
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i40e_hw {int dummy; } ;
struct i40e_aq_get_phy_abilities_resp {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_hw*,int,int,struct i40e_aq_get_phy_abilities_resp*,int *) ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_get_phy_abilities_resp*,int) ;
 int FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (int) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_3, u8 *VAR_4,
      bool VAR_5)
{
 struct i40e_aq_get_phy_abilities_resp VAR_6;
 enum i40e_status_code VAR_7;

 *VAR_4 = 0x0;


 VAR_7 = FUNC_0(VAR_3, 0, 0, &VAR_6,
           ((void*)0));
 if (VAR_7) {
  *VAR_4 |= VAR_0;
  return VAR_7;
 }

 VAR_7 = FUNC_1(VAR_3, &VAR_6, VAR_5);
 if (VAR_7)
  *VAR_4 |= VAR_1;


 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7) {




  FUNC_3(1000);
  VAR_7 = FUNC_2(VAR_3);
 }
 if (VAR_7)
  *VAR_4 |= VAR_2;

 return VAR_7;
}
