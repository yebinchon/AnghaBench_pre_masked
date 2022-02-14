
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ice_vsi {int num_rxq; TYPE_2__* netdev; int num_txq; struct ice_pf* back; } ;
struct ice_pf {TYPE_1__* pdev; } ;
typedef int int_name ;
struct TYPE_5__ {char* name; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (struct ice_vsi*) ;
 int FUNC_2 (struct ice_vsi*) ;
 int FUNC_3 (struct ice_vsi*) ;
 int FUNC_4 (struct ice_vsi*) ;
 int FUNC_5 (struct ice_vsi*) ;
 int FUNC_6 (struct ice_vsi*) ;
 int FUNC_7 (struct ice_vsi*,char*) ;
 int FUNC_8 (struct ice_vsi*) ;
 int FUNC_9 (struct ice_vsi*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (char*,int,char*,char*,char*) ;

__attribute__((used)) static int FUNC_13(struct ice_vsi *VAR_1)
{
 char VAR_2[VAR_0];
 struct ice_pf *VAR_3 = VAR_1->back;
 int VAR_4;


 VAR_4 = FUNC_9(VAR_1);
 if (VAR_4)
  goto err_setup_tx;

 VAR_4 = FUNC_8(VAR_1);
 if (VAR_4)
  goto err_setup_rx;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4)
  goto err_setup_rx;

 FUNC_12(VAR_2, sizeof(VAR_2) - 1, "%s-%s",
   FUNC_0(&VAR_3->pdev->dev), VAR_1->netdev->name);
 VAR_4 = FUNC_7(VAR_1, VAR_2);
 if (VAR_4)
  goto err_setup_rx;


 VAR_4 = FUNC_11(VAR_1->netdev, VAR_1->num_txq);
 if (VAR_4)
  goto err_set_qs;

 VAR_4 = FUNC_10(VAR_1->netdev, VAR_1->num_rxq);
 if (VAR_4)
  goto err_set_qs;

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4)
  goto err_up_complete;

 return 0;

err_up_complete:
 FUNC_1(VAR_1);
err_set_qs:
 FUNC_4(VAR_1);
err_setup_rx:
 FUNC_5(VAR_1);
err_setup_tx:
 FUNC_6(VAR_1);

 return VAR_4;
}
