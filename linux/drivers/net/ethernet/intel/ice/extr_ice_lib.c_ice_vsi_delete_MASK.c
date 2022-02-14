
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_vsi_ctx {int info; int vsi_num; int vf_num; } ;
struct ice_vsi {scalar_t__ type; int vsi_num; int idx; int info; int vf_id; struct ice_pf* back; } ;
struct ice_pf {TYPE_1__* pdev; int hw; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,struct ice_vsi_ctx*) ;
 struct ice_vsi_ctx* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int ,struct ice_vsi_ctx*,int,int *) ;
 int FUNC_4 (int *,int *,int) ;

void FUNC_5(struct ice_vsi *VAR_2)
{
 struct ice_pf *VAR_3 = VAR_2->back;
 struct ice_vsi_ctx *VAR_4;
 enum ice_status VAR_5;

 VAR_4 = FUNC_2(&VAR_3->pdev->dev, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 if (VAR_2->type == VAR_1)
  VAR_4->vf_num = VAR_2->vf_id;
 VAR_4->vsi_num = VAR_2->vsi_num;

 FUNC_4(&VAR_4->info, &VAR_2->info, sizeof(VAR_4->info));

 VAR_5 = FUNC_3(&VAR_3->hw, VAR_2->idx, VAR_4, 0, ((void*)0));
 if (VAR_5)
  FUNC_0(&VAR_3->pdev->dev, "Failed to delete VSI %i in FW\n",
   VAR_2->vsi_num);

 FUNC_1(&VAR_3->pdev->dev, VAR_4);
}
