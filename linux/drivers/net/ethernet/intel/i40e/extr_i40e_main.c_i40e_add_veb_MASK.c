
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct i40e_vsi {int flags; int veb_idx; int uplink_seid; int seid; } ;
struct i40e_veb {int idx; int seid; int stats_idx; int enabled_tc; int uplink_seid; struct i40e_pf* pf; } ;
struct TYPE_9__ {int asq_last_status; } ;
struct TYPE_10__ {TYPE_2__ aq; } ;
struct i40e_pf {int flags; TYPE_3__ hw; TYPE_1__* pdev; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ,int,int *,int,int *) ;
 int FUNC_2 (TYPE_3__*,int ,int *) ;
 int FUNC_3 (TYPE_3__*,int ,int *,int *,int *,int *,int *,int *) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (struct i40e_veb*) ;

__attribute__((used)) static int FUNC_7(struct i40e_veb *VAR_4, struct i40e_vsi *VAR_5)
{
 struct i40e_pf *VAR_6 = VAR_4->pf;
 bool VAR_7 = !!(VAR_6->flags & VAR_2);
 int VAR_8;

 VAR_8 = FUNC_1(&VAR_6->hw, VAR_4->uplink_seid, VAR_5->seid,
         VAR_4->enabled_tc, 0,
         &VAR_4->seid, VAR_7, ((void*)0));


 if (VAR_8) {
  FUNC_0(&VAR_6->pdev->dev,
    "couldn't add VEB, err %s aq_err %s\n",
    FUNC_5(&VAR_6->hw, VAR_8),
    FUNC_4(&VAR_6->hw, VAR_6->hw.aq.asq_last_status));
  return -VAR_1;
 }


 VAR_8 = FUNC_3(&VAR_6->hw, VAR_4->seid, ((void*)0), ((void*)0),
      &VAR_4->stats_idx, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_8) {
  FUNC_0(&VAR_6->pdev->dev,
    "couldn't get VEB statistics idx, err %s aq_err %s\n",
    FUNC_5(&VAR_6->hw, VAR_8),
    FUNC_4(&VAR_6->hw, VAR_6->hw.aq.asq_last_status));
  return -VAR_1;
 }
 VAR_8 = FUNC_6(VAR_4);
 if (VAR_8) {
  FUNC_0(&VAR_6->pdev->dev,
    "couldn't get VEB bw info, err %s aq_err %s\n",
    FUNC_5(&VAR_6->hw, VAR_8),
    FUNC_4(&VAR_6->hw, VAR_6->hw.aq.asq_last_status));
  FUNC_2(&VAR_6->hw, VAR_4->seid, ((void*)0));
  return -VAR_0;
 }

 VAR_5->uplink_seid = VAR_4->seid;
 VAR_5->veb_idx = VAR_4->idx;
 VAR_5->flags |= VAR_3;

 return 0;
}
