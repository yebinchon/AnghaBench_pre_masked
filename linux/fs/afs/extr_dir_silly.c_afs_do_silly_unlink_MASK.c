
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct key {int dummy; } ;
struct TYPE_12__ {int name; } ;
struct dentry {TYPE_6__ d_name; } ;
struct TYPE_11__ {scalar_t__ i_nlink; } ;
struct TYPE_7__ {scalar_t__ data_version; } ;
struct afs_vnode {int flags; TYPE_5__ vfs_inode; TYPE_1__ status; } ;
struct afs_status_cb {int dummy; } ;
struct TYPE_8__ {scalar_t__ abort_code; int error; } ;
struct afs_fs_cursor {int cb_break; TYPE_4__* cbi; TYPE_2__ ac; } ;
typedef scalar_t__ afs_dataversion_t ;
struct TYPE_10__ {TYPE_3__* server; } ;
struct TYPE_9__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (struct afs_fs_cursor*,struct afs_vnode*,struct key*,int) ;
 int FUNC_3 (struct afs_vnode*) ;
 int VAR_10 ;
 int FUNC_4 (struct afs_vnode*,TYPE_6__*,int ) ;
 int FUNC_5 (struct afs_fs_cursor*) ;
 int FUNC_6 (struct afs_fs_cursor*,struct afs_vnode*,int ,int,struct afs_status_cb*) ;
 scalar_t__ FUNC_7 (struct afs_fs_cursor*) ;
 int FUNC_8 (struct afs_fs_cursor*,struct afs_vnode*,int ,scalar_t__*,struct afs_status_cb*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (TYPE_5__*) ;
 struct afs_status_cb* FUNC_11 (int,int,int ) ;
 int FUNC_12 (struct afs_status_cb*) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int FUNC_15 (struct afs_vnode*,int) ;
 int FUNC_16 (struct afs_fs_cursor*,struct afs_vnode*,int ,struct afs_status_cb*,struct afs_status_cb*) ;

__attribute__((used)) static int FUNC_17(struct afs_vnode *VAR_11, struct afs_vnode *VAR_12,
          struct dentry *VAR_13, struct key *VAR_14)
{
 struct afs_fs_cursor VAR_15;
 struct afs_status_cb *VAR_16;
 int VAR_17 = -VAR_7;

 FUNC_0("");

 VAR_16 = FUNC_11(2, sizeof(struct afs_status_cb), VAR_8);
 if (!VAR_16)
  return -VAR_6;

 FUNC_15(VAR_12, 1);
 if (FUNC_2(&VAR_15, VAR_11, VAR_14, 0)) {
  afs_dataversion_t VAR_18 = VAR_11->status.data_version + 1;

  while (FUNC_7(&VAR_15)) {
   VAR_15.cb_break = FUNC_3(VAR_11);

   if (FUNC_14(VAR_0, &VAR_15.cbi->server->flags) &&
       !FUNC_14(VAR_1, &VAR_15.cbi->server->flags)) {
    FUNC_16(&VAR_15, VAR_12, VAR_13->d_name.name,
          &VAR_16[0], &VAR_16[1]);
    if (VAR_15.ac.error != -VAR_5 ||
        VAR_15.ac.abort_code != VAR_9)
     continue;
    FUNC_13(VAR_1, &VAR_15.cbi->server->flags);
   }

   FUNC_6(&VAR_15, VAR_12, VAR_13->d_name.name, 0, &VAR_16[0]);
  }

  FUNC_8(&VAR_15, VAR_11, VAR_15.cb_break,
     &VAR_18, &VAR_16[0]);
  VAR_17 = FUNC_5(&VAR_15);
  if (VAR_17 == 0) {
   FUNC_10(&VAR_12->vfs_inode);
   if (VAR_12->vfs_inode.i_nlink == 0) {
    FUNC_13(VAR_3, &VAR_12->flags);
    FUNC_9(VAR_2, &VAR_12->flags);
   }
  }
  if (VAR_17 == 0 &&
      FUNC_14(VAR_4, &VAR_11->flags))
   FUNC_4(VAR_11, &VAR_13->d_name,
         VAR_10);
 }

 FUNC_12(VAR_16);
 FUNC_1(" = %d", VAR_17);
 return VAR_17;
}
