
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_rx {void (* stop_cbfn ) (void*,struct bna_rx*) ;void* stop_cbarg; int rx_flags; TYPE_1__* bna; } ;
typedef enum bna_cleanup_type { ____Placeholder_bna_cleanup_type } bna_cleanup_type ;
struct TYPE_2__ {void* bnad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bna_rx*,int ) ;
 void FUNC_1 (void*,struct bna_rx*) ;

void
FUNC_2(struct bna_rx *VAR_3, enum bna_cleanup_type VAR_4,
  void (*VAR_5)(void *, struct bna_rx *))
{
 if (VAR_4 == VAR_1) {

  (*VAR_5)(VAR_3->bna->bnad, VAR_3);
 } else {
  VAR_3->stop_cbfn = VAR_5;
  VAR_3->stop_cbarg = VAR_3->bna->bnad;

  VAR_3->rx_flags &= ~VAR_0;

  FUNC_0(VAR_3, VAR_2);
 }
}
