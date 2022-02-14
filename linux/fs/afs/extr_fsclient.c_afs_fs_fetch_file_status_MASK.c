
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct afs_volsync {int dummy; } ;
struct TYPE_7__ {int unique; int vnode; int vid; } ;
struct afs_vnode {TYPE_2__ fid; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct TYPE_8__ {int error; } ;
struct afs_fs_cursor {TYPE_3__ ac; TYPE_4__* cbi; int key; struct afs_vnode* vnode; } ;
struct afs_call {int * request; struct afs_volsync* out_volsync; struct afs_status_cb* out_scb; int key; } ;
typedef int __be32 ;
struct TYPE_9__ {TYPE_1__* server; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_4 ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,int,int) ;
 int FUNC_2 (TYPE_3__*,struct afs_call*,int ) ;
 int FUNC_3 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_4 (struct afs_call*,TYPE_4__*) ;
 struct afs_net* FUNC_5 (struct afs_vnode*) ;
 int FUNC_6 (struct afs_call*,TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (struct afs_call*,TYPE_2__*) ;
 int FUNC_11 (struct afs_fs_cursor*,struct afs_status_cb*,struct afs_volsync*) ;

int FUNC_12(struct afs_fs_cursor *VAR_5, struct afs_status_cb *VAR_6,
        struct afs_volsync *VAR_7)
{
 struct afs_vnode *VAR_8 = VAR_5->vnode;
 struct afs_call *VAR_9;
 struct afs_net *VAR_10 = FUNC_5(VAR_8);
 __be32 *VAR_11;

 if (FUNC_9(VAR_0, &VAR_5->cbi->server->flags))
  return FUNC_11(VAR_5, VAR_6, VAR_7);

 FUNC_0(",%x,{%llx:%llu},,",
        FUNC_8(VAR_5->key), VAR_8->fid.vid, VAR_8->fid.vnode);

 VAR_9 = FUNC_1(VAR_10, &VAR_4,
       16, (21 + 3 + 6) * 4);
 if (!VAR_9) {
  VAR_5->ac.error = -VAR_1;
  return -VAR_1;
 }

 VAR_9->key = VAR_5->key;
 VAR_9->out_scb = VAR_6;
 VAR_9->out_volsync = VAR_7;


 VAR_11 = VAR_9->request;
 VAR_11[0] = FUNC_7(VAR_2);
 VAR_11[1] = FUNC_7(VAR_8->fid.vid);
 VAR_11[2] = FUNC_7(VAR_8->fid.vnode);
 VAR_11[3] = FUNC_7(VAR_8->fid.unique);

 FUNC_4(VAR_9, VAR_5->cbi);
 FUNC_10(VAR_9, &VAR_8->fid);

 FUNC_3(VAR_9, VAR_5);
 FUNC_2(&VAR_5->ac, VAR_9, VAR_3);
 return FUNC_6(VAR_9, &VAR_5->ac);
}
