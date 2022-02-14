
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_qp {int consume_q_size; int consume_q; int produce_q; } ;
struct kvec {void* iov_base; size_t iov_len; } ;
struct iov_iter {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct iov_iter*,int ,struct kvec*,int,size_t) ;
 scalar_t__ FUNC_1 (int ,int ,int ,struct iov_iter*,int) ;
 int FUNC_2 (struct vmci_qp*) ;
 int FUNC_3 (struct vmci_qp*) ;
 int FUNC_4 (struct vmci_qp*) ;

ssize_t FUNC_5(struct vmci_qp *VAR_4,
   void *VAR_5,
   size_t VAR_6,
   int VAR_7)
{
 struct iov_iter VAR_8;
 struct kvec VAR_9 = {.iov_base = VAR_5, .iov_len = VAR_6};
 ssize_t VAR_10;

 if (!VAR_4 || !VAR_5)
  return VAR_1;

 FUNC_0(&VAR_8, VAR_0, &VAR_9, 1, VAR_6);

 FUNC_2(VAR_4);

 do {
  VAR_10 = FUNC_1(VAR_4->produce_q,
        VAR_4->consume_q,
        VAR_4->consume_q_size,
        &VAR_8, 0);

  if (VAR_10 == VAR_2 &&
      !FUNC_4(VAR_4))
   VAR_10 = VAR_3;

 } while (VAR_10 == VAR_2);

 FUNC_3(VAR_4);

 return VAR_10;
}
