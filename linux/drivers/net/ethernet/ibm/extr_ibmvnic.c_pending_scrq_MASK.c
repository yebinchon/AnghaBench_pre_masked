
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int first; } ;
union sub_crq {TYPE_1__ generic; } ;
struct ibmvnic_sub_crq_queue {size_t cur; union sub_crq* msgs; } ;
struct ibmvnic_adapter {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ibmvnic_adapter *VAR_1,
   struct ibmvnic_sub_crq_queue *VAR_2)
{
 union sub_crq *VAR_3 = &VAR_2->msgs[VAR_2->cur];

 if (VAR_3->generic.first & VAR_0)
  return 1;
 else
  return 0;
}
