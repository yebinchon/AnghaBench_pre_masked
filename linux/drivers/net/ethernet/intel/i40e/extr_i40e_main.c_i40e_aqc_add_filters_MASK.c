
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40e_vsi {char const* type; TYPE_3__* back; int state; int seid; } ;
struct i40e_new_mac_filter {int dummy; } ;
struct TYPE_4__ {int asq_last_status; } ;
struct i40e_hw {TYPE_1__ aq; } ;
struct i40e_aqc_add_macvlan_element_data {int dummy; } ;
struct TYPE_6__ {TYPE_2__* pdev; struct i40e_hw hw; } ;
struct TYPE_5__ {int dev; } ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int ,char const*,...) ;
 int FUNC_1 (struct i40e_hw*,int ,struct i40e_aqc_add_macvlan_element_data*,int,int *) ;
 int FUNC_2 (struct i40e_hw*,int) ;
 int FUNC_3 (int,struct i40e_aqc_add_macvlan_element_data*,struct i40e_new_mac_filter*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static
void FUNC_5(struct i40e_vsi *VAR_5, const char *VAR_6,
     struct i40e_aqc_add_macvlan_element_data *VAR_7,
     struct i40e_new_mac_filter *VAR_8,
     int VAR_9)
{
 struct i40e_hw *VAR_10 = &VAR_5->back->hw;
 int VAR_11, VAR_12;

 FUNC_1(VAR_10, VAR_5->seid, VAR_7, VAR_9, ((void*)0));
 VAR_11 = VAR_10->aq.asq_last_status;
 VAR_12 = FUNC_3(VAR_9, VAR_7, VAR_8);

 if (VAR_12 != VAR_9) {
  if (VAR_5->type == VAR_0) {
   FUNC_4(VAR_4, VAR_5->state);
   FUNC_0(&VAR_5->back->pdev->dev,
     "Error %s adding RX filters on %s, promiscuous mode forced on\n",
     FUNC_2(VAR_10, VAR_11), VAR_6);
  } else if (VAR_5->type == VAR_1 ||
      VAR_5->type == VAR_2 ||
      VAR_5->type == VAR_3) {
   FUNC_0(&VAR_5->back->pdev->dev,
     "Error %s adding RX filters on %s, please set promiscuous on manually for %s\n",
     FUNC_2(VAR_10, VAR_11), VAR_6, VAR_6);
  } else {
   FUNC_0(&VAR_5->back->pdev->dev,
     "Error %s adding RX filters on %s, incorrect VSI type: %i.\n",
     FUNC_2(VAR_10, VAR_11), VAR_6, VAR_5->type);
  }
 }
}
