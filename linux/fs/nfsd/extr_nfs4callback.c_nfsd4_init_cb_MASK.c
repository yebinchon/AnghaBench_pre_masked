
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_callback_ops {int dummy; } ;
struct TYPE_2__ {struct nfsd4_callback* rpc_resp; struct nfsd4_callback* rpc_argp; int * rpc_proc; } ;
struct nfsd4_callback {int cb_seq_status; int cb_need_restart; int cb_holds_slot; scalar_t__ cb_status; int cb_work; struct nfsd4_callback_ops const* cb_ops; TYPE_1__ cb_msg; struct nfs4_client* cb_clp; } ;
struct nfs4_client {int dummy; } ;
typedef enum nfsd4_cb_op { ____Placeholder_nfsd4_cb_op } nfsd4_cb_op ;


 int FUNC_0 (int *,int ) ;
 int * VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct nfsd4_callback *VAR_2, struct nfs4_client *VAR_3,
  const struct nfsd4_callback_ops *VAR_4, enum nfsd4_cb_op VAR_5)
{
 VAR_2->cb_clp = VAR_3;
 VAR_2->cb_msg.rpc_proc = &VAR_0[VAR_5];
 VAR_2->cb_msg.rpc_argp = VAR_2;
 VAR_2->cb_msg.rpc_resp = VAR_2;
 VAR_2->cb_ops = VAR_4;
 FUNC_0(&VAR_2->cb_work, VAR_1);
 VAR_2->cb_seq_status = 1;
 VAR_2->cb_status = 0;
 VAR_2->cb_need_restart = 0;
 VAR_2->cb_holds_slot = 0;
}
