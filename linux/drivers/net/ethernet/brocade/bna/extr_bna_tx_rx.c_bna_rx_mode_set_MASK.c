
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bna_rxf {int cam_fltr_cbarg; int * cam_fltr_cbfn; TYPE_1__* rx; } ;
struct bna_rx {TYPE_2__* bna; struct bna_rxf rxf; } ;
typedef enum bna_rxmode { ____Placeholder_bna_rxmode } bna_rxmode ;
typedef enum bna_cb_status { ____Placeholder_bna_cb_status } bna_cb_status ;
struct TYPE_4__ {scalar_t__ promisc_rid; scalar_t__ default_mode_rid; int bnad; } ;
struct TYPE_3__ {scalar_t__ rid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bna_rxf*,int ) ;
 scalar_t__ FUNC_1 (struct bna_rxf*) ;
 scalar_t__ FUNC_2 (struct bna_rxf*) ;
 scalar_t__ FUNC_3 (struct bna_rxf*) ;
 scalar_t__ FUNC_4 (struct bna_rxf*) ;
 scalar_t__ FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (int,int) ;

enum bna_cb_status
FUNC_10(struct bna_rx *VAR_4, enum bna_rxmode VAR_5,
  enum bna_rxmode VAR_6)
{
 struct bna_rxf *VAR_7 = &VAR_4->rxf;
 int VAR_8 = 0;



 if (FUNC_9(VAR_5, VAR_6)) {

  if ((VAR_4->bna->promisc_rid != VAR_0) &&
   (VAR_4->bna->promisc_rid != VAR_7->rx->rid))
   goto err_return;


  if (VAR_4->bna->default_mode_rid != VAR_0)
   goto err_return;


  if (FUNC_7(VAR_5, VAR_6))
   goto err_return;
 }

 if (FUNC_7(VAR_5, VAR_6)) {

  if ((VAR_4->bna->default_mode_rid != VAR_0) &&
   (VAR_4->bna->default_mode_rid != VAR_7->rx->rid)) {
    goto err_return;
  }


  if (VAR_4->bna->promisc_rid != VAR_0)
   goto err_return;
 }



 if (FUNC_9(VAR_5, VAR_6)) {
  if (FUNC_4(VAR_7))
   VAR_8 = 1;
 } else if (FUNC_8(VAR_5, VAR_6)) {
  if (FUNC_3(VAR_7))
   VAR_8 = 1;
 }

 if (FUNC_6(VAR_5, VAR_6)) {
  if (FUNC_2(VAR_7))
   VAR_8 = 1;
 } else if (FUNC_5(VAR_5, VAR_6)) {
  if (FUNC_1(VAR_7))
   VAR_8 = 1;
 }



 if (VAR_8) {
  VAR_7->cam_fltr_cbfn = ((void*)0);
  VAR_7->cam_fltr_cbarg = VAR_4->bna->bnad;
  FUNC_0(VAR_7, VAR_3);
 }

 return VAR_2;

err_return:
 return VAR_1;
}
