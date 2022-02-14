
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct yfs_xdr_YFSVolSync {int dummy; } ;
struct yfs_xdr_YFSFid {int dummy; } ;
struct yfs_xdr_YFSFetchStatus {int dummy; } ;
struct yfs_acl {int dummy; } ;
struct TYPE_5__ {int vnode; int vid; } ;
struct afs_vnode {TYPE_1__ fid; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct TYPE_6__ {int error; } ;
struct afs_fs_cursor {TYPE_3__ ac; int cbi; int key; struct afs_vnode* vnode; } ;
struct afs_call {int * request; int * out_volsync; struct afs_status_cb* out_scb; struct yfs_acl* out_yacl; int key; } ;
typedef int __be32 ;


 int VAR_0 ;
 struct yfs_acl* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 struct afs_call* FUNC_2 (struct afs_net*,int *,int,int) ;
 int FUNC_3 (TYPE_3__*,struct afs_call*,int ) ;
 int FUNC_4 (struct afs_call*,int ) ;
 struct afs_net* FUNC_5 (struct afs_vnode*) ;
 scalar_t__ FUNC_6 (struct afs_call*,TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct afs_call*,TYPE_1__*) ;
 int * FUNC_9 (int *,TYPE_1__*) ;
 int * FUNC_10 (int *,int ) ;
 int VAR_3 ;
 int FUNC_11 (struct afs_call*,int *) ;

struct yfs_acl *FUNC_12(struct afs_fs_cursor *VAR_4,
     struct yfs_acl *VAR_5,
     struct afs_status_cb *VAR_6)
{
 struct afs_vnode *VAR_7 = VAR_4->vnode;
 struct afs_call *VAR_8;
 struct afs_net *VAR_9 = FUNC_5(VAR_7);
 __be32 *VAR_10;

 FUNC_1(",%x,{%llx:%llu},,",
        FUNC_7(VAR_4->key), VAR_7->fid.vid, VAR_7->fid.vnode);

 VAR_8 = FUNC_2(VAR_9, &VAR_3,
       sizeof(__be32) * 2 +
       sizeof(struct yfs_xdr_YFSFid),
       sizeof(__be32) * 2 +
       sizeof(struct yfs_xdr_YFSFetchStatus) +
       sizeof(struct yfs_xdr_YFSVolSync));
 if (!VAR_8) {
  VAR_4->ac.error = -VAR_0;
  return FUNC_0(-VAR_0);
 }

 VAR_8->key = VAR_4->key;
 VAR_8->out_yacl = VAR_5;
 VAR_8->out_scb = VAR_6;
 VAR_8->out_volsync = ((void*)0);


 VAR_10 = VAR_8->request;
 VAR_10 = FUNC_10(VAR_10, VAR_2);
 VAR_10 = FUNC_10(VAR_10, 0);
 VAR_10 = FUNC_9(VAR_10, &VAR_7->fid);
 FUNC_11(VAR_8, VAR_10);

 FUNC_4(VAR_8, VAR_4->cbi);
 FUNC_8(VAR_8, &VAR_7->fid);
 FUNC_3(&VAR_4->ac, VAR_8, VAR_1);
 return (struct yfs_acl *)FUNC_6(VAR_8, &VAR_4->ac);
}
