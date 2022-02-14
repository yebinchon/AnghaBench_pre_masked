
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct TYPE_6__ {scalar_t__ asq_last_status; } ;
struct TYPE_4__ {int switch_mode; } ;
struct i40e_hw {TYPE_3__ aq; TYPE_1__ dev_caps; } ;
struct i40e_pf {TYPE_2__* pdev; int last_sw_conf_valid_flags; int last_sw_conf_flags; struct i40e_hw hw; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,char*,scalar_t__,...) ;
 int FUNC_1 (struct i40e_hw*,int ,int ,int ,int *) ;
 int FUNC_2 (struct i40e_hw*,scalar_t__) ;
 int VAR_8 ;
 int FUNC_3 (struct i40e_pf*,int ) ;
 int FUNC_4 (struct i40e_hw*,int) ;

__attribute__((used)) static int FUNC_5(struct i40e_vsi *VAR_9)
{
 u8 VAR_10;
 struct i40e_pf *VAR_11 = VAR_9->back;
 struct i40e_hw *VAR_12 = &VAR_11->hw;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_11, VAR_8);
 if (VAR_13)
  return -VAR_0;

 if (VAR_12->dev_caps.switch_mode) {



  u32 VAR_14 = VAR_12->dev_caps.switch_mode &
      VAR_7;
  if (VAR_14 >= VAR_5) {
   if (VAR_14 == VAR_6)
    return 0;
   FUNC_0(&VAR_11->pdev->dev,
    "Invalid switch_mode (%d), only non-tunneled mode for cloud filter is supported\n",
    VAR_12->dev_caps.switch_mode);
   return -VAR_0;
  }
 }


 VAR_10 = VAR_2;


 VAR_10 |= VAR_3;


 VAR_10 |= VAR_4;


 VAR_13 = FUNC_1(VAR_12, VAR_11->last_sw_conf_flags,
     VAR_11->last_sw_conf_valid_flags,
     VAR_10, ((void*)0));
 if (VAR_13 && VAR_12->aq.asq_last_status != VAR_1)
  FUNC_0(&VAR_11->pdev->dev,
   "couldn't set switch config bits, err %s aq_err %s\n",
   FUNC_4(VAR_12, VAR_13),
   FUNC_2(VAR_12,
        VAR_12->aq.asq_last_status));

 return VAR_13;
}
