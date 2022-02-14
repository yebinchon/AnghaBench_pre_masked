
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct afs_volume_status {int dummy; } ;
struct TYPE_5__ {int vid; } ;
struct afs_vnode {TYPE_2__ fid; } ;
struct afs_net {int dummy; } ;
struct afs_fs_cursor {int ac; TYPE_3__* cbi; int key; struct afs_vnode* vnode; } ;
struct afs_call {int * request; struct afs_volume_status* out_volstatus; int key; } ;
typedef int __be32 ;
struct TYPE_6__ {TYPE_1__* server; } ;
struct TYPE_4__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,int,int ) ;
 int FUNC_2 (int *,struct afs_call*,int ) ;
 int FUNC_3 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_4 (struct afs_call*,TYPE_3__*) ;
 struct afs_net* FUNC_5 (struct afs_vnode*) ;
 int FUNC_6 (struct afs_call*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (struct afs_call*,TYPE_2__*) ;
 int FUNC_11 (struct afs_fs_cursor*,struct afs_volume_status*) ;

int FUNC_12(struct afs_fs_cursor *VAR_6,
        struct afs_volume_status *VAR_7)
{
 struct afs_vnode *VAR_8 = VAR_6->vnode;
 struct afs_call *VAR_9;
 struct afs_net *VAR_10 = FUNC_5(VAR_8);
 __be32 *VAR_11;

 if (FUNC_9(VAR_1, &VAR_6->cbi->server->flags))
  return FUNC_11(VAR_6, VAR_7);

 FUNC_0("");

 VAR_9 = FUNC_1(VAR_10, &VAR_5, 2 * 4,
       FUNC_8(12 * 4, VAR_0 + 1));
 if (!VAR_9)
  return -VAR_2;

 VAR_9->key = VAR_6->key;
 VAR_9->out_volstatus = VAR_7;


 VAR_11 = VAR_9->request;
 VAR_11[0] = FUNC_7(VAR_3);
 VAR_11[1] = FUNC_7(VAR_8->fid.vid);

 FUNC_4(VAR_9, VAR_6->cbi);
 FUNC_10(VAR_9, &VAR_8->fid);
 FUNC_3(VAR_9, VAR_6);
 FUNC_2(&VAR_6->ac, VAR_9, VAR_4);
 return FUNC_6(VAR_9, &VAR_6->ac);
}
