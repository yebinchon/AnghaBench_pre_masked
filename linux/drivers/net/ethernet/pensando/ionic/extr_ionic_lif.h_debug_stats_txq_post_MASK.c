
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ionic_txq_desc {int cmd; } ;
struct TYPE_4__ {int dbell_count; } ;
struct ionic_qcq {TYPE_3__* stats; TYPE_1__ q; } ;
struct TYPE_5__ {int * sg_cntr; } ;
struct TYPE_6__ {TYPE_2__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct ionic_qcq *VAR_3,
     struct ionic_txq_desc *VAR_4, bool VAR_5)
{
 u8 VAR_6 = ((FUNC_0(VAR_4->cmd) >> VAR_2)
      & VAR_1);

 VAR_3->q.dbell_count += VAR_5;

 if (VAR_6 > (VAR_0 - 1))
  VAR_6 = VAR_0 - 1;

 VAR_3->stats->tx.sg_cntr[VAR_6]++;
}
