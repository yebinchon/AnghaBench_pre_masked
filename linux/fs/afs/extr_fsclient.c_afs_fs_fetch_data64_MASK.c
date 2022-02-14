
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int unique; int vnode; int vid; } ;
struct afs_vnode {TYPE_1__ fid; } ;
struct afs_status_cb {int dummy; } ;
struct afs_read {int usage; int len; int pos; } ;
struct afs_net {int dummy; } ;
struct afs_fs_cursor {int ac; int cbi; int key; struct afs_vnode* vnode; } ;
struct afs_call {scalar_t__* request; struct afs_read* read_request; int * out_volsync; struct afs_status_cb* out_scb; int key; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,int,int) ;
 int FUNC_2 (int *,struct afs_call*,int ) ;
 int FUNC_3 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_4 (struct afs_call*,int ) ;
 struct afs_net* FUNC_5 (struct afs_vnode*) ;
 int FUNC_6 (struct afs_call*,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct afs_call*,TYPE_1__*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct afs_fs_cursor *VAR_4,
          struct afs_status_cb *VAR_5,
          struct afs_read *VAR_6)
{
 struct afs_vnode *VAR_7 = VAR_4->vnode;
 struct afs_call *VAR_8;
 struct afs_net *VAR_9 = FUNC_5(VAR_7);
 __be32 *VAR_10;

 FUNC_0("");

 VAR_8 = FUNC_1(VAR_9, &VAR_3, 32, (21 + 3 + 6) * 4);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->key = VAR_4->key;
 VAR_8->out_scb = VAR_5;
 VAR_8->out_volsync = ((void*)0);
 VAR_8->read_request = VAR_6;


 VAR_10 = VAR_8->request;
 VAR_10[0] = FUNC_7(VAR_1);
 VAR_10[1] = FUNC_7(VAR_7->fid.vid);
 VAR_10[2] = FUNC_7(VAR_7->fid.vnode);
 VAR_10[3] = FUNC_7(VAR_7->fid.unique);
 VAR_10[4] = FUNC_7(FUNC_11(VAR_6->pos));
 VAR_10[5] = FUNC_7(FUNC_8(VAR_6->pos));
 VAR_10[6] = 0;
 VAR_10[7] = FUNC_7(FUNC_8(VAR_6->len));

 FUNC_9(&VAR_6->usage);
 FUNC_4(VAR_8, VAR_4->cbi);
 FUNC_10(VAR_8, &VAR_7->fid);
 FUNC_3(VAR_8, VAR_4);
 FUNC_2(&VAR_4->ac, VAR_8, VAR_2);
 return FUNC_6(VAR_8, &VAR_4->ac);
}
