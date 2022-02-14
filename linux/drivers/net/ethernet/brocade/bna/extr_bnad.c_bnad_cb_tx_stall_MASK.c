
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnad_tx_info {struct bna_tcb** tcb; } ;
struct bnad {int netdev; } ;
struct bna_tx {scalar_t__ priv; } ;
struct bna_tcb {int flags; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct bnad *VAR_2, struct bna_tx *VAR_3)
{
 struct bnad_tx_info *VAR_4 =
   (struct bnad_tx_info *)VAR_3->priv;
 struct bna_tcb *VAR_5;
 u32 VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5 = VAR_4->tcb[VAR_7];
  if (!VAR_5)
   continue;
  VAR_6 = VAR_5->id;
  FUNC_0(VAR_1, &VAR_5->flags);
  FUNC_1(VAR_2->netdev, VAR_6);
 }
}
