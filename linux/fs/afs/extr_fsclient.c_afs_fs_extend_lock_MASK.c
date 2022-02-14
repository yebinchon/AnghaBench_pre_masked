
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int unique; int vnode; int vid; } ;
struct afs_vnode {TYPE_2__ fid; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct afs_fs_cursor {int ac; TYPE_3__* cbi; int key; struct afs_vnode* vnode; } ;
struct afs_call {int * request; struct afs_status_cb* out_scb; struct afs_vnode* lvnode; int key; } ;
typedef int __be32 ;
struct TYPE_6__ {TYPE_1__* server; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,int,int) ;
 int FUNC_2 (int *,struct afs_call*,int ) ;
 int FUNC_3 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_4 (struct afs_call*,TYPE_3__*) ;
 struct afs_net* FUNC_5 (struct afs_vnode*) ;
 int FUNC_6 (struct afs_call*,int *) ;
 void* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (struct afs_call*,TYPE_2__*) ;
 int FUNC_10 (struct afs_fs_cursor*,struct afs_status_cb*) ;

int FUNC_11(struct afs_fs_cursor *VAR_5, struct afs_status_cb *VAR_6)
{
 struct afs_vnode *VAR_7 = VAR_5->vnode;
 struct afs_call *VAR_8;
 struct afs_net *VAR_9 = FUNC_5(VAR_7);
 __be32 *VAR_10;

 if (FUNC_8(VAR_0, &VAR_5->cbi->server->flags))
  return FUNC_10(VAR_5, VAR_6);

 FUNC_0("");

 VAR_8 = FUNC_1(VAR_9, &VAR_4, 4 * 4, 6 * 4);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->key = VAR_5->key;
 VAR_8->lvnode = VAR_7;
 VAR_8->out_scb = VAR_6;


 VAR_10 = VAR_8->request;
 *VAR_10++ = FUNC_7(VAR_2);
 *VAR_10++ = FUNC_7(VAR_7->fid.vid);
 *VAR_10++ = FUNC_7(VAR_7->fid.vnode);
 *VAR_10++ = FUNC_7(VAR_7->fid.unique);

 FUNC_4(VAR_8, VAR_5->cbi);
 FUNC_9(VAR_8, &VAR_7->fid);
 FUNC_3(VAR_8, VAR_5);
 FUNC_2(&VAR_5->ac, VAR_8, VAR_3);
 return FUNC_6(VAR_8, &VAR_5->ac);
}
