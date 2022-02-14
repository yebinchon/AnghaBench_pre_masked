
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40e_vsi {TYPE_3__* back; int seid; } ;
struct TYPE_4__ {int asq_last_status; } ;
struct i40e_hw {TYPE_1__ aq; } ;
struct i40e_aqc_remove_macvlan_element_data {int dummy; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_6__ {TYPE_2__* pdev; struct i40e_hw hw; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char const*,int ,int ) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int ,struct i40e_aqc_remove_macvlan_element_data*,int,int *) ;
 int FUNC_2 (struct i40e_hw*,int) ;
 int FUNC_3 (struct i40e_hw*,scalar_t__) ;

__attribute__((used)) static
void FUNC_4(struct i40e_vsi *VAR_2, const char *VAR_3,
     struct i40e_aqc_remove_macvlan_element_data *VAR_4,
     int VAR_5, int *VAR_6)
{
 struct i40e_hw *VAR_7 = &VAR_2->back->hw;
 i40e_status VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_7, VAR_2->seid, VAR_4, VAR_5, ((void*)0));
 VAR_9 = VAR_7->aq.asq_last_status;


 if (VAR_8 && !(VAR_9 == VAR_1)) {
  *VAR_6 = -VAR_0;
  FUNC_0(&VAR_2->back->pdev->dev,
    "ignoring delete macvlan error on %s, err %s, aq_err %s\n",
    VAR_3, FUNC_3(VAR_7, VAR_8),
    FUNC_2(VAR_7, VAR_9));
 }
}
