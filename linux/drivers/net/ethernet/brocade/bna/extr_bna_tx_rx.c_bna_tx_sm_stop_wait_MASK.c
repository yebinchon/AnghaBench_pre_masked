
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_tx {TYPE_1__* bna; int (* tx_cleanup_cbfn ) (int ,struct bna_tx*) ;} ;
typedef enum bna_tx_event { ____Placeholder_bna_tx_event } bna_tx_event ;
struct TYPE_2__ {int bnad; } ;






 int FUNC_0 (struct bna_tx*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bna_tx*) ;
 int VAR_0 ;
 int FUNC_3 (int ,struct bna_tx*) ;

__attribute__((used)) static void
FUNC_4(struct bna_tx *VAR_1, enum bna_tx_event VAR_2)
{
 switch (VAR_2) {
 case 130:
 case 128:
  FUNC_0(VAR_1, VAR_0);
  VAR_1->tx_cleanup_cbfn(VAR_1->bna->bnad, VAR_1);
  break;

 case 129:




  FUNC_2(VAR_1);
  break;

 case 131:

  break;

 default:
  FUNC_1(VAR_2);
 }
}
