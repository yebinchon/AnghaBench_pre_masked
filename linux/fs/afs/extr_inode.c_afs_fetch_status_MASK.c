
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct key {int dummy; } ;
struct TYPE_7__ {int data_version; } ;
struct TYPE_6__ {int unique; int vnode; int vid; } ;
struct afs_vnode {TYPE_3__ status; int flags; TYPE_2__ fid; TYPE_1__* volume; } ;
struct TYPE_8__ {int caller_access; } ;
struct afs_status_cb {TYPE_4__ status; } ;
struct afs_fs_cursor {int error; int cb_break; int cbi; } ;
typedef int afs_dataversion_t ;
typedef int afs_access_t ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (struct afs_fs_cursor*,struct afs_vnode*,struct key*,int) ;
 int FUNC_3 (struct afs_vnode*,struct key*,int ,struct afs_status_cb*) ;
 int FUNC_4 (struct afs_vnode*) ;
 int FUNC_5 (struct afs_fs_cursor*,struct afs_vnode*) ;
 int FUNC_6 (struct afs_fs_cursor*) ;
 int FUNC_7 (struct afs_fs_cursor*,struct afs_status_cb*,int *) ;
 int FUNC_8 (struct afs_vnode*,struct key*,int ,int *,struct afs_status_cb*) ;
 scalar_t__ FUNC_9 (struct afs_fs_cursor*) ;
 int FUNC_10 (struct afs_fs_cursor*,struct afs_vnode*,int ,int *,struct afs_status_cb*) ;
 int FUNC_11 (struct afs_status_cb*) ;
 struct afs_status_cb* FUNC_12 (int,int ) ;

int FUNC_13(struct afs_vnode *VAR_3, struct key *VAR_4, bool VAR_5,
       afs_access_t *VAR_6)
{
 struct afs_status_cb *VAR_7;
 struct afs_fs_cursor VAR_8;
 int VAR_9;

 FUNC_0("%s,{%llx:%llu.%u,S=%lx}",
        VAR_3->volume->name,
        VAR_3->fid.vid, VAR_3->fid.vnode, VAR_3->fid.unique,
        VAR_3->flags);

 VAR_7 = FUNC_12(sizeof(struct afs_status_cb), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = -VAR_1;
 if (FUNC_2(&VAR_8, VAR_3, VAR_4, 1)) {
  afs_dataversion_t VAR_10 = VAR_3->status.data_version;

  while (FUNC_9(&VAR_8)) {
   VAR_8.cb_break = FUNC_4(VAR_3);
   FUNC_7(&VAR_8, VAR_7, ((void*)0));
  }

  if (VAR_8.error) {

  } else if (VAR_5) {
   VAR_9 = FUNC_8(VAR_3, VAR_4, VAR_8.cbi,
        ((void*)0), VAR_7);
   VAR_8.error = VAR_9;
   if (VAR_9 == 0)
    FUNC_3(VAR_3, VAR_4, VAR_8.cb_break, VAR_7);
  } else {
   FUNC_10(&VAR_8, VAR_3, VAR_8.cb_break,
      &VAR_10, VAR_7);
  }
  FUNC_5(&VAR_8, VAR_3);
  VAR_9 = FUNC_6(&VAR_8);
 }

 if (VAR_9 == 0 && VAR_6)
  *VAR_6 = VAR_7->status.caller_access;
 FUNC_11(VAR_7);
 FUNC_1(" = %d", VAR_9);
 return VAR_9;
}
