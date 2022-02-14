
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_queue_header {int dummy; } ;
struct vmci_qp {int produce_q_size; } ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct vmci_qp const*,struct vmci_queue_header**,struct vmci_queue_header**) ;
 int FUNC_1 (struct vmci_qp const*) ;
 int FUNC_2 (struct vmci_qp const*) ;
 scalar_t__ FUNC_3 (struct vmci_queue_header*,struct vmci_queue_header*,int ) ;

s64 FUNC_4(const struct vmci_qp *VAR_2)
{
 struct vmci_queue_header *VAR_3;
 struct vmci_queue_header *VAR_4;
 s64 VAR_5;

 if (!VAR_2)
  return VAR_0;

 FUNC_1(VAR_2);
 VAR_5 =
     FUNC_0(VAR_2, &VAR_3, &VAR_4);
 if (VAR_5 == VAR_1)
  VAR_5 = FUNC_3(VAR_3,
        VAR_4,
        VAR_2->produce_q_size);
 else
  VAR_5 = 0;

 FUNC_2(VAR_2);

 return VAR_5;
}
