
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {int base_queue; int alloc_queue_pairs; int seid; struct i40e_pf* back; } ;
struct i40e_pf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int,char*) ;
 int FUNC_1 (struct i40e_pf*,int,int) ;
 int FUNC_2 (int ,struct i40e_pf*,int,int,int) ;
 int FUNC_3 (struct i40e_vsi*) ;
 int FUNC_4 (struct i40e_pf*,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct i40e_vsi *VAR_0, int VAR_1,
     bool VAR_2)
{
 struct i40e_pf *VAR_3 = VAR_0->back;
 int VAR_4, VAR_5 = 0;

 VAR_4 = VAR_0->base_queue + VAR_1;
 VAR_5 = FUNC_2(VAR_0->seid, VAR_3, VAR_4,
         0 , VAR_2);
 if (VAR_5) {
  FUNC_0(&VAR_3->pdev->dev,
    "VSI seid %d Tx ring %d %sable timeout\n",
    VAR_0->seid, VAR_4, (VAR_2 ? "en" : "dis"));
  return VAR_5;
 }

 FUNC_1(VAR_3, VAR_4, VAR_2);
 VAR_5 = FUNC_4(VAR_3, VAR_4, VAR_2);
 if (VAR_5) {
  FUNC_0(&VAR_3->pdev->dev,
    "VSI seid %d Rx ring %d %sable timeout\n",
    VAR_0->seid, VAR_4, (VAR_2 ? "en" : "dis"));
  return VAR_5;
 }




 if (!VAR_2)
  FUNC_5(50);

 if (!FUNC_3(VAR_0))
  return VAR_5;

 VAR_5 = FUNC_2(VAR_0->seid, VAR_3,
         VAR_4 + VAR_0->alloc_queue_pairs,
         1 , VAR_2);
 if (VAR_5) {
  FUNC_0(&VAR_3->pdev->dev,
    "VSI seid %d XDP Tx ring %d %sable timeout\n",
    VAR_0->seid, VAR_4, (VAR_2 ? "en" : "dis"));
 }

 return VAR_5;
}
