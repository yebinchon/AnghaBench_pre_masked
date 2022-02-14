
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_rxf {int rxmode_active; int rxmode_pending_bitmask; int rxmode_pending; TYPE_1__* rx; } ;
struct bna {int promisc_rid; } ;
struct TYPE_2__ {struct bna* bna; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct bna_rxf *VAR_2)
{
 struct bna *VAR_3 = VAR_2->rx->bna;
 int VAR_4 = 0;

 if (FUNC_0(VAR_2->rxmode_pending,
    VAR_2->rxmode_pending_bitmask) ||
  (!(VAR_2->rxmode_active & VAR_1))) {

 } else if (FUNC_1(VAR_2->rxmode_pending,
     VAR_2->rxmode_pending_bitmask)) {

  FUNC_3(VAR_2->rxmode_pending,
    VAR_2->rxmode_pending_bitmask);
  VAR_3->promisc_rid = VAR_0;
 } else if (VAR_2->rxmode_active & VAR_1) {

  FUNC_2(VAR_2->rxmode_pending,
    VAR_2->rxmode_pending_bitmask);
  VAR_4 = 1;
 }

 return VAR_4;
}
