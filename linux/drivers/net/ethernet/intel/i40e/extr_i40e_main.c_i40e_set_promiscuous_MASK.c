
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i40e_vsi {scalar_t__ type; int seid; } ;
struct TYPE_4__ {int asq_last_status; } ;
struct i40e_hw {TYPE_2__ aq; } ;
struct i40e_pf {size_t lan_vsi; scalar_t__ lan_veb; int flags; int cur_promisc; TYPE_1__* pdev; struct i40e_hw hw; struct i40e_vsi** vsi; } ;
typedef int i40e_status ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct i40e_hw*,int ,int *) ;
 int FUNC_2 (struct i40e_hw*,int ,int *) ;
 int FUNC_3 (struct i40e_hw*,int ,int,int *) ;
 int FUNC_4 (struct i40e_hw*,int ,int,int *,int) ;
 int FUNC_5 (struct i40e_hw*,int ) ;
 int FUNC_6 (struct i40e_hw*,int) ;

__attribute__((used)) static int FUNC_7(struct i40e_pf *VAR_3, bool VAR_4)
{
 struct i40e_vsi *VAR_5 = VAR_3->vsi[VAR_3->lan_vsi];
 struct i40e_hw *VAR_6 = &VAR_3->hw;
 i40e_status VAR_7;

 if (VAR_5->type == VAR_2 &&
     VAR_3->lan_veb != VAR_1 &&
     !(VAR_3->flags & VAR_0)) {





  if (VAR_4)
   VAR_7 = FUNC_2(VAR_6,
        VAR_5->seid,
        ((void*)0));
  else
   VAR_7 = FUNC_1(VAR_6,
          VAR_5->seid,
          ((void*)0));
  if (VAR_7) {
   FUNC_0(&VAR_3->pdev->dev,
     "Set default VSI failed, err %s, aq_err %s\n",
     FUNC_6(VAR_6, VAR_7),
     FUNC_5(VAR_6, VAR_6->aq.asq_last_status));
  }
 } else {
  VAR_7 = FUNC_4(
        VAR_6,
        VAR_5->seid,
        VAR_4, ((void*)0),
        1);
  if (VAR_7) {
   FUNC_0(&VAR_3->pdev->dev,
     "set unicast promisc failed, err %s, aq_err %s\n",
     FUNC_6(VAR_6, VAR_7),
     FUNC_5(VAR_6, VAR_6->aq.asq_last_status));
  }
  VAR_7 = FUNC_3(
        VAR_6,
        VAR_5->seid,
        VAR_4, ((void*)0));
  if (VAR_7) {
   FUNC_0(&VAR_3->pdev->dev,
     "set multicast promisc failed, err %s, aq_err %s\n",
     FUNC_6(VAR_6, VAR_7),
     FUNC_5(VAR_6, VAR_6->aq.asq_last_status));
  }
 }

 if (!VAR_7)
  VAR_3->cur_promisc = VAR_4;

 return VAR_7;
}
