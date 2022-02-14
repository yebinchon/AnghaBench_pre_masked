
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40e_vsi {struct i40e_pf* back; } ;
struct TYPE_5__ {int asq_last_status; } ;
struct TYPE_6__ {TYPE_2__ aq; } ;
struct i40e_pf {int flags; int num_cloud_filters; TYPE_3__ hw; TYPE_1__* pdev; } ;
struct i40e_cloud_filter {scalar_t__ dst_port; int cloud_node; } ;
struct flow_cls_offload {int cookie; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct i40e_vsi*,struct i40e_cloud_filter*,int) ;
 int FUNC_3 (struct i40e_vsi*,struct i40e_cloud_filter*,int) ;
 int FUNC_4 (int,int ) ;
 struct i40e_cloud_filter* FUNC_5 (struct i40e_vsi*,int *) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (struct i40e_cloud_filter*) ;

__attribute__((used)) static int FUNC_8(struct i40e_vsi *VAR_4,
     struct flow_cls_offload *VAR_5)
{
 struct i40e_cloud_filter *VAR_6 = ((void*)0);
 struct i40e_pf *VAR_7 = VAR_4->back;
 int VAR_8 = 0;

 VAR_6 = FUNC_5(VAR_4, &VAR_5->cookie);

 if (!VAR_6)
  return -VAR_0;

 FUNC_1(&VAR_6->cloud_node);

 if (VAR_6->dst_port)
  VAR_8 = FUNC_3(VAR_4, VAR_6, 0);
 else
  VAR_8 = FUNC_2(VAR_4, VAR_6, 0);

 FUNC_7(VAR_6);
 if (VAR_8) {
  FUNC_0(&VAR_7->pdev->dev,
   "Failed to delete cloud filter, err %s\n",
   FUNC_6(&VAR_7->hw, VAR_8));
  return FUNC_4(VAR_8, VAR_7->hw.aq.asq_last_status);
 }

 VAR_7->num_cloud_filters--;
 if (!VAR_7->num_cloud_filters)
  if ((VAR_7->flags & VAR_3) &&
      !(VAR_7->flags & VAR_2)) {
   VAR_7->flags |= VAR_1;
   VAR_7->flags &= ~VAR_3;
   VAR_7->flags &= ~VAR_2;
  }
 return 0;
}
