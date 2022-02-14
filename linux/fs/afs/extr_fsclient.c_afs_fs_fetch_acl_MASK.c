
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int unique; int vnode; int vid; } ;
struct afs_vnode {TYPE_1__ fid; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct TYPE_5__ {int error; } ;
struct afs_fs_cursor {TYPE_2__ ac; int cbi; int key; struct afs_vnode* vnode; } ;
struct afs_call {int * request; int * out_volsync; struct afs_status_cb* out_scb; int * ret_acl; int key; } ;
struct afs_acl {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 struct afs_acl* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int VAR_3 ;
 struct afs_call* FUNC_2 (struct afs_net*,int *,int,int) ;
 int FUNC_3 (TYPE_2__*,struct afs_call*,int ) ;
 int FUNC_4 (struct afs_call*,int ) ;
 struct afs_net* FUNC_5 (struct afs_vnode*) ;
 scalar_t__ FUNC_6 (struct afs_call*,TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct afs_call*,TYPE_1__*) ;

struct afs_acl *FUNC_10(struct afs_fs_cursor *VAR_4,
     struct afs_status_cb *VAR_5)
{
 struct afs_vnode *VAR_6 = VAR_4->vnode;
 struct afs_call *VAR_7;
 struct afs_net *VAR_8 = FUNC_5(VAR_6);
 __be32 *VAR_9;

 FUNC_1(",%x,{%llx:%llu},,",
        FUNC_8(VAR_4->key), VAR_6->fid.vid, VAR_6->fid.vnode);

 VAR_7 = FUNC_2(VAR_8, &VAR_3, 16, (21 + 6) * 4);
 if (!VAR_7) {
  VAR_4->ac.error = -VAR_0;
  return FUNC_0(-VAR_0);
 }

 VAR_7->key = VAR_4->key;
 VAR_7->ret_acl = ((void*)0);
 VAR_7->out_scb = VAR_5;
 VAR_7->out_volsync = ((void*)0);


 VAR_9 = VAR_7->request;
 VAR_9[0] = FUNC_7(VAR_1);
 VAR_9[1] = FUNC_7(VAR_6->fid.vid);
 VAR_9[2] = FUNC_7(VAR_6->fid.vnode);
 VAR_9[3] = FUNC_7(VAR_6->fid.unique);

 FUNC_4(VAR_7, VAR_4->cbi);
 FUNC_9(VAR_7, &VAR_6->fid);
 FUNC_3(&VAR_4->ac, VAR_7, VAR_2);
 return (struct afs_acl *)FUNC_6(VAR_7, &VAR_4->ac);
}
