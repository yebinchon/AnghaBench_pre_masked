
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvnic_sub_crq_queue {size_t scrq_num; struct ibmvnic_adapter* adapter; } ;
struct ibmvnic_adapter {scalar_t__ state; int * napi; TYPE_1__* rx_stats_buffers; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int interrupts; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ibmvnic_adapter*,struct ibmvnic_sub_crq_queue*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct ibmvnic_sub_crq_queue *VAR_5 = VAR_4;
 struct ibmvnic_adapter *VAR_6 = VAR_5->adapter;




 if (FUNC_3(VAR_6->state != VAR_2))
  return VAR_1;

 VAR_6->rx_stats_buffers[VAR_5->scrq_num].interrupts++;

 if (FUNC_2(&VAR_6->napi[VAR_5->scrq_num])) {
  FUNC_1(VAR_6, VAR_5);
  FUNC_0(&VAR_6->napi[VAR_5->scrq_num]);
 }

 return VAR_0;
}
