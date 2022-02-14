
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {size_t idx; int af_xdp_zc_qps; int base_vector; int base_queue; int type; struct i40e_pf* back; } ;
struct i40e_pf {size_t next_vsi; int switch_mutex; struct i40e_vsi** vsi; int irq_pile; int qp_pile; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,size_t,size_t,size_t,...) ;
 int FUNC_2 (struct i40e_vsi*) ;
 int FUNC_3 (int ,int ,size_t) ;
 int FUNC_4 (struct i40e_vsi*,int) ;
 int FUNC_5 (struct i40e_vsi*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct i40e_vsi *VAR_0)
{
 struct i40e_pf *VAR_1;

 if (!VAR_0)
  return 0;

 if (!VAR_0->back)
  goto free_vsi;
 VAR_1 = VAR_0->back;

 FUNC_6(&VAR_1->switch_mutex);
 if (!VAR_1->vsi[VAR_0->idx]) {
  FUNC_1(&VAR_1->pdev->dev, "pf->vsi[%d] is NULL, just free vsi[%d](type %d)\n",
   VAR_0->idx, VAR_0->idx, VAR_0->type);
  goto unlock_vsi;
 }

 if (VAR_1->vsi[VAR_0->idx] != VAR_0) {
  FUNC_1(&VAR_1->pdev->dev,
   "pf->vsi[%d](type %d) != vsi[%d](type %d): no free!\n",
   VAR_1->vsi[VAR_0->idx]->idx,
   VAR_1->vsi[VAR_0->idx]->type,
   VAR_0->idx, VAR_0->type);
  goto unlock_vsi;
 }


 FUNC_3(VAR_1->qp_pile, VAR_0->base_queue, VAR_0->idx);
 FUNC_3(VAR_1->irq_pile, VAR_0->base_vector, VAR_0->idx);

 FUNC_0(VAR_0->af_xdp_zc_qps);
 FUNC_4(VAR_0, 1);
 FUNC_2(VAR_0);

 VAR_1->vsi[VAR_0->idx] = ((void*)0);
 if (VAR_0->idx < VAR_1->next_vsi)
  VAR_1->next_vsi = VAR_0->idx;

unlock_vsi:
 FUNC_7(&VAR_1->switch_mutex);
free_vsi:
 FUNC_5(VAR_0);

 return 0;
}
