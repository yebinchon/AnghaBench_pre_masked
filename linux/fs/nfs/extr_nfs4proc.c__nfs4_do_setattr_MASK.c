
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_message {struct cred const* rpc_cred; struct nfs_setattrres* rpc_resp; struct nfs_setattrargs* rpc_argp; int * rpc_proc; } ;
struct nfs_setattrres {int seq_res; int fattr; } ;
struct nfs_setattrargs {int stateid; int seq_args; TYPE_1__* iap; } ;
struct nfs_server {int client; } ;
struct nfs_open_context {scalar_t__ state; } ;
struct nfs_lock_context {int dummy; } ;
struct inode {int dummy; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {int ia_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nfs_lock_context*) ;
 size_t VAR_4 ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct nfs_lock_context*) ;
 unsigned long VAR_5 ;
 int FUNC_3 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int) ;
 scalar_t__ FUNC_4 (struct inode*,int ,int *,struct cred const**) ;
 int * VAR_6 ;
 int FUNC_5 (scalar_t__,int ,struct nfs_lock_context*,int *,struct cred const**) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 struct nfs_lock_context* FUNC_9 (struct nfs_open_context*) ;
 int FUNC_10 (struct nfs_lock_context*) ;
 int FUNC_11 (struct cred const*) ;
 int FUNC_12 (struct nfs_server*,unsigned long) ;
 int FUNC_13 (struct inode*,int *,int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_8,
       struct nfs_setattrargs *VAR_9,
       struct nfs_setattrres *VAR_10,
       const struct cred *VAR_11,
       struct nfs_open_context *VAR_12)
{
 struct nfs_server *VAR_13 = FUNC_1(VAR_8);
 struct rpc_message VAR_14 = {
  .rpc_proc = &VAR_6[VAR_4],
  .rpc_argp = VAR_9,
  .rpc_resp = VAR_10,
  .rpc_cred = VAR_11,
 };
 const struct cred *VAR_15 = ((void*)0);
 unsigned long VAR_16 = VAR_5;
 bool VAR_17;
 int VAR_18;

 FUNC_8(VAR_10->fattr);


 VAR_17 = (VAR_9->iap->ia_valid & VAR_0) ? 1 : 0;
 if (!VAR_17)
  goto zero_stateid;

 if (FUNC_4(VAR_8, VAR_3, &VAR_9->stateid, &VAR_15)) {

 } else if (VAR_12 != ((void*)0) && VAR_12->state) {
  struct nfs_lock_context *VAR_19;
  if (!FUNC_7(VAR_12->state))
   return -VAR_1;
  VAR_19 = FUNC_9(VAR_12);
  if (FUNC_0(VAR_19))
   return FUNC_2(VAR_19);
  VAR_18 = FUNC_5(VAR_12->state, VAR_3, VAR_19,
      &VAR_9->stateid, &VAR_15);
  FUNC_10(VAR_19);
  if (VAR_18 == -VAR_2)
   return -VAR_1;
 } else {
zero_stateid:
  FUNC_6(&VAR_9->stateid, &VAR_7);
 }
 if (VAR_15)
  VAR_14.rpc_cred = VAR_15;

 VAR_18 = FUNC_3(VAR_13->client, VAR_13, &VAR_14, &VAR_9->seq_args, &VAR_10->seq_res, 1);

 FUNC_11(VAR_15);
 if (VAR_18 == 0 && VAR_12 != ((void*)0))
  FUNC_12(VAR_13, VAR_16);
 FUNC_13(VAR_8, &VAR_9->stateid, VAR_18);
 return VAR_18;
}
