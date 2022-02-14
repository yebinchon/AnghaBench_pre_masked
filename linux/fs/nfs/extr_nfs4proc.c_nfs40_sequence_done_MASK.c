
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int dummy; } ;
struct nfs4_sequence_res {int * sr_slot; } ;


 int FUNC_0 (struct nfs4_sequence_res*) ;

__attribute__((used)) static int FUNC_1(struct rpc_task *VAR_0,
          struct nfs4_sequence_res *VAR_1)
{
 if (VAR_1->sr_slot != ((void*)0))
  FUNC_0(VAR_1);
 return 1;
}
