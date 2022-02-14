
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sge_uld_txq {int qresume_tsk; } ;
struct TYPE_7__ {int in_use; } ;
struct sge_eth_txq {TYPE_3__ q; } ;
struct sge {unsigned long* txq_maperr; unsigned int ethtxq_rover; unsigned int ethqsets; int tx_timer; int * ethtxq; struct sge_eth_txq ptptxq; struct sge_uld_txq** egr_map; int egr_sz; } ;
struct TYPE_5__ {int chip; } ;
struct adapter {int ptp_lock; TYPE_1__ params; struct sge sge; } ;
struct TYPE_6__ {int tx_timer; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int FUNC_1 (unsigned long) ;
 struct adapter* VAR_3 ;
 int FUNC_2 (unsigned long,unsigned long*) ;
 int FUNC_3 (struct adapter*,TYPE_3__*,int,int) ;
 struct adapter* FUNC_4 (int ,struct timer_list*,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_2__ VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct adapter*,int *,unsigned int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct timer_list *VAR_6)
{
 struct adapter *VAR_7 = FUNC_4(VAR_7, VAR_6, VAR_5.tx_timer);
 struct sge *VAR_8 = &VAR_7->sge;
 unsigned long VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_8->egr_sz); VAR_11++)
  for (VAR_9 = VAR_8->txq_maperr[VAR_11]; VAR_9; VAR_9 &= VAR_9 - 1) {
   unsigned long VAR_13 = FUNC_1(VAR_9) + VAR_11 * VAR_0;
   struct sge_uld_txq *VAR_14 = VAR_8->egr_map[VAR_13];

   FUNC_2(VAR_13, VAR_8->txq_maperr);
   FUNC_11(&VAR_14->qresume_tsk);
  }

 if (!FUNC_5(VAR_7->params.chip)) {
  struct sge_eth_txq *VAR_15 = &VAR_8->ptptxq;
  int VAR_16;

  FUNC_8(&VAR_7->ptp_lock);
  VAR_16 = FUNC_7(&VAR_15->q);

  if (VAR_16) {
   FUNC_3(VAR_7, &VAR_15->q, VAR_16, 0);
   VAR_15->q.in_use -= VAR_16;
  }
  FUNC_9(&VAR_7->ptp_lock);
 }

 VAR_12 = VAR_1;
 VAR_11 = VAR_8->ethtxq_rover;
 do {
  VAR_12 -= FUNC_10(VAR_7, &VAR_8->ethtxq[VAR_11],
             VAR_12);
  if (!VAR_12)
   break;

  if (++VAR_11 >= VAR_8->ethqsets)
   VAR_11 = 0;
 } while (VAR_11 != VAR_8->ethtxq_rover);
 VAR_8->ethtxq_rover = VAR_11;

 if (VAR_12 == 0) {



  VAR_10 = 2;
 } else {



  VAR_10 = VAR_2;
 }

 FUNC_6(&VAR_8->tx_timer, VAR_4 + VAR_10);
}
