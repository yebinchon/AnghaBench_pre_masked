
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_7__ {int asq_last_status; } ;
struct TYPE_10__ {TYPE_1__ aq; } ;
struct i40e_pf {TYPE_3__* pdev; TYPE_4__ hw; } ;
struct i40e_aqc_switch_config_element_resp {int dummy; } ;
struct TYPE_8__ {int num_total; int num_reported; } ;
struct i40e_aqc_get_switch_config_resp {struct i40e_aqc_switch_config_element_resp* element; TYPE_2__ header; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_4__*,struct i40e_aqc_get_switch_config_resp*,int ,scalar_t__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (struct i40e_pf*,struct i40e_aqc_switch_config_element_resp*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8(struct i40e_pf *VAR_4, bool VAR_5)
{
 struct i40e_aqc_get_switch_config_resp *VAR_6;
 u16 VAR_7 = 0;
 int VAR_8 = 0;
 u8 *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_6(VAR_3, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_6 = (struct i40e_aqc_get_switch_config_resp *)VAR_9;
 do {
  u16 VAR_11, VAR_12;

  VAR_8 = FUNC_1(&VAR_4->hw, VAR_6,
      VAR_3,
      &VAR_7, ((void*)0));
  if (VAR_8) {
   FUNC_0(&VAR_4->pdev->dev,
     "get switch config failed err %s aq_err %s\n",
     FUNC_4(&VAR_4->hw, VAR_8),
     FUNC_2(&VAR_4->hw,
          VAR_4->hw.aq.asq_last_status));
   FUNC_5(VAR_9);
   return -VAR_0;
  }

  VAR_11 = FUNC_7(VAR_6->header.num_reported);
  VAR_12 = FUNC_7(VAR_6->header.num_total);

  if (VAR_5)
   FUNC_0(&VAR_4->pdev->dev,
     "header: %d reported %d total\n",
     VAR_11, VAR_12);

  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   struct i40e_aqc_switch_config_element_resp *VAR_13 =
    &VAR_6->element[VAR_10];

   FUNC_3(VAR_4, VAR_13, VAR_11,
           VAR_5);
  }
 } while (VAR_7 != 0);

 FUNC_5(VAR_9);
 return VAR_8;
}
