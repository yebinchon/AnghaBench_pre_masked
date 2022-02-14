
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct TYPE_2__ {int out_mutex; int irq; int data; int ring; } ;
struct sock_mapping {TYPE_1__ active; } ;
struct msghdr {int msg_flags; int msg_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct sock_mapping*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sock_mapping*) ;
 int VAR_8 ;
 int FUNC_2 (int ,int *,int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct sock_mapping* FUNC_6 (struct socket*) ;
 int FUNC_7 (struct socket*) ;
 int FUNC_8 (struct sock_mapping*) ;

int FUNC_9(struct socket *VAR_9, struct msghdr *VAR_10,
     size_t VAR_11)
{
 struct sock_mapping *VAR_12;
 int VAR_13, VAR_14 = 0;
 int VAR_15 = 0, VAR_16;

 VAR_16 = VAR_10->msg_flags;
 if (VAR_16 & (VAR_3|VAR_4|VAR_6|VAR_7))
  return -VAR_1;

 VAR_12 = FUNC_6(VAR_9);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 FUNC_3(&VAR_12->active.out_mutex);
 if ((VAR_16 & VAR_5) && !FUNC_8(VAR_12)) {
  FUNC_4(&VAR_12->active.out_mutex);
  FUNC_7(VAR_9);
  return -VAR_0;
 }
 if (VAR_11 > VAR_2)
  VAR_11 = VAR_2;

again:
 VAR_15++;
 VAR_13 = FUNC_2(VAR_12->active.ring,
       &VAR_12->active.data, &VAR_10->msg_iter,
       VAR_11);
 if (VAR_13 > 0) {
  VAR_11 -= VAR_13;
  VAR_14 += VAR_13;
  FUNC_5(VAR_12->active.irq);
 }
 if (VAR_13 >= 0 && VAR_11 > 0 && VAR_15 < VAR_8)
  goto again;
 if (VAR_13 < 0)
  VAR_14 = VAR_13;

 FUNC_4(&VAR_12->active.out_mutex);
 FUNC_7(VAR_9);
 return VAR_14;
}
