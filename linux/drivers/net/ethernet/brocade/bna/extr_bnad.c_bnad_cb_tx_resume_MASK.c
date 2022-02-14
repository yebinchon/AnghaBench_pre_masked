
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bnad_tx_info {struct bna_tcb** tcb; } ;
struct TYPE_2__ {int enet; } ;
struct bnad {int perm_addr; TYPE_1__ bna; int netdev; } ;
struct bna_tx {scalar_t__ priv; } ;
struct bna_tcb {scalar_t__* hw_consumer_index; int flags; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnad*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct bnad*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct bnad *VAR_3, struct bna_tx *VAR_4)
{
 struct bnad_tx_info *VAR_5 = (struct bnad_tx_info *)VAR_4->priv;
 struct bna_tcb *VAR_6;
 u32 VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_6 = VAR_5->tcb[VAR_8];
  if (!VAR_6)
   continue;
  VAR_7 = VAR_6->id;

  FUNC_1(FUNC_8(VAR_1, &VAR_6->flags));
  FUNC_7(VAR_1, &VAR_6->flags);
  FUNC_1(*(VAR_6->hw_consumer_index) != 0);

  if (FUNC_5(VAR_3->netdev)) {
   FUNC_6(VAR_3->netdev, VAR_7);
   FUNC_0(VAR_3, VAR_2);
  }
 }






 if (FUNC_4(VAR_3->perm_addr)) {
  FUNC_2(&VAR_3->bna.enet, VAR_3->perm_addr);
  FUNC_3(VAR_3);
 }
}
