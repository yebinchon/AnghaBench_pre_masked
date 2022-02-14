
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
struct afs_vnode {TYPE_3__ status; TYPE_2__ fid; TYPE_1__* volume; } ;
struct afs_status_cb {int dummy; } ;
struct afs_read {int actual_len; } ;
struct afs_fs_cursor {int cb_break; } ;
typedef int afs_dataversion_t ;
struct TYPE_8__ {int n_fetch_bytes; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (struct afs_fs_cursor*,struct afs_vnode*,struct key*,int) ;
 int FUNC_3 (struct afs_vnode*) ;
 int FUNC_4 (struct afs_fs_cursor*,struct afs_vnode*) ;
 int FUNC_5 (struct afs_fs_cursor*) ;
 int FUNC_6 (struct afs_fs_cursor*,struct afs_status_cb*,struct afs_read*) ;
 scalar_t__ FUNC_7 (struct afs_fs_cursor*) ;
 int FUNC_8 (struct afs_vnode*,int ) ;
 TYPE_4__* FUNC_9 (struct afs_vnode*) ;
 int FUNC_10 (struct afs_fs_cursor*,struct afs_vnode*,int ,int *,struct afs_status_cb*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct key*) ;
 int FUNC_13 (struct afs_status_cb*) ;
 struct afs_status_cb* FUNC_14 (int,int ) ;
 int VAR_3 ;

int FUNC_15(struct afs_vnode *VAR_4, struct key *VAR_5, struct afs_read *VAR_6)
{
 struct afs_fs_cursor VAR_7;
 struct afs_status_cb *VAR_8;
 int VAR_9;

 FUNC_0("%s{%llx:%llu.%u},%x,,,",
        VAR_4->volume->name,
        VAR_4->fid.vid,
        VAR_4->fid.vnode,
        VAR_4->fid.unique,
        FUNC_12(VAR_5));

 VAR_8 = FUNC_14(sizeof(struct afs_status_cb), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = -VAR_1;
 if (FUNC_2(&VAR_7, VAR_4, VAR_5, 1)) {
  afs_dataversion_t VAR_10 = VAR_4->status.data_version;

  while (FUNC_7(&VAR_7)) {
   VAR_7.cb_break = FUNC_3(VAR_4);
   FUNC_6(&VAR_7, VAR_8, VAR_6);
  }

  FUNC_4(&VAR_7, VAR_4);
  FUNC_10(&VAR_7, VAR_4, VAR_7.cb_break,
     &VAR_10, VAR_8);
  VAR_9 = FUNC_5(&VAR_7);
 }

 if (VAR_9 == 0) {
  FUNC_8(VAR_4, VAR_3);
  FUNC_11(VAR_6->actual_len,
    &FUNC_9(VAR_4)->n_fetch_bytes);
 }

 FUNC_13(VAR_8);
 FUNC_1(" = %d", VAR_9);
 return VAR_9;
}
