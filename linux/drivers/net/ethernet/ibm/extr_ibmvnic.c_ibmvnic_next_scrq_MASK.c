
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int first; } ;
union sub_crq {TYPE_1__ generic; } ;
struct ibmvnic_sub_crq_queue {size_t cur; size_t size; int lock; union sub_crq* msgs; } ;
struct ibmvnic_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static union sub_crq *FUNC_2(struct ibmvnic_adapter *VAR_1,
     struct ibmvnic_sub_crq_queue *VAR_2)
{
 union sub_crq *VAR_3;
 unsigned long VAR_4;

 FUNC_0(&VAR_2->lock, VAR_4);
 VAR_3 = &VAR_2->msgs[VAR_2->cur];
 if (VAR_3->generic.first & VAR_0) {
  if (++VAR_2->cur == VAR_2->size)
   VAR_2->cur = 0;
 } else {
  VAR_3 = ((void*)0);
 }
 FUNC_1(&VAR_2->lock, VAR_4);

 return VAR_3;
}
