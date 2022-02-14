
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvcalls_data {int out; } ;
struct sock_mapping {int irq; int write; int io; int sock; int ring_order; struct pvcalls_data data; struct pvcalls_data_intf* ring; } ;
struct pvcalls_data_intf {int out_cons; int out_prod; int out_error; } ;
struct msghdr {int msg_iter; int msg_flags; } ;
struct kvec {int iov_base; int iov_len; } ;
typedef int msg ;
typedef int RING_IDX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,struct msghdr*,int) ;
 int FUNC_4 (int *,int ,struct kvec*,int,int) ;
 int FUNC_5 (struct msghdr*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct sock_mapping *VAR_3)
{
 struct pvcalls_data_intf *VAR_4 = VAR_3->ring;
 struct pvcalls_data *VAR_5 = &VAR_3->data;
 struct msghdr VAR_6;
 struct kvec VAR_7[2];
 RING_IDX VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_8 = VAR_4->out_cons;
 VAR_9 = VAR_4->out_prod;

 FUNC_9();

 VAR_11 = FUNC_0(VAR_3->ring_order);
 VAR_10 = FUNC_8(VAR_9, VAR_8, VAR_11);
 if (VAR_10 == 0)
  return;

 FUNC_5(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.msg_flags |= VAR_1;
 if (FUNC_7(VAR_9, VAR_11) > FUNC_7(VAR_8, VAR_11)) {
  VAR_7[0].iov_base = VAR_5->out + FUNC_7(VAR_8, VAR_11);
  VAR_7[0].iov_len = VAR_10;
  FUNC_4(&VAR_6.msg_iter, VAR_2, VAR_7, 1, VAR_10);
 } else {
  VAR_7[0].iov_base = VAR_5->out + FUNC_7(VAR_8, VAR_11);
  VAR_7[0].iov_len = VAR_11 - FUNC_7(VAR_8, VAR_11);
  VAR_7[1].iov_base = VAR_5->out;
  VAR_7[1].iov_len = VAR_10 - VAR_7[0].iov_len;
  FUNC_4(&VAR_6.msg_iter, VAR_2, VAR_7, 2, VAR_10);
 }

 FUNC_2(&VAR_3->write, 0);
 VAR_12 = FUNC_3(VAR_3->sock, &VAR_6, VAR_10);
 if (VAR_12 == -VAR_0 || (VAR_12 >= 0 && VAR_12 < VAR_10)) {
  FUNC_1(&VAR_3->write);
  FUNC_1(&VAR_3->io);
 }
 if (VAR_12 == -VAR_0)
  return;


 FUNC_10();
 if (VAR_12 < 0) {
  VAR_4->out_error = VAR_12;
 } else {
  VAR_4->out_error = 0;
  VAR_4->out_cons = VAR_8 + VAR_12;
  VAR_9 = VAR_4->out_prod;
 }

 FUNC_10();
 if (VAR_9 != VAR_8 + VAR_12)
  FUNC_1(&VAR_3->write);
 FUNC_6(VAR_3->irq);
}
