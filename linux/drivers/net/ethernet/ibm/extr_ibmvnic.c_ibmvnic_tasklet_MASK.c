
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ first; } ;
union ibmvnic_crq {TYPE_1__ generic; } ;
struct ibmvnic_crq_queue {int lock; } ;
struct ibmvnic_adapter {int wait_capability; int running_cap_crqs; struct ibmvnic_crq_queue crq; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (union ibmvnic_crq*,struct ibmvnic_adapter*) ;
 union ibmvnic_crq* FUNC_2 (struct ibmvnic_adapter*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 struct ibmvnic_adapter *VAR_1 = VAR_0;
 struct ibmvnic_crq_queue *VAR_2 = &VAR_1->crq;
 union ibmvnic_crq *VAR_3;
 unsigned long VAR_4;
 bool VAR_5 = 0;

 FUNC_3(&VAR_2->lock, VAR_4);
 while (!VAR_5) {

  while ((VAR_3 = FUNC_2(VAR_1)) != ((void*)0)) {
   FUNC_1(VAR_3, VAR_1);
   VAR_3->generic.first = 0;
  }




  if (!VAR_1->wait_capability)
   VAR_5 = 1;
 }



 if (FUNC_0(&VAR_1->running_cap_crqs) != 0)
  VAR_1->wait_capability = 1;
 FUNC_4(&VAR_2->lock, VAR_4);
}
