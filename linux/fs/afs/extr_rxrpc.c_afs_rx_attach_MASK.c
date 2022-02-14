
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {int dummy; } ;
struct afs_call {struct rxrpc_call* rxcall; } ;



__attribute__((used)) static void FUNC_0(struct rxrpc_call *VAR_0, unsigned long VAR_1)
{
 struct afs_call *VAR_2 = (struct afs_call *)VAR_1;

 VAR_2->rxcall = VAR_0;
}
