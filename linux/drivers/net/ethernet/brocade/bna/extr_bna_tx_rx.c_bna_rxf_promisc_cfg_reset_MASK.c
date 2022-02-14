
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_rxf {int rxmode_active; int rxmode_pending_bitmask; int rxmode_pending; TYPE_1__* rx; } ;
struct bna {int promisc_rid; } ;
typedef enum bna_cleanup_type { ____Placeholder_bna_cleanup_type } bna_cleanup_type ;
struct TYPE_2__ {struct bna* bna; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bna_rxf*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct bna_rxf *VAR_4, enum bna_cleanup_type VAR_5)
{
 struct bna *VAR_6 = VAR_4->rx->bna;


 if (FUNC_1(VAR_4->rxmode_pending,
    VAR_4->rxmode_pending_bitmask)) {
  FUNC_3(VAR_4->rxmode_pending,
    VAR_4->rxmode_pending_bitmask);
  VAR_4->rxmode_active &= ~VAR_2;
  VAR_6->promisc_rid = VAR_0;
  if (VAR_5 == VAR_1) {
   FUNC_0(VAR_4, VAR_3);
   return 1;
  }
 }


 if (VAR_4->rxmode_active & VAR_2) {
  FUNC_2(VAR_4->rxmode_pending,
    VAR_4->rxmode_pending_bitmask);
  VAR_4->rxmode_active &= ~VAR_2;
  if (VAR_5 == VAR_1) {
   FUNC_0(VAR_4, VAR_3);
   return 1;
  }
 }

 return 0;
}
