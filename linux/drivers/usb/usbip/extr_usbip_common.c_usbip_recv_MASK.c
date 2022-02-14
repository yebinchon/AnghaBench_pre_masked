
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct msghdr {int msg_iter; int msg_flags; } ;
struct kvec {void* iov_base; int iov_len; } ;
struct TYPE_4__ {int comm; } ;
struct TYPE_3__ {int sk_allocation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,struct kvec*,int,int) ;
 scalar_t__ FUNC_2 (struct msghdr*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct socket*,struct msghdr*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (void*,int) ;

int FUNC_7(struct socket *VAR_7, void *VAR_8, int VAR_9)
{
 int VAR_10;
 struct kvec VAR_11 = {.iov_base = VAR_8, .iov_len = VAR_9};
 struct msghdr VAR_12 = {.msg_flags = VAR_2};
 int VAR_13 = 0;

 if (!VAR_7 || !VAR_8 || !VAR_9)
  return -VAR_0;

 FUNC_1(&VAR_12.msg_iter, VAR_4, &VAR_11, 1, VAR_9);

 FUNC_5("enter\n");

 do {
  VAR_7->sk->sk_allocation = VAR_1;

  VAR_10 = FUNC_4(VAR_7, &VAR_12, VAR_3);
  if (VAR_10 <= 0)
   goto err;

  VAR_13 += VAR_10;
 } while (FUNC_2(&VAR_12));

 if (VAR_6) {
  if (!FUNC_0())
   FUNC_3("%-10s:", VAR_5->comm);
  else
   FUNC_3("interrupt  :");

  FUNC_3("receiving....\n");
  FUNC_6(VAR_8, VAR_9);
  FUNC_3("received, osize %d ret %d size %zd total %d\n",
    VAR_9, VAR_10, FUNC_2(&VAR_12), VAR_13);
 }

 return VAR_13;

err:
 return VAR_10;
}
