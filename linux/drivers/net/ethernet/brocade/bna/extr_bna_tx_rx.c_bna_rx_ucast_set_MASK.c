
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct bna_rxf {int ucast_pending_set; int cam_fltr_cbarg; int * cam_fltr_cbfn; TYPE_3__* ucast_pending_mac; TYPE_1__* rx; } ;
struct bna_rx {TYPE_2__* bna; struct bna_rxf rxf; } ;
typedef enum bna_cb_status { ____Placeholder_bna_cb_status } bna_cb_status ;
struct TYPE_6__ {int addr; } ;
struct TYPE_5__ {int bnad; } ;
struct TYPE_4__ {int bna; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bna_rxf*,int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int const*) ;

enum bna_cb_status
FUNC_4(struct bna_rx *VAR_3, const u8 *VAR_4)
{
 struct bna_rxf *VAR_5 = &VAR_3->rxf;

 if (VAR_5->ucast_pending_mac == ((void*)0)) {
  VAR_5->ucast_pending_mac =
   FUNC_1(FUNC_2(VAR_5->rx->bna));
  if (VAR_5->ucast_pending_mac == ((void*)0))
   return VAR_1;
 }

 FUNC_3(VAR_5->ucast_pending_mac->addr, VAR_4);
 VAR_5->ucast_pending_set = 1;
 VAR_5->cam_fltr_cbfn = ((void*)0);
 VAR_5->cam_fltr_cbarg = VAR_3->bna->bnad;

 FUNC_0(VAR_5, VAR_2);

 return VAR_0;
}
