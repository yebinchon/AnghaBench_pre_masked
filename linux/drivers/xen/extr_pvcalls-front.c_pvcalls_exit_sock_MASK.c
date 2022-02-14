
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct sock_mapping {int refcount; } ;
struct TYPE_2__ {scalar_t__ sk_send_head; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct socket *VAR_0)
{
 struct sock_mapping *VAR_1;

 VAR_1 = (struct sock_mapping *)VAR_0->sk->sk_send_head;
 FUNC_0(&VAR_1->refcount);
 FUNC_1();
}
