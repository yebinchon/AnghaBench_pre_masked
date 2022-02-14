
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_2__* sk; TYPE_1__* ops; } ;
struct TYPE_4__ {int sk_receive_queue; } ;
struct TYPE_3__ {int (* peek_len ) (struct socket*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct socket*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_0)
{
 if (FUNC_2(!VAR_0))
  return 0;

 if (VAR_0->ops->peek_len)
  return VAR_0->ops->peek_len(VAR_0);

 return FUNC_0(&VAR_0->sk->sk_receive_queue);
}
