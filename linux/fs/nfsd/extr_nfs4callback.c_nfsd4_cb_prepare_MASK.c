
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rpc_task {int dummy; } ;
struct nfsd4_callback {int cb_seq_status; int cb_holds_slot; scalar_t__ cb_status; struct nfs4_client* cb_clp; } ;
struct nfs4_client {scalar_t__ cl_minorversion; } ;


 int FUNC_0 (struct nfs4_client*,struct rpc_task*) ;
 int FUNC_1 (struct rpc_task*) ;

__attribute__((used)) static void FUNC_2(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfsd4_callback *VAR_2 = VAR_1;
 struct nfs4_client *VAR_3 = VAR_2->cb_clp;
 u32 VAR_4 = VAR_3->cl_minorversion;





 VAR_2->cb_seq_status = 1;
 VAR_2->cb_status = 0;
 if (VAR_4) {
  if (!VAR_2->cb_holds_slot && !FUNC_0(VAR_3, VAR_0))
   return;
  VAR_2->cb_holds_slot = 1;
 }
 FUNC_1(VAR_0);
}
