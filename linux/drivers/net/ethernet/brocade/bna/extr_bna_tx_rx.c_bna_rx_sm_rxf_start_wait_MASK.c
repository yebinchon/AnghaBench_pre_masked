
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_rx {TYPE_1__* bna; int (* rx_cleanup_cbfn ) (int ,struct bna_rx*) ;int rxf; } ;
typedef enum bna_rx_event { ____Placeholder_bna_rx_event } bna_rx_event ;
struct TYPE_2__ {int bnad; } ;





 int FUNC_0 (struct bna_rx*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bna_rx*) ;
 int FUNC_4 (int ,struct bna_rx*) ;

__attribute__((used)) static void FUNC_5(struct bna_rx *VAR_3,
    enum bna_rx_event VAR_4)
{
 switch (VAR_4) {
 case 128:
  FUNC_0(VAR_3, VAR_1);
  break;

 case 130:
  FUNC_0(VAR_3, VAR_0);
  FUNC_2(&VAR_3->rxf);
  FUNC_3(VAR_3);
  VAR_3->rx_cleanup_cbfn(VAR_3->bna->bnad, VAR_3);
  break;

 case 129:
  FUNC_0(VAR_3, VAR_2);
  break;

 default:
  FUNC_1(VAR_4);
  break;
 }
}
