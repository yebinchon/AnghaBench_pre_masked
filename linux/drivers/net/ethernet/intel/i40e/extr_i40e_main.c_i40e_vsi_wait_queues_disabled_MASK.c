
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {int base_queue; int num_queue_pairs; int alloc_queue_pairs; int seid; struct i40e_pf* back; } ;
struct i40e_pf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct i40e_vsi*) ;
 int FUNC_2 (struct i40e_pf*,int,int) ;
 int FUNC_3 (struct i40e_pf*,int,int) ;

int FUNC_4(struct i40e_vsi *VAR_0)
{
 struct i40e_pf *VAR_1 = VAR_0->back;
 int VAR_2, VAR_3, VAR_4;

 VAR_3 = VAR_0->base_queue;
 for (VAR_2 = 0; VAR_2 < VAR_0->num_queue_pairs; VAR_2++, VAR_3++) {

  VAR_4 = FUNC_3(VAR_1, VAR_3, 0);
  if (VAR_4) {
   FUNC_0(&VAR_1->pdev->dev,
     "VSI seid %d Tx ring %d disable timeout\n",
     VAR_0->seid, VAR_3);
   return VAR_4;
  }

  if (!FUNC_1(VAR_0))
   goto wait_rx;


  VAR_4 = FUNC_3(VAR_1, VAR_3 + VAR_0->alloc_queue_pairs,
           0);
  if (VAR_4) {
   FUNC_0(&VAR_1->pdev->dev,
     "VSI seid %d XDP Tx ring %d disable timeout\n",
     VAR_0->seid, VAR_3);
   return VAR_4;
  }
wait_rx:

  VAR_4 = FUNC_2(VAR_1, VAR_3, 0);
  if (VAR_4) {
   FUNC_0(&VAR_1->pdev->dev,
     "VSI seid %d Rx ring %d disable timeout\n",
     VAR_0->seid, VAR_3);
   return VAR_4;
  }
 }

 return 0;
}
