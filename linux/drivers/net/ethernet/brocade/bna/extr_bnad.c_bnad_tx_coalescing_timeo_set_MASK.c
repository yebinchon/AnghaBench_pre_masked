
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad_tx_info {int tx; } ;
struct bnad {int tx_coalescing_timeo; struct bnad_tx_info* tx_info; } ;


 int FUNC_0 (int ,int ) ;

void
FUNC_1(struct bnad *VAR_0)
{
 struct bnad_tx_info *VAR_1;

 VAR_1 = &VAR_0->tx_info[0];
 if (!VAR_1->tx)
  return;

 FUNC_0(VAR_1->tx, VAR_0->tx_coalescing_timeo);
}
