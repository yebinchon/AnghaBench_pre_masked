
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {size_t vid; size_t vnode; size_t unique; } ;
struct TYPE_7__ {size_t tv_sec; } ;
struct TYPE_8__ {TYPE_2__ i_mtime; } ;
struct afs_vnode {TYPE_4__ fid; TYPE_3__ vfs_inode; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct afs_fs_cursor {int ac; TYPE_5__* cbi; int key; struct afs_vnode* vnode; } ;
struct afs_fid {int dummy; } ;
struct afs_call {int * request; struct afs_status_cb* out_scb; struct afs_fid* out_fid; struct afs_status_cb* out_dir_scb; int key; } ;
typedef int __be32 ;
struct TYPE_10__ {TYPE_1__* server; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,size_t,int) ;
 int FUNC_2 (int *,struct afs_call*,int ) ;
 int FUNC_3 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_4 (struct afs_call*,TYPE_5__*) ;
 struct afs_net* FUNC_5 (struct afs_vnode*) ;
 int FUNC_6 (struct afs_call*,int *) ;
 void* FUNC_7 (size_t) ;
 int FUNC_8 (int *,char const*,size_t) ;
 int FUNC_9 (int *,int ,size_t) ;
 size_t FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (struct afs_call*,TYPE_4__*,char const*) ;
 int FUNC_13 (struct afs_fs_cursor*,char const*,char const*,struct afs_status_cb*,struct afs_fid*,struct afs_status_cb*) ;

int FUNC_14(struct afs_fs_cursor *VAR_8,
     const char *VAR_9,
     const char *VAR_10,
     struct afs_status_cb *VAR_11,
     struct afs_fid *VAR_12,
     struct afs_status_cb *VAR_13)
{
 struct afs_vnode *VAR_14 = VAR_8->vnode;
 struct afs_call *VAR_15;
 struct afs_net *VAR_16 = FUNC_5(VAR_14);
 size_t VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 __be32 *VAR_22;

 if (FUNC_11(VAR_0, &VAR_8->cbi->server->flags))
  return FUNC_13(VAR_8, VAR_9, VAR_10, VAR_11,
          VAR_12, VAR_13);

 FUNC_0("");

 VAR_17 = FUNC_10(VAR_9);
 VAR_19 = (4 - (VAR_17 & 3)) & 3;

 VAR_20 = FUNC_10(VAR_10);
 VAR_21 = (4 - (VAR_20 & 3)) & 3;

 VAR_18 = (6 * 4) + VAR_17 + VAR_19 + VAR_20 + VAR_21 + (6 * 4);

 VAR_15 = FUNC_1(VAR_16, &VAR_7, VAR_18,
       (3 + 21 + 21 + 6) * 4);
 if (!VAR_15)
  return -VAR_3;

 VAR_15->key = VAR_8->key;
 VAR_15->out_dir_scb = VAR_11;
 VAR_15->out_fid = VAR_12;
 VAR_15->out_scb = VAR_13;


 VAR_22 = VAR_15->request;
 *VAR_22++ = FUNC_7(VAR_4);
 *VAR_22++ = FUNC_7(VAR_14->fid.vid);
 *VAR_22++ = FUNC_7(VAR_14->fid.vnode);
 *VAR_22++ = FUNC_7(VAR_14->fid.unique);
 *VAR_22++ = FUNC_7(VAR_17);
 FUNC_8(VAR_22, VAR_9, VAR_17);
 VAR_22 = (void *) VAR_22 + VAR_17;
 if (VAR_19 > 0) {
  FUNC_9(VAR_22, 0, VAR_19);
  VAR_22 = (void *) VAR_22 + VAR_19;
 }
 *VAR_22++ = FUNC_7(VAR_20);
 FUNC_8(VAR_22, VAR_10, VAR_20);
 VAR_22 = (void *) VAR_22 + VAR_20;
 if (VAR_21 > 0) {
  FUNC_9(VAR_22, 0, VAR_21);
  VAR_22 = (void *) VAR_22 + VAR_21;
 }
 *VAR_22++ = FUNC_7(VAR_1 | VAR_2);
 *VAR_22++ = FUNC_7(VAR_14->vfs_inode.i_mtime.tv_sec);
 *VAR_22++ = 0;
 *VAR_22++ = 0;
 *VAR_22++ = FUNC_7(VAR_6);
 *VAR_22++ = 0;

 FUNC_4(VAR_15, VAR_8->cbi);
 FUNC_12(VAR_15, &VAR_14->fid, VAR_9);
 FUNC_3(VAR_15, VAR_8);
 FUNC_2(&VAR_8->ac, VAR_15, VAR_5);
 return FUNC_6(VAR_15, &VAR_8->ac);
}
