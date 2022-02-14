
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_ioceth {TYPE_1__* bna; } ;
typedef enum bna_ioceth_event { ____Placeholder_bna_ioceth_event } bna_ioceth_event ;
struct TYPE_2__ {int stats_mod; int enet; } ;




 int FUNC_0 (struct bna_ioceth*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bna_ioceth*) ;

__attribute__((used)) static void
FUNC_5(struct bna_ioceth *VAR_2, enum bna_ioceth_event VAR_3)
{
 switch (VAR_3) {
 case 129:
  FUNC_0(VAR_2, VAR_0);
  break;

 case 128:
  FUNC_4(VAR_2);
  FUNC_2(&VAR_2->bna->enet);
  FUNC_3(&VAR_2->bna->stats_mod);
  FUNC_0(VAR_2, VAR_1);
  break;

 default:
  FUNC_1(VAR_3);
 }
}
