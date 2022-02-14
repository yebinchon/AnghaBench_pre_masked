
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct geneve_sock {TYPE_2__* sock; } ;
typedef int sa_family_t ;
struct TYPE_4__ {TYPE_1__* sk; } ;
struct TYPE_3__ {int sk_family; } ;



__attribute__((used)) static sa_family_t FUNC_0(struct geneve_sock *VAR_0)
{
 return VAR_0->sock->sk->sk_family;
}
