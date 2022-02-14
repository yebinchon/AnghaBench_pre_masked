
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_qp {int produce_q_size; int consume_q; int produce_q; } ;
struct msghdr {int msg_iter; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (struct vmci_qp*) ;
 int FUNC_2 (struct vmci_qp*) ;
 int FUNC_3 (struct vmci_qp*) ;

ssize_t FUNC_4(struct vmci_qp *VAR_3,
     struct msghdr *VAR_4,
     size_t VAR_5,
     int VAR_6)
{
 ssize_t VAR_7;

 if (!VAR_3)
  return VAR_0;

 FUNC_1(VAR_3);

 do {
  VAR_7 = FUNC_0(VAR_3->produce_q,
        VAR_3->consume_q,
        VAR_3->produce_q_size,
        &VAR_4->msg_iter);

  if (VAR_7 == VAR_1 &&
      !FUNC_3(VAR_3))
   VAR_7 = VAR_2;

 } while (VAR_7 == VAR_1);

 FUNC_2(VAR_3);

 return VAR_7;
}
