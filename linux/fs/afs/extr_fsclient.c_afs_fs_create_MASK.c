
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t umode_t ;
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
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct afs_call* FUNC_2 (struct afs_net*,int *,size_t,int) ;
 int FUNC_3 (int *,struct afs_call*,int ) ;
 int FUNC_4 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_5 (struct afs_call*,TYPE_5__*) ;
 struct afs_net* FUNC_6 (struct afs_vnode*) ;
 int FUNC_7 (struct afs_call*,int *) ;
 void* FUNC_8 (size_t) ;
 int FUNC_9 (int *,char const*,size_t) ;
 int FUNC_10 (int *,int ,size_t) ;
 size_t FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (struct afs_call*,TYPE_4__*,char const*) ;
 int FUNC_14 (struct afs_fs_cursor*,char const*,size_t,struct afs_status_cb*,struct afs_fid*,struct afs_status_cb*) ;
 int FUNC_15 (struct afs_fs_cursor*,char const*,size_t,struct afs_status_cb*,struct afs_fid*,struct afs_status_cb*) ;

int FUNC_16(struct afs_fs_cursor *VAR_10,
    const char *VAR_11,
    umode_t VAR_12,
    struct afs_status_cb *VAR_13,
    struct afs_fid *VAR_14,
    struct afs_status_cb *VAR_15)
{
 struct afs_vnode *VAR_16 = VAR_10->vnode;
 struct afs_call *VAR_17;
 struct afs_net *VAR_18 = FUNC_6(VAR_16);
 size_t VAR_19, VAR_20, VAR_21;
 __be32 *VAR_22;

 if (FUNC_12(VAR_0, &VAR_10->cbi->server->flags)){
  if (FUNC_0(VAR_12))
   return FUNC_15(VAR_10, VAR_11, VAR_12, VAR_13,
            VAR_14, VAR_15);
  else
   return FUNC_14(VAR_10, VAR_11, VAR_12, VAR_13,
        VAR_14, VAR_15);
 }

 FUNC_1("");

 VAR_19 = FUNC_11(VAR_11);
 VAR_21 = (4 - (VAR_19 & 3)) & 3;
 VAR_20 = (5 * 4) + VAR_19 + VAR_21 + (6 * 4);

 VAR_17 = FUNC_2(
  VAR_18, FUNC_0(VAR_12) ? &VAR_9 : &VAR_8,
  VAR_20, (3 + 21 + 21 + 3 + 6) * 4);
 if (!VAR_17)
  return -VAR_3;

 VAR_17->key = VAR_10->key;
 VAR_17->out_dir_scb = VAR_13;
 VAR_17->out_fid = VAR_14;
 VAR_17->out_scb = VAR_15;


 VAR_22 = VAR_17->request;
 *VAR_22++ = FUNC_8(FUNC_0(VAR_12) ? VAR_5 : VAR_4);
 *VAR_22++ = FUNC_8(VAR_16->fid.vid);
 *VAR_22++ = FUNC_8(VAR_16->fid.vnode);
 *VAR_22++ = FUNC_8(VAR_16->fid.unique);
 *VAR_22++ = FUNC_8(VAR_19);
 FUNC_9(VAR_22, VAR_11, VAR_19);
 VAR_22 = (void *) VAR_22 + VAR_19;
 if (VAR_21 > 0) {
  FUNC_10(VAR_22, 0, VAR_21);
  VAR_22 = (void *) VAR_22 + VAR_21;
 }
 *VAR_22++ = FUNC_8(VAR_1 | VAR_2);
 *VAR_22++ = FUNC_8(VAR_16->vfs_inode.i_mtime.tv_sec);
 *VAR_22++ = 0;
 *VAR_22++ = 0;
 *VAR_22++ = FUNC_8(VAR_12 & VAR_7);
 *VAR_22++ = 0;

 FUNC_5(VAR_17, VAR_10->cbi);
 FUNC_13(VAR_17, &VAR_16->fid, VAR_11);
 FUNC_4(VAR_17, VAR_10);
 FUNC_3(&VAR_10->ac, VAR_17, VAR_6);
 return FUNC_7(VAR_17, &VAR_10->ac);
}
