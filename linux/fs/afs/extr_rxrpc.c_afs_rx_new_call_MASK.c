
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct rxrpc_call {int dummy; } ;
struct afs_net {int charge_preallocation_work; } ;


 struct afs_net* FUNC_0 (struct sock*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_1, struct rxrpc_call *VAR_2,
       unsigned long VAR_3)
{
 struct afs_net *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_0, &VAR_4->charge_preallocation_work);
}
