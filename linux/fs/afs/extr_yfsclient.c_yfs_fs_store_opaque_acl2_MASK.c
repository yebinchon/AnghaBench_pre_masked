
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct yfs_xdr_YFSVolSync {int dummy; } ;
struct yfs_xdr_YFSFid {int dummy; } ;
struct yfs_xdr_YFSFetchStatus {int dummy; } ;
struct TYPE_5__ {int vnode; int vid; } ;
struct afs_vnode {TYPE_1__ fid; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct TYPE_6__ {int error; } ;
struct afs_fs_cursor {TYPE_3__ ac; int key; struct afs_vnode* vnode; } ;
struct afs_call {int * request; int * out_volsync; struct afs_status_cb* out_scb; int key; } ;
struct afs_acl {size_t size; int data; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,int,int) ;
 int FUNC_2 (TYPE_3__*,struct afs_call*,int ) ;
 struct afs_net* FUNC_3 (struct afs_vnode*) ;
 int FUNC_4 (struct afs_call*,TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,size_t) ;
 int FUNC_7 (void*,int ,size_t) ;
 size_t FUNC_8 (size_t,int) ;
 int FUNC_9 (struct afs_call*,TYPE_1__*) ;
 int * FUNC_10 (int *,TYPE_1__*) ;
 int * FUNC_11 (int *,size_t) ;
 int VAR_3 ;
 int FUNC_12 (struct afs_call*,int *) ;

int FUNC_13(struct afs_fs_cursor *VAR_4, const struct afs_acl *VAR_5,
        struct afs_status_cb *VAR_6)
{
 struct afs_vnode *VAR_7 = VAR_4->vnode;
 struct afs_call *VAR_8;
 struct afs_net *VAR_9 = FUNC_3(VAR_7);
 size_t VAR_10;
 __be32 *VAR_11;

 FUNC_0(",%x,{%llx:%llu},,",
        FUNC_5(VAR_4->key), VAR_7->fid.vid, VAR_7->fid.vnode);

 VAR_10 = FUNC_8(VAR_5->size, 4);
 VAR_8 = FUNC_1(VAR_9, &VAR_3,
       sizeof(__be32) * 2 +
       sizeof(struct yfs_xdr_YFSFid) +
       sizeof(__be32) + VAR_10,
       sizeof(struct yfs_xdr_YFSFetchStatus) +
       sizeof(struct yfs_xdr_YFSVolSync));
 if (!VAR_8) {
  VAR_4->ac.error = -VAR_0;
  return -VAR_0;
 }

 VAR_8->key = VAR_4->key;
 VAR_8->out_scb = VAR_6;
 VAR_8->out_volsync = ((void*)0);


 VAR_11 = VAR_8->request;
 VAR_11 = FUNC_11(VAR_11, VAR_2);
 VAR_11 = FUNC_11(VAR_11, 0);
 VAR_11 = FUNC_10(VAR_11, &VAR_7->fid);
 VAR_11 = FUNC_11(VAR_11, VAR_5->size);
 FUNC_6(VAR_11, VAR_5->data, VAR_5->size);
 if (VAR_5->size != VAR_10)
  FUNC_7((void *)VAR_11 + VAR_5->size, 0, VAR_10 - VAR_5->size);
 FUNC_12(VAR_8, VAR_11);

 FUNC_9(VAR_8, &VAR_7->fid);
 FUNC_2(&VAR_4->ac, VAR_8, VAR_1);
 return FUNC_4(VAR_8, &VAR_4->ac);
}
