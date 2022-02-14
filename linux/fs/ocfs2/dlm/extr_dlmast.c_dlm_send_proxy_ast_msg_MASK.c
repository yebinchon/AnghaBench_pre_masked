
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvec {int iov_len; struct dlm_proxy_ast* iov_base; } ;
struct dlm_proxy_ast {int type; int blocked_type; int flags; int cookie; int namelen; int name; int node_idx; } ;
struct TYPE_5__ {int name; int len; } ;
struct dlm_lock_resource {TYPE_2__ lockname; } ;
struct TYPE_6__ {int node; int cookie; } ;
struct dlm_lock {TYPE_3__ ml; TYPE_1__* lksb; } ;
struct dlm_ctxt {int name; int key; int node_num; } ;
struct TYPE_4__ {struct dlm_proxy_ast* lvb; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct dlm_proxy_ast*,int ,int) ;
 int FUNC_4 (int ,char*,int ,...) ;
 int FUNC_5 (int ,int ,struct kvec*,size_t,int ,int*) ;

int FUNC_6(struct dlm_ctxt *VAR_9, struct dlm_lock_resource *VAR_10,
      struct dlm_lock *VAR_11, int VAR_12,
      int VAR_13, int VAR_14)
{
 int VAR_15 = 0;
 struct dlm_proxy_ast VAR_16;
 struct kvec VAR_17[2];
 size_t VAR_18 = 1;
 int VAR_19;

 FUNC_4(0, "%s: res %.*s, to %u, type %d, blocked_type %d\n", VAR_9->name,
      VAR_10->lockname.len, VAR_10->lockname.name, VAR_11->ml.node, VAR_12,
      VAR_13);

 FUNC_3(&VAR_16, 0, sizeof(struct dlm_proxy_ast));
 VAR_16.node_idx = VAR_9->node_num;
 VAR_16.type = VAR_12;
 VAR_16.blocked_type = VAR_13;
 VAR_16.namelen = VAR_10->lockname.len;
 FUNC_2(VAR_16.name, VAR_10->lockname.name, VAR_16.namelen);
 VAR_16.cookie = VAR_11->ml.cookie;

 VAR_17[0].iov_len = sizeof(struct dlm_proxy_ast);
 VAR_17[0].iov_base = &VAR_16;
 if (VAR_14 & VAR_1) {
  FUNC_1(&VAR_16.flags, VAR_7);
  VAR_17[1].iov_len = VAR_2;
  VAR_17[1].iov_base = VAR_11->lksb->lvb;
  VAR_18++;
 }

 VAR_15 = FUNC_5(VAR_5, VAR_9->key, VAR_17, VAR_18,
         VAR_11->ml.node, &VAR_19);
 if (VAR_15 < 0)
  FUNC_4(VAR_8, "%s: res %.*s, error %d send AST to node %u\n",
       VAR_9->name, VAR_10->lockname.len, VAR_10->lockname.name, VAR_15,
       VAR_11->ml.node);
 else {
  if (VAR_19 == VAR_6) {
   FUNC_4(VAR_8, "sent AST to node %u, it thinks this "
        "node is dead!\n", VAR_11->ml.node);
   FUNC_0();
  } else if (VAR_19 == VAR_3) {
   FUNC_4(VAR_8, "sent AST to node %u, it returned "
        "DLM_MIGRATING!\n", VAR_11->ml.node);
   FUNC_0();
  } else if (VAR_19 != VAR_4 && VAR_19 != VAR_0) {
   FUNC_4(VAR_8, "AST to node %u returned %d!\n",
        VAR_11->ml.node, VAR_19);

  }
  VAR_15 = 0;
 }
 return VAR_15;
}
