
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
struct afs_read {int usage; scalar_t__ len; scalar_t__ pos; } ;
struct afs_net {int dummy; } ;
struct afs_fs_cursor {int ac; TYPE_3__* cbi; int key; struct afs_vnode* vnode; } ;
struct afs_call {int * request; struct afs_read* read_request; int * out_volsync; struct afs_status_cb* out_scb; int key; } ;
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
 int FUNC_2 (struct afs_fs_cursor*,struct afs_status_cb*,struct afs_read*) ;
 int FUNC_3 (int *,struct afs_call*,int ) ;
 int FUNC_4 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_5 (struct afs_call*,TYPE_3__*) ;
 struct afs_net* FUNC_6 (struct afs_vnode*) ;
 int FUNC_7 (struct afs_call*,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (struct afs_call*,TYPE_2__*) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct afs_fs_cursor*,struct afs_status_cb*,struct afs_read*) ;

int FUNC_15(struct afs_fs_cursor *VAR_5,
        struct afs_status_cb *VAR_6,
        struct afs_read *VAR_7)
{
 struct afs_vnode *VAR_8 = VAR_5->vnode;
 struct afs_call *VAR_9;
 struct afs_net *VAR_10 = FUNC_6(VAR_8);
 __be32 *VAR_11;

 if (FUNC_11(VAR_0, &VAR_5->cbi->server->flags))
  return FUNC_14(VAR_5, VAR_6, VAR_7);

 if (FUNC_13(VAR_7->pos) ||
     FUNC_13(VAR_7->len) ||
     FUNC_13(VAR_7->pos + VAR_7->len))
  return FUNC_2(VAR_5, VAR_6, VAR_7);

 FUNC_0("");

 VAR_9 = FUNC_1(VAR_10, &VAR_4, 24, (21 + 3 + 6) * 4);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->key = VAR_5->key;
 VAR_9->out_scb = VAR_6;
 VAR_9->out_volsync = ((void*)0);
 VAR_9->read_request = VAR_7;


 VAR_11 = VAR_9->request;
 VAR_11[0] = FUNC_8(VAR_2);
 VAR_11[1] = FUNC_8(VAR_8->fid.vid);
 VAR_11[2] = FUNC_8(VAR_8->fid.vnode);
 VAR_11[3] = FUNC_8(VAR_8->fid.unique);
 VAR_11[4] = FUNC_8(FUNC_9(VAR_7->pos));
 VAR_11[5] = FUNC_8(FUNC_9(VAR_7->len));

 FUNC_10(&VAR_7->usage);
 FUNC_5(VAR_9, VAR_5->cbi);
 FUNC_12(VAR_9, &VAR_8->fid);
 FUNC_4(VAR_9, VAR_5);
 FUNC_3(&VAR_5->ac, VAR_9, VAR_3);
 return FUNC_7(VAR_9, &VAR_5->ac);
}
