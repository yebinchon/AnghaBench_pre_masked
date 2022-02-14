
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct rpc_message {int * rpc_proc; struct nsm_res* rpc_resp; struct nsm_args* rpc_argp; } ;
struct rpc_clnt {int * cl_procinfo; } ;
struct nsm_res {int dummy; } ;
struct nsm_handle {int sm_mon_name; int sm_priv; } ;
struct nsm_args {int vers; int nodename; int mon_name; int proc; int prog; int * priv; } ;
struct nlm_host {TYPE_2__* net; int nodename; } ;
struct TYPE_3__ {int inum; } ;
struct TYPE_4__ {TYPE_1__ ns; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_clnt*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rpc_clnt*) ;
 int VAR_3 ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct nsm_res*,int ,int) ;
 struct rpc_clnt* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (struct rpc_clnt*,struct rpc_message*,int ) ;
 int FUNC_6 (struct rpc_clnt*) ;
 int FUNC_7 (struct rpc_clnt*) ;

__attribute__((used)) static int FUNC_8(struct nsm_handle *VAR_4, u32 VAR_5, struct nsm_res *VAR_6,
    const struct nlm_host *VAR_7)
{
 int VAR_8;
 struct rpc_clnt *VAR_9;
 struct nsm_args VAR_10 = {
  .priv = &VAR_4->sm_priv,
  .prog = VAR_2,
  .vers = 3,
  .proc = VAR_1,
  .mon_name = VAR_4->sm_mon_name,
  .nodename = VAR_7->nodename,
 };
 struct rpc_message VAR_11 = {
  .rpc_argp = &VAR_10,
  .rpc_resp = VAR_6,
 };

 FUNC_3(VAR_6, 0, sizeof(*VAR_6));

 VAR_9 = FUNC_4(VAR_7->net, VAR_7->nodename);
 if (FUNC_0(VAR_9)) {
  FUNC_2("lockd: failed to create NSM upcall transport, "
   "status=%ld, net=%x\n", FUNC_1(VAR_9),
   VAR_7->net->ns.inum);
  return FUNC_1(VAR_9);
 }

 VAR_11.rpc_proc = &VAR_9->cl_procinfo[VAR_5];
 VAR_8 = FUNC_5(VAR_9, &VAR_11, VAR_3);
 if (VAR_8 == -VAR_0) {
  FUNC_2("lockd:	NSM upcall RPC failed, status=%d, forcing rebind\n",
    VAR_8);
  FUNC_6(VAR_9);
  VAR_8 = FUNC_5(VAR_9, &VAR_11, VAR_3);
 }
 if (VAR_8 < 0)
  FUNC_2("lockd: NSM upcall RPC failed, status=%d\n",
    VAR_8);
 else
  VAR_8 = 0;

 FUNC_7(VAR_9);
 return VAR_8;
}
