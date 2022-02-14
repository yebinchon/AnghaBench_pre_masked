
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yfs_xdr_YFSVolSync {int dummy; } ;
struct yfs_xdr_YFSFid {int dummy; } ;
struct yfs_xdr_YFSFetchStatus {int dummy; } ;
struct afs_vnode {int fid; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct afs_fs_cursor {int ac; int cbi; int key; struct afs_vnode* vnode; } ;
struct afs_call {int * request; struct afs_status_cb* out_scb; struct afs_vnode* lvnode; int key; } ;
typedef int afs_lock_type_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,int,int) ;
 int FUNC_2 (int *,struct afs_call*,int ) ;
 int FUNC_3 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_4 (struct afs_call*,int ) ;
 struct afs_net* FUNC_5 (struct afs_vnode*) ;
 int FUNC_6 (struct afs_call*,int *) ;
 int FUNC_7 (struct afs_call*,int *,int ) ;
 int * FUNC_8 (int *,int *) ;
 int * FUNC_9 (int *,int ) ;
 int VAR_3 ;
 int FUNC_10 (struct afs_call*,int *) ;

int FUNC_11(struct afs_fs_cursor *VAR_4, afs_lock_type_t VAR_5,
      struct afs_status_cb *VAR_6)
{
 struct afs_vnode *VAR_7 = VAR_4->vnode;
 struct afs_call *VAR_8;
 struct afs_net *VAR_9 = FUNC_5(VAR_7);
 __be32 *VAR_10;

 FUNC_0("");

 VAR_8 = FUNC_1(VAR_9, &VAR_3,
       sizeof(__be32) * 2 +
       sizeof(struct yfs_xdr_YFSFid) +
       sizeof(__be32),
       sizeof(struct yfs_xdr_YFSFetchStatus) +
       sizeof(struct yfs_xdr_YFSVolSync));
 if (!VAR_8)
  return -VAR_0;

 VAR_8->key = VAR_4->key;
 VAR_8->lvnode = VAR_7;
 VAR_8->out_scb = VAR_6;


 VAR_10 = VAR_8->request;
 VAR_10 = FUNC_9(VAR_10, VAR_2);
 VAR_10 = FUNC_9(VAR_10, 0);
 VAR_10 = FUNC_8(VAR_10, &VAR_7->fid);
 VAR_10 = FUNC_9(VAR_10, VAR_5);
 FUNC_10(VAR_8, VAR_10);

 FUNC_4(VAR_8, VAR_4->cbi);
 FUNC_7(VAR_8, &VAR_7->fid, VAR_5);
 FUNC_3(VAR_8, VAR_4);
 FUNC_2(&VAR_4->ac, VAR_8, VAR_1);
 return FUNC_6(VAR_8, &VAR_4->ac);
}
