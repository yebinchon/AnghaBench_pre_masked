
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i40e_vsi {scalar_t__ type; int id; struct i40e_pf* back; } ;
struct TYPE_4__ {int asq_last_status; } ;
struct i40e_hw {TYPE_2__ aq; } ;
struct i40e_pf {struct i40e_hw hw; TYPE_1__* pdev; } ;
struct i40e_aqc_get_set_rss_key_data {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct i40e_hw*,int ,struct i40e_aqc_get_set_rss_key_data*) ;
 int FUNC_2 (struct i40e_hw*,int ,int,int *,int ) ;
 int FUNC_3 (struct i40e_hw*,int ) ;
 int FUNC_4 (struct i40e_hw*,int) ;

__attribute__((used)) static int FUNC_5(struct i40e_vsi *VAR_1, const u8 *VAR_2,
      u8 *VAR_3, u16 VAR_4)
{
 struct i40e_pf *VAR_5 = VAR_1->back;
 struct i40e_hw *VAR_6 = &VAR_5->hw;
 int VAR_7 = 0;

 if (VAR_2) {
  VAR_7 = FUNC_1(VAR_6, VAR_1->id,
   (struct i40e_aqc_get_set_rss_key_data *)VAR_2);
  if (VAR_7) {
   FUNC_0(&VAR_5->pdev->dev,
     "Cannot get RSS key, err %s aq_err %s\n",
     FUNC_4(&VAR_5->hw, VAR_7),
     FUNC_3(&VAR_5->hw,
          VAR_5->hw.aq.asq_last_status));
   return VAR_7;
  }
 }

 if (VAR_3) {
  bool VAR_8 = VAR_1->type == VAR_0 ? 1 : 0;

  VAR_7 = FUNC_2(VAR_6, VAR_1->id, VAR_8, VAR_3, VAR_4);
  if (VAR_7) {
   FUNC_0(&VAR_5->pdev->dev,
     "Cannot get RSS lut, err %s aq_err %s\n",
     FUNC_4(&VAR_5->hw, VAR_7),
     FUNC_3(&VAR_5->hw,
          VAR_5->hw.aq.asq_last_status));
   return VAR_7;
  }
 }

 return VAR_7;
}
