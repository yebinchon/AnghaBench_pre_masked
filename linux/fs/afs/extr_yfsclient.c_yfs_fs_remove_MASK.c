
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yfs_xdr_YFSVolSync {int dummy; } ;
struct yfs_xdr_YFSFid {int dummy; } ;
struct yfs_xdr_YFSFetchStatus {int dummy; } ;
struct yfs_xdr_RPCFlags {int dummy; } ;
struct afs_vnode {int fid; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct afs_fs_cursor {int ac; int cbi; int key; struct afs_vnode* vnode; } ;
struct afs_call {int * request; struct afs_status_cb* out_dir_scb; int key; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,scalar_t__,int) ;
 int FUNC_2 (int *,struct afs_call*,int ) ;
 int FUNC_3 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_4 (struct afs_call*,int ) ;
 struct afs_net* FUNC_5 (struct afs_vnode*) ;
 int FUNC_6 (struct afs_call*,int *) ;
 size_t FUNC_7 (char const*) ;
 int FUNC_8 (struct afs_call*,int *,char const*) ;
 int * FUNC_9 (int *,int *) ;
 int * FUNC_10 (int *,char const*,size_t) ;
 int * FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (struct afs_call*,int *) ;

int FUNC_14(struct afs_fs_cursor *VAR_6, struct afs_vnode *VAR_7,
    const char *VAR_8, bool VAR_9,
    struct afs_status_cb *VAR_10)
{
 struct afs_vnode *VAR_11 = VAR_6->vnode;
 struct afs_call *VAR_12;
 struct afs_net *VAR_13 = FUNC_5(VAR_11);
 size_t VAR_14;
 __be32 *VAR_15;

 FUNC_0("");

 VAR_14 = FUNC_7(VAR_8);
 VAR_12 = FUNC_1(
  VAR_13, VAR_9 ? &VAR_4 : &VAR_5,
  sizeof(__be32) +
  sizeof(struct yfs_xdr_RPCFlags) +
  sizeof(struct yfs_xdr_YFSFid) +
  FUNC_12(VAR_14),
  sizeof(struct yfs_xdr_YFSFetchStatus) +
  sizeof(struct yfs_xdr_YFSVolSync));
 if (!VAR_12)
  return -VAR_0;

 VAR_12->key = VAR_6->key;
 VAR_12->out_dir_scb = VAR_10;


 VAR_15 = VAR_12->request;
 VAR_15 = FUNC_11(VAR_15, VAR_9 ? VAR_2 : VAR_3);
 VAR_15 = FUNC_11(VAR_15, 0);
 VAR_15 = FUNC_9(VAR_15, &VAR_11->fid);
 VAR_15 = FUNC_10(VAR_15, VAR_8, VAR_14);
 FUNC_13(VAR_12, VAR_15);

 FUNC_4(VAR_12, VAR_6->cbi);
 FUNC_8(VAR_12, &VAR_11->fid, VAR_8);
 FUNC_3(VAR_12, VAR_6);
 FUNC_2(&VAR_6->ac, VAR_12, VAR_1);
 return FUNC_6(VAR_12, &VAR_6->ac);
}
