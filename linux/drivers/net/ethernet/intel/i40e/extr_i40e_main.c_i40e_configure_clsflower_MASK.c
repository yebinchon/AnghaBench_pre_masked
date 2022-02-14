
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {struct i40e_pf* back; int netdev; } ;
struct i40e_pf {int flags; int num_cloud_filters; int cloud_filter_list; int hw; TYPE_1__* pdev; int fdir_filter_list; scalar_t__ fdir_pf_active_filters; int state; } ;
struct i40e_cloud_filter {int cloud_node; scalar_t__ dst_port; int cookie; } ;
struct flow_cls_offload {int cookie; int classid; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct i40e_vsi*,struct i40e_cloud_filter*,int) ;
 int FUNC_5 (struct i40e_vsi*,struct i40e_cloud_filter*,int) ;
 int FUNC_6 (struct i40e_vsi*,int,struct i40e_cloud_filter*) ;
 int FUNC_7 (struct i40e_vsi*,struct flow_cls_offload*,struct i40e_cloud_filter*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (struct i40e_cloud_filter*) ;
 struct i40e_cloud_filter* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13(struct i40e_vsi *VAR_9,
        struct flow_cls_offload *VAR_10)
{
 int VAR_11 = FUNC_11(VAR_9->netdev, VAR_10->classid);
 struct i40e_cloud_filter *VAR_12 = ((void*)0);
 struct i40e_pf *VAR_13 = VAR_9->back;
 int VAR_14 = 0;

 if (VAR_11 < 0) {
  FUNC_1(&VAR_9->back->pdev->dev, "Invalid traffic class\n");
  return -VAR_3;
 }

 if (FUNC_12(VAR_8, VAR_13->state) ||
     FUNC_12(VAR_7, VAR_13->state))
  return -VAR_0;

 if (VAR_13->fdir_pf_active_filters ||
     (!FUNC_3(&VAR_13->fdir_filter_list))) {
  FUNC_1(&VAR_9->back->pdev->dev,
   "Flow Director Sideband filters exists, turn ntuple off to configure cloud filters\n");
  return -VAR_1;
 }

 if (VAR_9->back->flags & VAR_5) {
  FUNC_1(&VAR_9->back->pdev->dev,
   "Disable Flow Director Sideband, configuring Cloud filters via tc-flower\n");
  VAR_9->back->flags &= ~VAR_5;
  VAR_9->back->flags |= VAR_6;
 }

 VAR_12 = FUNC_10(sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return -VAR_2;

 VAR_12->cookie = VAR_10->cookie;

 VAR_14 = FUNC_7(VAR_9, VAR_10, VAR_12);
 if (VAR_14 < 0)
  goto err;

 VAR_14 = FUNC_6(VAR_9, VAR_11, VAR_12);
 if (VAR_14 < 0)
  goto err;


 if (VAR_12->dst_port)
  VAR_14 = FUNC_5(VAR_9, VAR_12, 1);
 else
  VAR_14 = FUNC_4(VAR_9, VAR_12, 1);

 if (VAR_14) {
  FUNC_1(&VAR_13->pdev->dev,
   "Failed to add cloud filter, err %s\n",
   FUNC_8(&VAR_13->hw, VAR_14));
  goto err;
 }


 FUNC_0(&VAR_12->cloud_node);

 FUNC_2(&VAR_12->cloud_node, &VAR_13->cloud_filter_list);

 VAR_13->num_cloud_filters++;

 return VAR_14;
err:
 FUNC_9(VAR_12);
 return VAR_14;
}
