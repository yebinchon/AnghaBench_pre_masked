
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ice_vsi {int type; TYPE_2__* back; int num_tx_desc; int num_rx_desc; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void FUNC_1(struct ice_vsi *VAR_2)
{
 switch (VAR_2->type) {
 case 128:

 case 129:
  VAR_2->num_rx_desc = VAR_0;
  VAR_2->num_tx_desc = VAR_1;
  break;
 default:
  FUNC_0(&VAR_2->back->pdev->dev,
   "Not setting number of Tx/Rx descriptors for VSI type %d\n",
   VAR_2->type);
  break;
 }
}
