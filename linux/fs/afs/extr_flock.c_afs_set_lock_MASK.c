
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct key {int dummy; } ;
struct TYPE_4__ {int unique; int vnode; int vid; } ;
struct afs_vnode {TYPE_2__ fid; TYPE_1__* volume; } ;
struct afs_status_cb {int dummy; } ;
struct afs_fs_cursor {int cb_break; } ;
typedef int afs_lock_type_t ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (struct afs_fs_cursor*,struct afs_vnode*,struct key*,int) ;
 int FUNC_3 (struct afs_vnode*) ;
 int FUNC_4 (struct afs_fs_cursor*,struct afs_vnode*) ;
 int FUNC_5 (struct afs_fs_cursor*) ;
 int FUNC_6 (struct afs_fs_cursor*,int ,struct afs_status_cb*) ;
 scalar_t__ FUNC_7 (struct afs_fs_cursor*) ;
 int FUNC_8 (struct afs_fs_cursor*,struct afs_vnode*,int ,int *,struct afs_status_cb*) ;
 int FUNC_9 (struct key*) ;
 int FUNC_10 (struct afs_status_cb*) ;
 struct afs_status_cb* FUNC_11 (int,int ) ;

__attribute__((used)) static int FUNC_12(struct afs_vnode *VAR_3, struct key *VAR_4,
   afs_lock_type_t VAR_5)
{
 struct afs_status_cb *VAR_6;
 struct afs_fs_cursor VAR_7;
 int VAR_8;

 FUNC_0("%s{%llx:%llu.%u},%x,%u",
        VAR_3->volume->name,
        VAR_3->fid.vid,
        VAR_3->fid.vnode,
        VAR_3->fid.unique,
        FUNC_9(VAR_4), VAR_5);

 VAR_6 = FUNC_11(sizeof(struct afs_status_cb), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = -VAR_1;
 if (FUNC_2(&VAR_7, VAR_3, VAR_4, 1)) {
  while (FUNC_7(&VAR_7)) {
   VAR_7.cb_break = FUNC_3(VAR_3);
   FUNC_6(&VAR_7, VAR_5, VAR_6);
  }

  FUNC_4(&VAR_7, VAR_3);
  FUNC_8(&VAR_7, VAR_3, VAR_7.cb_break, ((void*)0), VAR_6);
  VAR_8 = FUNC_5(&VAR_7);
 }

 FUNC_10(VAR_6);
 FUNC_1(" = %d", VAR_8);
 return VAR_8;
}
