
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct yfs_xdr_YFSVolSync {int dummy; } ;
struct yfs_xdr_YFSStoreStatus {int dummy; } ;
struct yfs_xdr_YFSFid {int dummy; } ;
struct yfs_xdr_YFSFetchStatus {int dummy; } ;
struct iattr {int ia_valid; } ;
struct TYPE_3__ {int vnode; int vid; } ;
struct afs_vnode {TYPE_1__ fid; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct afs_fs_cursor {int ac; int cbi; int key; struct afs_vnode* vnode; } ;
struct afs_call {int * request; struct afs_status_cb* out_scb; int key; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,int,int) ;
 int FUNC_2 (int *,struct afs_call*,int ) ;
 int FUNC_3 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_4 (struct afs_call*,int ) ;
 struct afs_net* FUNC_5 (struct afs_vnode*) ;
 int FUNC_6 (struct afs_call*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct afs_call*,TYPE_1__*) ;
 int * FUNC_9 (int *,TYPE_1__*) ;
 int * FUNC_10 (int *,struct iattr*) ;
 int * FUNC_11 (int *,int ) ;
 int VAR_4 ;
 int FUNC_12 (struct afs_call*,int *) ;
 int FUNC_13 (struct afs_fs_cursor*,struct iattr*,struct afs_status_cb*) ;

int FUNC_14(struct afs_fs_cursor *VAR_5, struct iattr *VAR_6,
     struct afs_status_cb *VAR_7)
{
 struct afs_vnode *VAR_8 = VAR_5->vnode;
 struct afs_call *VAR_9;
 struct afs_net *VAR_10 = FUNC_5(VAR_8);
 __be32 *VAR_11;

 if (VAR_6->ia_valid & VAR_0)
  return FUNC_13(VAR_5, VAR_6, VAR_7);

 FUNC_0(",%x,{%llx:%llu},,",
        FUNC_7(VAR_5->key), VAR_8->fid.vid, VAR_8->fid.vnode);

 VAR_9 = FUNC_1(VAR_10, &VAR_4,
       sizeof(__be32) * 2 +
       sizeof(struct yfs_xdr_YFSFid) +
       sizeof(struct yfs_xdr_YFSStoreStatus),
       sizeof(struct yfs_xdr_YFSFetchStatus) +
       sizeof(struct yfs_xdr_YFSVolSync));
 if (!VAR_9)
  return -VAR_1;

 VAR_9->key = VAR_5->key;
 VAR_9->out_scb = VAR_7;


 VAR_11 = VAR_9->request;
 VAR_11 = FUNC_11(VAR_11, VAR_3);
 VAR_11 = FUNC_11(VAR_11, 0);
 VAR_11 = FUNC_9(VAR_11, &VAR_8->fid);
 VAR_11 = FUNC_10(VAR_11, VAR_6);
 FUNC_12(VAR_9, VAR_11);

 FUNC_4(VAR_9, VAR_5->cbi);
 FUNC_8(VAR_9, &VAR_8->fid);
 FUNC_3(VAR_9, VAR_5);
 FUNC_2(&VAR_5->ac, VAR_9, VAR_2);
 return FUNC_6(VAR_9, &VAR_5->ac);
}
