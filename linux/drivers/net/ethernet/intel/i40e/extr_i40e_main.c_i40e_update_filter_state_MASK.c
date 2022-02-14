
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_new_mac_filter {int state; } ;
struct i40e_aqc_add_macvlan_element_data {scalar_t__ match_method; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct i40e_new_mac_filter* FUNC_0 (struct i40e_new_mac_filter*) ;

__attribute__((used)) static int
FUNC_1(int VAR_3,
    struct i40e_aqc_add_macvlan_element_data *VAR_4,
    struct i40e_new_mac_filter *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {






  if (VAR_4[VAR_7].match_method == VAR_0) {
   VAR_5->state = VAR_2;
  } else {
   VAR_5->state = VAR_1;
   VAR_6++;
  }

  VAR_5 = FUNC_0(VAR_5);
  if (!VAR_5)
   break;
 }

 return VAR_6;
}
