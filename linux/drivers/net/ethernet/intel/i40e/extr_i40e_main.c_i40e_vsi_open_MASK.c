
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40e_vsi {scalar_t__ type; int num_queue_pairs; TYPE_2__* netdev; struct i40e_pf* back; } ;
struct i40e_pf {size_t lan_vsi; struct i40e_vsi** vsi; TYPE_1__* pdev; } ;
typedef int int_name ;
struct TYPE_5__ {char* name; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (struct i40e_pf*,int ,int) ;
 int FUNC_3 (struct i40e_vsi*) ;
 int FUNC_4 (struct i40e_vsi*) ;
 int FUNC_5 (struct i40e_vsi*) ;
 int FUNC_6 (struct i40e_vsi*) ;
 int FUNC_7 (struct i40e_vsi*) ;
 int FUNC_8 (struct i40e_vsi*) ;
 int FUNC_9 (struct i40e_vsi*,char*) ;
 int FUNC_10 (struct i40e_vsi*) ;
 int FUNC_11 (struct i40e_vsi*) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (char*,int,char*,char*,char*) ;

int FUNC_15(struct i40e_vsi *VAR_4)
{
 struct i40e_pf *VAR_5 = VAR_4->back;
 char VAR_6[VAR_1];
 int VAR_7;


 VAR_7 = FUNC_11(VAR_4);
 if (VAR_7)
  goto err_setup_tx;
 VAR_7 = FUNC_10(VAR_4);
 if (VAR_7)
  goto err_setup_rx;

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7)
  goto err_setup_rx;

 if (VAR_4->netdev) {
  FUNC_14(VAR_6, sizeof(VAR_6) - 1, "%s-%s",
    FUNC_0(&VAR_5->pdev->dev), VAR_4->netdev->name);
  VAR_7 = FUNC_9(VAR_4, VAR_6);
  if (VAR_7)
   goto err_setup_rx;


  VAR_7 = FUNC_13(VAR_4->netdev,
         VAR_4->num_queue_pairs);
  if (VAR_7)
   goto err_set_queues;

  VAR_7 = FUNC_12(VAR_4->netdev,
         VAR_4->num_queue_pairs);
  if (VAR_7)
   goto err_set_queues;

 } else if (VAR_4->type == VAR_3) {
  FUNC_14(VAR_6, sizeof(VAR_6) - 1, "%s-%s:fdir",
    FUNC_0(&VAR_5->pdev->dev),
    FUNC_1(&VAR_5->pdev->dev));
  VAR_7 = FUNC_9(VAR_4, VAR_6);

 } else {
  VAR_7 = -VAR_0;
  goto err_setup_rx;
 }

 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7)
  goto err_up_complete;

 return 0;

err_up_complete:
 FUNC_3(VAR_4);
err_set_queues:
 FUNC_6(VAR_4);
err_setup_rx:
 FUNC_7(VAR_4);
err_setup_tx:
 FUNC_8(VAR_4);
 if (VAR_4 == VAR_5->vsi[VAR_5->lan_vsi])
  FUNC_2(VAR_5, VAR_2, 1);

 return VAR_7;
}
