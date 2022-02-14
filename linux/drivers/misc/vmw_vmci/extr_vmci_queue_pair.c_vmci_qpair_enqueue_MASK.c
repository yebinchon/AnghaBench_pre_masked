
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_qp {int produce_q_size; int consume_q; int produce_q; } ;
struct kvec {void* iov_base; size_t iov_len; } ;
struct iov_iter {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iov_iter*,int ,struct kvec*,int,size_t) ;
 scalar_t__ FUNC_1 (int ,int ,int ,struct iov_iter*) ;
 int FUNC_2 (struct vmci_qp*) ;
 int FUNC_3 (struct vmci_qp*) ;
 int FUNC_4 (struct vmci_qp*) ;

ssize_t FUNC_5(struct vmci_qp *VAR_4,
      const void *VAR_5,
      size_t VAR_6,
      int VAR_7)
{
 ssize_t VAR_8;
 struct iov_iter VAR_9;
 struct kvec VAR_10 = {.iov_base = (void *)VAR_5, .iov_len = VAR_6};

 if (!VAR_4 || !VAR_5)
  return VAR_0;

 FUNC_0(&VAR_9, VAR_3, &VAR_10, 1, VAR_6);

 FUNC_2(VAR_4);

 do {
  VAR_8 = FUNC_1(VAR_4->produce_q,
        VAR_4->consume_q,
        VAR_4->produce_q_size,
        &VAR_9);

  if (VAR_8 == VAR_1 &&
      !FUNC_4(VAR_4))
   VAR_8 = VAR_2;

 } while (VAR_8 == VAR_1);

 FUNC_3(VAR_4);

 return VAR_8;
}
