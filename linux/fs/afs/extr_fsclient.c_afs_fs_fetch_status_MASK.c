
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct afs_volsync {int dummy; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct TYPE_6__ {int error; } ;
struct afs_fs_cursor {TYPE_2__ ac; TYPE_3__* cbi; int key; } ;
struct afs_fid {int unique; int vnode; int vid; } ;
struct afs_call {int * request; struct afs_volsync* out_volsync; struct afs_status_cb* out_scb; struct afs_fid* out_fid; int key; } ;
typedef int __be32 ;
struct TYPE_7__ {TYPE_1__* server; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_4 ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,int,int) ;
 int FUNC_2 (TYPE_2__*,struct afs_call*,int ) ;
 int FUNC_3 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_4 (struct afs_call*,TYPE_3__*) ;
 int FUNC_5 (struct afs_call*,TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (struct afs_call*,struct afs_fid*) ;
 int FUNC_10 (struct afs_fs_cursor*,struct afs_net*,struct afs_fid*,struct afs_status_cb*,struct afs_volsync*) ;

int FUNC_11(struct afs_fs_cursor *VAR_5,
   struct afs_net *VAR_6,
   struct afs_fid *VAR_7,
   struct afs_status_cb *VAR_8,
   struct afs_volsync *VAR_9)
{
 struct afs_call *VAR_10;
 __be32 *VAR_11;

 if (FUNC_8(VAR_0, &VAR_5->cbi->server->flags))
  return FUNC_10(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_0(",%x,{%llx:%llu},,",
        FUNC_7(VAR_5->key), VAR_7->vid, VAR_7->vnode);

 VAR_10 = FUNC_1(VAR_6, &VAR_4, 16, (21 + 3 + 6) * 4);
 if (!VAR_10) {
  VAR_5->ac.error = -VAR_1;
  return -VAR_1;
 }

 VAR_10->key = VAR_5->key;
 VAR_10->out_fid = VAR_7;
 VAR_10->out_scb = VAR_8;
 VAR_10->out_volsync = VAR_9;


 VAR_11 = VAR_10->request;
 VAR_11[0] = FUNC_6(VAR_2);
 VAR_11[1] = FUNC_6(VAR_7->vid);
 VAR_11[2] = FUNC_6(VAR_7->vnode);
 VAR_11[3] = FUNC_6(VAR_7->unique);

 FUNC_4(VAR_10, VAR_5->cbi);
 FUNC_9(VAR_10, VAR_7);
 FUNC_3(VAR_10, VAR_5);
 FUNC_2(&VAR_5->ac, VAR_10, VAR_3);
 return FUNC_5(VAR_10, &VAR_5->ac);
}
