
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct TYPE_2__ {int in_mutex; int irq; int data; int ring; int inflight_conn_req; } ;
struct sock_mapping {TYPE_1__ active; } ;
struct msghdr {int msg_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sock_mapping*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sock_mapping*) ;
 int VAR_8 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int *,size_t,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 struct sock_mapping* FUNC_7 (struct socket*) ;
 int FUNC_8 (struct socket*) ;
 int FUNC_9 (struct sock_mapping*) ;
 int FUNC_10 (int ,int ) ;

int FUNC_11(struct socket *VAR_9, struct msghdr *VAR_10, size_t VAR_11,
       int VAR_12)
{
 int VAR_13;
 struct sock_mapping *VAR_14;

 if (VAR_12 & (VAR_3|VAR_5|VAR_6|VAR_7))
  return -VAR_2;

 VAR_14 = FUNC_7(VAR_9);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 FUNC_4(&VAR_14->active.in_mutex);
 if (VAR_11 > FUNC_2(VAR_8))
  VAR_11 = FUNC_2(VAR_8);

 while (!(VAR_12 & VAR_4) && !FUNC_9(VAR_14)) {
  FUNC_10(VAR_14->active.inflight_conn_req,
      FUNC_9(VAR_14));
 }
 VAR_13 = FUNC_3(VAR_14->active.ring, &VAR_14->active.data,
     &VAR_10->msg_iter, VAR_11, VAR_12);

 if (VAR_13 > 0)
  FUNC_6(VAR_14->active.irq);
 if (VAR_13 == 0)
  VAR_13 = (VAR_12 & VAR_4) ? -VAR_0 : 0;
 if (VAR_13 == -VAR_1)
  VAR_13 = 0;

 FUNC_5(&VAR_14->active.in_mutex);
 FUNC_8(VAR_9);
 return VAR_13;
}
