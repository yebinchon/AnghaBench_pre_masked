
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct ice_vsi {scalar_t__ type; scalar_t__ max_frame; size_t num_rxq; TYPE_3__* back; int * rx_rings; void* rx_buf_len; TYPE_1__* netdev; } ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,size_t,int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct ice_vsi *VAR_6)
{
 u16 VAR_7;

 if (VAR_6->type == VAR_4)
  goto setup_rings;

 if (VAR_6->netdev && VAR_6->netdev->mtu > VAR_0)
  VAR_6->max_frame = VAR_6->netdev->mtu +
   VAR_2 + VAR_1 + VAR_5;
 else
  VAR_6->max_frame = VAR_3;

 VAR_6->rx_buf_len = VAR_3;
setup_rings:

 for (VAR_7 = 0; VAR_7 < VAR_6->num_rxq; VAR_7++) {
  int VAR_8;

  VAR_8 = FUNC_1(VAR_6->rx_rings[VAR_7]);
  if (VAR_8) {
   FUNC_0(&VAR_6->back->pdev->dev,
    "ice_setup_rx_ctx failed for RxQ %d, err %d\n",
    VAR_7, VAR_8);
   return VAR_8;
  }
 }

 return 0;
}
