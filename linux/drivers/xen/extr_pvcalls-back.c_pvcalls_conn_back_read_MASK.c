
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pvcalls_data {scalar_t__ in; } ;
struct sock_mapping {int irq; int read; TYPE_3__* sock; int ring_order; struct pvcalls_data data; struct pvcalls_data_intf* ring; } ;
struct pvcalls_data_intf {scalar_t__ in_cons; scalar_t__ in_prod; int in_error; } ;
struct msghdr {int msg_iter; } ;
struct kvec {scalar_t__ iov_base; scalar_t__ iov_len; } ;
typedef int msg ;
typedef int int32_t ;
struct TYPE_6__ {TYPE_1__* sk; } ;
struct TYPE_5__ {int lock; } ;
struct TYPE_4__ {TYPE_2__ sk_receive_queue; } ;
typedef scalar_t__ RING_IDX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_3__*,struct msghdr*,scalar_t__,int ) ;
 int FUNC_5 (int *,int ,struct kvec*,int,scalar_t__) ;
 int FUNC_6 (struct msghdr*,int ,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 () ;
 int FUNC_14 () ;

__attribute__((used)) static void FUNC_15(void *VAR_4)
{
 struct sock_mapping *VAR_5 = (struct sock_mapping *)VAR_4;
 struct msghdr VAR_6;
 struct kvec VAR_7[2];
 RING_IDX VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int32_t VAR_15;
 struct pvcalls_data_intf *VAR_16 = VAR_5->ring;
 struct pvcalls_data *VAR_17 = &VAR_5->data;
 unsigned long VAR_18;
 int VAR_19;

 VAR_12 = FUNC_1(VAR_5->ring_order);
 VAR_8 = VAR_16->in_cons;
 VAR_9 = VAR_16->in_prod;
 VAR_15 = VAR_16->in_error;

 FUNC_13();

 if (VAR_15)
  return;

 VAR_10 = FUNC_9(VAR_9, VAR_8, VAR_12);
 if (VAR_10 >= VAR_12)
  return;
 FUNC_11(&VAR_5->sock->sk->sk_receive_queue.lock, VAR_18);
 if (FUNC_10(&VAR_5->sock->sk->sk_receive_queue)) {
  FUNC_3(&VAR_5->read, 0);
  FUNC_12(&VAR_5->sock->sk->sk_receive_queue.lock,
    VAR_18);
  return;
 }
 FUNC_12(&VAR_5->sock->sk->sk_receive_queue.lock, VAR_18);
 VAR_11 = VAR_12 - VAR_10;
 VAR_13 = FUNC_8(VAR_9, VAR_12);
 VAR_14 = FUNC_8(VAR_8, VAR_12);

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));
 if (VAR_13 < VAR_14) {
  VAR_7[0].iov_base = VAR_17->in + VAR_13;
  VAR_7[0].iov_len = VAR_11;
  FUNC_5(&VAR_6.msg_iter, VAR_3, VAR_7, 1, VAR_11);
 } else {
  VAR_7[0].iov_base = VAR_17->in + VAR_13;
  VAR_7[0].iov_len = VAR_12 - VAR_13;
  VAR_7[1].iov_base = VAR_17->in;
  VAR_7[1].iov_len = VAR_11 - VAR_7[0].iov_len;
  FUNC_5(&VAR_6.msg_iter, VAR_3, VAR_7, 2, VAR_11);
 }

 FUNC_3(&VAR_5->read, 0);
 VAR_19 = FUNC_4(VAR_5->sock, &VAR_6, VAR_11, VAR_2);
 FUNC_0(VAR_19 > VAR_11);
 if (VAR_19 == -VAR_0)
  return;
 if (!VAR_19)
  VAR_19 = -VAR_1;
 FUNC_11(&VAR_5->sock->sk->sk_receive_queue.lock, VAR_18);
 if (VAR_19 > 0 && !FUNC_10(&VAR_5->sock->sk->sk_receive_queue))
  FUNC_2(&VAR_5->read);
 FUNC_12(&VAR_5->sock->sk->sk_receive_queue.lock, VAR_18);


 FUNC_14();
 if (VAR_19 < 0) {
  FUNC_3(&VAR_5->read, 0);
  VAR_16->in_error = VAR_19;
 } else
  VAR_16->in_prod = VAR_9 + VAR_19;

 FUNC_14();
 FUNC_7(VAR_5->irq);

 return;
}
