
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct rxrpc_call {int dummy; } ;
struct afs_call {int need_attention; int waitq; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_0, struct rxrpc_call *VAR_1,
        unsigned long VAR_2)
{
 struct afs_call *VAR_3 = (struct afs_call *)VAR_2;

 VAR_3->need_attention = 1;
 FUNC_0(&VAR_3->waitq);
}
