
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_5__ {int in_use; } ;
struct sge_eth_txq {int txq; TYPE_2__ q; } ;
struct sge {unsigned int ethtxq_rover; unsigned int ethqsets; int tx_timer; struct sge_eth_txq* ethtxq; } ;
struct adapter {struct sge sge; } ;
struct TYPE_4__ {int tx_timer; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct adapter* VAR_2 ;
 int FUNC_2 (struct adapter*,TYPE_2__*,int,int) ;
 struct adapter* FUNC_3 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_5)
{
 struct adapter *VAR_6 = FUNC_3(VAR_6, VAR_5, VAR_4.tx_timer);
 struct sge *VAR_7 = &VAR_6->sge;
 unsigned int VAR_8, VAR_9;

 VAR_9 = VAR_0;
 VAR_8 = VAR_7->ethtxq_rover;
 do {
  struct sge_eth_txq *VAR_10 = &VAR_7->ethtxq[VAR_8];

  if (FUNC_5(&VAR_10->q) && FUNC_0(VAR_10->txq)) {
   int VAR_11 = FUNC_5(&VAR_10->q);

   if (VAR_11 > VAR_9)
    VAR_11 = VAR_9;

   FUNC_2(VAR_6, &VAR_10->q, VAR_11, 1);
   VAR_10->q.in_use -= VAR_11;
   FUNC_1(VAR_10->txq);

   VAR_9 -= VAR_11;
   if (!VAR_9)
    break;
  }

  VAR_8++;
  if (VAR_8 >= VAR_7->ethqsets)
   VAR_8 = 0;
 } while (VAR_8 != VAR_7->ethtxq_rover);
 VAR_7->ethtxq_rover = VAR_8;






 FUNC_4(&VAR_7->tx_timer, VAR_3 + (VAR_9 ? VAR_1 : 2));
}
