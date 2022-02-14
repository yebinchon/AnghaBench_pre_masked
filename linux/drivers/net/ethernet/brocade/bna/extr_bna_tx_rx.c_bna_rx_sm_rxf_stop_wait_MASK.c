
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_rx {int rxf; TYPE_1__* bna; int (* rx_cleanup_cbfn ) (int ,struct bna_rx*) ;} ;
typedef enum bna_rx_event { ____Placeholder_bna_rx_event } bna_rx_event ;
struct TYPE_2__ {int bnad; } ;





 int FUNC_0 (struct bna_rx*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bna_rx*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct bna_rx*) ;
 int FUNC_6 (int ,struct bna_rx*) ;

__attribute__((used)) static void
FUNC_7(struct bna_rx *VAR_2, enum bna_rx_event VAR_3)
{
 switch (VAR_3) {
 case 130:
  FUNC_0(VAR_2, VAR_0);
  FUNC_3(&VAR_2->rxf);
  FUNC_5(VAR_2);
  VAR_2->rx_cleanup_cbfn(VAR_2->bna->bnad, VAR_2);
  break;

 case 129:
  FUNC_4(&VAR_2->rxf);
  break;

 case 128:
  FUNC_0(VAR_2, VAR_1);
  FUNC_5(VAR_2);
  FUNC_2(VAR_2);
  break;

 default:
  FUNC_1(VAR_3);
  break;
 }

}
