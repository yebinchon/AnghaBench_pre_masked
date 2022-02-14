
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_rxf {int rxmode_active; TYPE_1__* rx; int rxmode_pending_bitmask; int rxmode_pending; } ;
struct bna {int promisc_rid; } ;
struct TYPE_2__ {int rid; struct bna* bna; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct bna_rxf *VAR_1)
{
 struct bna *VAR_2 = VAR_1->rx->bna;
 int VAR_3 = 0;

 if (FUNC_1(VAR_1->rxmode_pending,
    VAR_1->rxmode_pending_bitmask) ||
  (VAR_1->rxmode_active & VAR_0)) {

 } else if (FUNC_0(VAR_1->rxmode_pending,
     VAR_1->rxmode_pending_bitmask)) {

  FUNC_3(VAR_1->rxmode_pending,
   VAR_1->rxmode_pending_bitmask);
 } else {

  FUNC_2(VAR_1->rxmode_pending,
    VAR_1->rxmode_pending_bitmask);
  VAR_2->promisc_rid = VAR_1->rx->rid;
  VAR_3 = 1;
 }

 return VAR_3;
}
