
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct bna_rxf {void (* cam_fltr_cbfn ) (struct bnad*,struct bna_rx*) ;struct bnad* cam_fltr_cbarg; int mcast_pending_add_q; TYPE_1__* rx; int mcast_active_q; } ;
struct bna_rx {TYPE_2__* bna; struct bna_rxf rxf; } ;
struct bna_mac {int qe; int addr; } ;
typedef enum bna_cb_status { ____Placeholder_bna_cb_status } bna_cb_status ;
struct TYPE_4__ {struct bnad* bnad; } ;
struct TYPE_3__ {int bna; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bna_rxf*,int ) ;
 struct bna_mac* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int const*) ;
 int FUNC_5 (int *,int *) ;

enum bna_cb_status
FUNC_6(struct bna_rx *VAR_3, const u8 *VAR_4,
   void (*VAR_5)(struct bnad *, struct bna_rx *))
{
 struct bna_rxf *VAR_6 = &VAR_3->rxf;
 struct bna_mac *VAR_7;


 if (FUNC_2(&VAR_6->mcast_active_q, VAR_4) ||
  FUNC_2(&VAR_6->mcast_pending_add_q, VAR_4)) {
  if (VAR_5)
   VAR_5(VAR_3->bna->bnad, VAR_3);
  return VAR_1;
 }

 VAR_7 = FUNC_1(FUNC_3(VAR_6->rx->bna));
 if (VAR_7 == ((void*)0))
  return VAR_0;
 FUNC_4(VAR_7->addr, VAR_4);
 FUNC_5(&VAR_7->qe, &VAR_6->mcast_pending_add_q);

 VAR_6->cam_fltr_cbfn = VAR_5;
 VAR_6->cam_fltr_cbarg = VAR_3->bna->bnad;

 FUNC_0(VAR_6, VAR_2);

 return VAR_1;
}
