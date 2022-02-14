
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ep_shm_info; } ;
struct fjes_adapter {int raise_intr_rxdata_task; int txrx_wq; TYPE_2__ hw; } ;
struct TYPE_10__ {TYPE_4__* info; } ;
struct TYPE_8__ {int tx_status; } ;
struct TYPE_9__ {TYPE_3__ v1i; } ;
struct TYPE_6__ {TYPE_5__ tx; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,void*,size_t) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct fjes_adapter *VAR_1, int VAR_2,
   void *VAR_3, size_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_1->hw.ep_shm_info[VAR_2].tx,
        VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_1->hw.ep_shm_info[VAR_2].tx.info->v1i.tx_status =
  VAR_0;
 if (!FUNC_2(&VAR_1->raise_intr_rxdata_task))
  FUNC_1(VAR_1->txrx_wq,
      &VAR_1->raise_intr_rxdata_task);

 VAR_5 = 0;
 return VAR_5;
}
