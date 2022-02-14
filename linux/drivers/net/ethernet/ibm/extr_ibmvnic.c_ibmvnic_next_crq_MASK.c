
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int first; } ;
union ibmvnic_crq {TYPE_1__ generic; } ;
struct ibmvnic_crq_queue {size_t cur; size_t size; union ibmvnic_crq* msgs; } ;
struct ibmvnic_adapter {struct ibmvnic_crq_queue crq; } ;


 int VAR_0 ;

__attribute__((used)) static union ibmvnic_crq *FUNC_0(struct ibmvnic_adapter *VAR_1)
{
 struct ibmvnic_crq_queue *VAR_2 = &VAR_1->crq;
 union ibmvnic_crq *VAR_3;

 VAR_3 = &VAR_2->msgs[VAR_2->cur];
 if (VAR_3->generic.first & VAR_0) {
  if (++VAR_2->cur == VAR_2->size)
   VAR_2->cur = 0;
 } else {
  VAR_3 = ((void*)0);
 }

 return VAR_3;
}
