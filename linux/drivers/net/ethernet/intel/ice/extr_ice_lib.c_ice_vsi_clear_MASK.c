
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_vsi {size_t idx; struct ice_pf* back; } ;
struct ice_pf {size_t next_vsi; TYPE_1__* pdev; int sw_mutex; struct ice_vsi** vsi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,struct ice_vsi*) ;
 int FUNC_2 (struct ice_vsi*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ice_vsi *VAR_1)
{
 struct ice_pf *VAR_2 = ((void*)0);

 if (!VAR_1)
  return 0;

 if (!VAR_1->back)
  return -VAR_0;

 VAR_2 = VAR_1->back;

 if (!VAR_2->vsi[VAR_1->idx] || VAR_2->vsi[VAR_1->idx] != VAR_1) {
  FUNC_0(&VAR_2->pdev->dev, "vsi does not exist at pf->vsi[%d]\n",
   VAR_1->idx);
  return -VAR_0;
 }

 FUNC_3(&VAR_2->sw_mutex);


 VAR_2->vsi[VAR_1->idx] = ((void*)0);
 if (VAR_1->idx < VAR_2->next_vsi)
  VAR_2->next_vsi = VAR_1->idx;

 FUNC_2(VAR_1);
 FUNC_4(&VAR_2->sw_mutex);
 FUNC_1(&VAR_2->pdev->dev, VAR_1);

 return 0;
}
