
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vmci_queue_header {int dummy; } ;
struct vmci_qp {scalar_t__ consume_q_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vmci_qp const*,struct vmci_queue_header**,struct vmci_queue_header**) ;
 int FUNC_1 (struct vmci_qp const*) ;
 int FUNC_2 (struct vmci_qp const*) ;
 int FUNC_3 (struct vmci_queue_header*,struct vmci_queue_header*,scalar_t__*,scalar_t__*) ;

int FUNC_4(const struct vmci_qp *VAR_3,
       u64 *VAR_4,
       u64 *VAR_5)
{
 struct vmci_queue_header *VAR_6;
 struct vmci_queue_header *VAR_7;
 int VAR_8;

 if (!VAR_3)
  return VAR_0;

 FUNC_1(VAR_3);
 VAR_8 =
     FUNC_0(VAR_3, &VAR_6, &VAR_7);
 if (VAR_8 == VAR_2)
  FUNC_3(VAR_7, VAR_6,
        VAR_4, VAR_5);
 FUNC_2(VAR_3);

 if (VAR_8 == VAR_2 &&
     ((VAR_4 && *VAR_4 >= VAR_3->consume_q_size) ||
      (VAR_5 && *VAR_5 >= VAR_3->consume_q_size)))
  return VAR_1;

 return VAR_8;
}
