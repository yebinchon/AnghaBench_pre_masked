
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {int base_queue; int num_queue_pairs; int seid; struct i40e_pf* back; } ;
struct i40e_pf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int,char*) ;
 int FUNC_1 (struct i40e_pf*,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct i40e_vsi *VAR_0, bool VAR_1)
{
 struct i40e_pf *VAR_2 = VAR_0->back;
 int VAR_3, VAR_4, VAR_5 = 0;

 VAR_4 = VAR_0->base_queue;
 for (VAR_3 = 0; VAR_3 < VAR_0->num_queue_pairs; VAR_3++, VAR_4++) {
  VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_1);
  if (VAR_5) {
   FUNC_0(&VAR_2->pdev->dev,
     "VSI seid %d Rx ring %d %sable timeout\n",
     VAR_0->seid, VAR_4, (VAR_1 ? "en" : "dis"));
   break;
  }
 }




 if (!VAR_1)
  FUNC_2(50);

 return VAR_5;
}
