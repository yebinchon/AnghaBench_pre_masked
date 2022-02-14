
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct key {int dummy; } ;
struct TYPE_5__ {int name; } ;
struct dentry {TYPE_2__ d_name; int d_lock; int d_flags; } ;
struct TYPE_4__ {scalar_t__ data_version; } ;
struct afs_vnode {int fid; int flags; struct key* silly_key; TYPE_1__ status; } ;
struct afs_status_cb {int dummy; } ;
struct afs_fs_cursor {int cb_break; } ;
typedef scalar_t__ afs_dataversion_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,struct dentry*,struct dentry*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (struct afs_fs_cursor*,struct afs_vnode*,struct key*,int) ;
 int FUNC_3 (struct afs_vnode*) ;
 int FUNC_4 (struct afs_vnode*,TYPE_2__*,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct afs_vnode*,TYPE_2__*,int ) ;
 int FUNC_6 (struct afs_fs_cursor*) ;
 int FUNC_7 (struct afs_fs_cursor*,int ,struct afs_vnode*,int ,struct afs_status_cb*,struct afs_status_cb*) ;
 scalar_t__ FUNC_8 (struct afs_fs_cursor*) ;
 int FUNC_9 (struct afs_fs_cursor*,struct afs_vnode*,int ,scalar_t__*,struct afs_status_cb*) ;
 struct key* FUNC_10 (struct key*) ;
 int FUNC_11 (struct key*) ;
 int FUNC_12 (struct afs_status_cb*) ;
 struct afs_status_cb* FUNC_13 (int,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 int FUNC_17 (struct afs_vnode*,int) ;

__attribute__((used)) static int FUNC_18(struct afs_vnode *VAR_7, struct afs_vnode *VAR_8,
          struct dentry *VAR_9, struct dentry *VAR_10,
          struct key *VAR_11)
{
 struct afs_fs_cursor VAR_12;
 struct afs_status_cb *VAR_13;
 int VAR_14 = -VAR_3;

 FUNC_0("%pd,%pd", VAR_9, VAR_10);

 VAR_13 = FUNC_13(sizeof(struct afs_status_cb), VAR_4);
 if (!VAR_13)
  return -VAR_2;

 FUNC_17(VAR_8, 0);
 if (FUNC_2(&VAR_12, VAR_7, VAR_11, 1)) {
  afs_dataversion_t VAR_15 = VAR_7->status.data_version + 1;

  while (FUNC_8(&VAR_12)) {
   VAR_12.cb_break = FUNC_3(VAR_7);
   FUNC_7(&VAR_12, VAR_9->d_name.name,
          VAR_7, VAR_10->d_name.name,
          VAR_13, VAR_13);
  }

  FUNC_9(&VAR_12, VAR_7, VAR_12.cb_break,
     &VAR_15, VAR_13);
  VAR_14 = FUNC_6(&VAR_12);
 }

 if (VAR_14 == 0) {
  FUNC_14(&VAR_9->d_lock);
  VAR_9->d_flags |= VAR_1;
  FUNC_15(&VAR_9->d_lock);
  if (VAR_7->silly_key != VAR_11) {
   FUNC_11(VAR_7->silly_key);
   VAR_7->silly_key = FUNC_10(VAR_11);
  }

  if (FUNC_16(VAR_0, &VAR_7->flags))
   FUNC_5(VAR_7, &VAR_9->d_name,
         VAR_5);
  if (FUNC_16(VAR_0, &VAR_7->flags))
   FUNC_4(VAR_7, &VAR_10->d_name,
      &VAR_8->fid, VAR_6);
 }

 FUNC_12(VAR_13);
 FUNC_1(" = %d", VAR_14);
 return VAR_14;
}
