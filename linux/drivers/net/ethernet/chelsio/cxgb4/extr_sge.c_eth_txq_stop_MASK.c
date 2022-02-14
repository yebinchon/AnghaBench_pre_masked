
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stops; } ;
struct sge_eth_txq {TYPE_1__ q; int txq; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct sge_eth_txq *VAR_0)
{
 FUNC_0(VAR_0->txq);
 VAR_0->q.stops++;
}
