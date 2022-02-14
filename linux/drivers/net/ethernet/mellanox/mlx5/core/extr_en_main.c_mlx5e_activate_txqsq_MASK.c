
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_txqsq {int txq; int state; int txq_ix; TYPE_1__* channel; } ;
struct TYPE_2__ {int netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct mlx5e_txqsq *VAR_1)
{
 VAR_1->txq = FUNC_0(VAR_1->channel->netdev, VAR_1->txq_ix);
 FUNC_3(VAR_0, &VAR_1->state);
 FUNC_1(VAR_1->txq);
 FUNC_2(VAR_1->txq);
}
