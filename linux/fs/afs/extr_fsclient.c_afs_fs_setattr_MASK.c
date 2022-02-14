
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iattr {int ia_valid; } ;
struct TYPE_5__ {int unique; int vnode; int vid; } ;
struct afs_vnode {TYPE_2__ fid; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct afs_fs_cursor {int ac; TYPE_3__* cbi; int key; struct afs_vnode* vnode; } ;
struct afs_call {int * request; struct afs_status_cb* out_scb; int key; } ;
typedef int __be32 ;
struct TYPE_6__ {TYPE_1__* server; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_5 ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,int,int) ;
 int FUNC_2 (struct afs_fs_cursor*,struct iattr*,struct afs_status_cb*) ;
 int FUNC_3 (int *,struct afs_call*,int ) ;
 int FUNC_4 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_5 (struct afs_call*,TYPE_3__*) ;
 struct afs_net* FUNC_6 (struct afs_vnode*) ;
 int FUNC_7 (struct afs_call*,int *) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (struct afs_call*,TYPE_2__*) ;
 int FUNC_12 (int **,struct iattr*) ;
 int FUNC_13 (struct afs_fs_cursor*,struct iattr*,struct afs_status_cb*) ;

int FUNC_14(struct afs_fs_cursor *VAR_6, struct iattr *VAR_7,
     struct afs_status_cb *VAR_8)
{
 struct afs_vnode *VAR_9 = VAR_6->vnode;
 struct afs_call *VAR_10;
 struct afs_net *VAR_11 = FUNC_6(VAR_9);
 __be32 *VAR_12;

 if (FUNC_10(VAR_0, &VAR_6->cbi->server->flags))
  return FUNC_13(VAR_6, VAR_7, VAR_8);

 if (VAR_7->ia_valid & VAR_1)
  return FUNC_2(VAR_6, VAR_7, VAR_8);

 FUNC_0(",%x,{%llx:%llu},,",
        FUNC_9(VAR_6->key), VAR_9->fid.vid, VAR_9->fid.vnode);

 VAR_10 = FUNC_1(VAR_11, &VAR_5,
       (4 + 6) * 4,
       (21 + 6) * 4);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->key = VAR_6->key;
 VAR_10->out_scb = VAR_8;


 VAR_12 = VAR_10->request;
 *VAR_12++ = FUNC_8(VAR_3);
 *VAR_12++ = FUNC_8(VAR_9->fid.vid);
 *VAR_12++ = FUNC_8(VAR_9->fid.vnode);
 *VAR_12++ = FUNC_8(VAR_9->fid.unique);

 FUNC_12(&VAR_12, VAR_7);

 FUNC_5(VAR_10, VAR_6->cbi);
 FUNC_11(VAR_10, &VAR_9->fid);
 FUNC_4(VAR_10, VAR_6);
 FUNC_3(&VAR_6->ac, VAR_10, VAR_4);
 return FUNC_7(VAR_10, &VAR_6->ac);
}
