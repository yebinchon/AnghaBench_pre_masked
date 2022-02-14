
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct ena_ring {size_t qid; int first_interrupt; int syncp; scalar_t__ no_interrupt_event_cnt; scalar_t__ cpu; scalar_t__ per_napi_packets; int ena_dev; struct ena_adapter* adapter; int * napi; int netdev; int * dev; TYPE_1__* pdev; } ;
struct ena_adapter {int ena_dev; TYPE_2__* ena_napi; int netdev; TYPE_1__* pdev; } ;
struct TYPE_4__ {int napi; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ena_adapter *VAR_0,
         struct ena_ring *VAR_1, u16 VAR_2)
{
 VAR_1->qid = VAR_2;
 VAR_1->pdev = VAR_0->pdev;
 VAR_1->dev = &VAR_0->pdev->dev;
 VAR_1->netdev = VAR_0->netdev;
 VAR_1->napi = &VAR_0->ena_napi[VAR_2].napi;
 VAR_1->adapter = VAR_0;
 VAR_1->ena_dev = VAR_0->ena_dev;
 VAR_1->per_napi_packets = 0;
 VAR_1->cpu = 0;
 VAR_1->first_interrupt = 0;
 VAR_1->no_interrupt_event_cnt = 0;
 FUNC_0(&VAR_1->syncp);
}
