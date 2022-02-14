
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t vid; size_t vnode; size_t unique; } ;
struct afs_vnode {TYPE_2__ fid; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct afs_fs_cursor {int ac; TYPE_3__* cbi; int key; struct afs_vnode* vnode; } ;
struct afs_call {int * request; struct afs_status_cb* out_scb; struct afs_status_cb* out_dir_scb; int key; } ;
typedef int __be32 ;
struct TYPE_6__ {TYPE_1__* server; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,size_t,int) ;
 int FUNC_2 (int *,struct afs_call*,int ) ;
 int FUNC_3 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_4 (struct afs_call*,TYPE_3__*) ;
 struct afs_net* FUNC_5 (struct afs_vnode*) ;
 int FUNC_6 (struct afs_call*,int *) ;
 void* FUNC_7 (size_t) ;
 int FUNC_8 (int *,char const*,size_t) ;
 int FUNC_9 (int *,int ,size_t) ;
 size_t FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (struct afs_call*,TYPE_2__*,char const*) ;
 int FUNC_13 (struct afs_fs_cursor*,struct afs_vnode*,char const*,struct afs_status_cb*,struct afs_status_cb*) ;

int FUNC_14(struct afs_fs_cursor *VAR_5, struct afs_vnode *VAR_6,
  const char *VAR_7,
  struct afs_status_cb *VAR_8,
  struct afs_status_cb *VAR_9)
{
 struct afs_vnode *VAR_10 = VAR_5->vnode;
 struct afs_call *VAR_11;
 struct afs_net *VAR_12 = FUNC_5(VAR_6);
 size_t VAR_13, VAR_14, VAR_15;
 __be32 *VAR_16;

 if (FUNC_11(VAR_0, &VAR_5->cbi->server->flags))
  return FUNC_13(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_0("");

 VAR_13 = FUNC_10(VAR_7);
 VAR_15 = (4 - (VAR_13 & 3)) & 3;
 VAR_14 = (5 * 4) + VAR_13 + VAR_15 + (3 * 4);

 VAR_11 = FUNC_1(VAR_12, &VAR_4, VAR_14, (21 + 21 + 6) * 4);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->key = VAR_5->key;
 VAR_11->out_dir_scb = VAR_8;
 VAR_11->out_scb = VAR_9;


 VAR_16 = VAR_11->request;
 *VAR_16++ = FUNC_7(VAR_2);
 *VAR_16++ = FUNC_7(VAR_10->fid.vid);
 *VAR_16++ = FUNC_7(VAR_10->fid.vnode);
 *VAR_16++ = FUNC_7(VAR_10->fid.unique);
 *VAR_16++ = FUNC_7(VAR_13);
 FUNC_8(VAR_16, VAR_7, VAR_13);
 VAR_16 = (void *) VAR_16 + VAR_13;
 if (VAR_15 > 0) {
  FUNC_9(VAR_16, 0, VAR_15);
  VAR_16 = (void *) VAR_16 + VAR_15;
 }
 *VAR_16++ = FUNC_7(VAR_6->fid.vid);
 *VAR_16++ = FUNC_7(VAR_6->fid.vnode);
 *VAR_16++ = FUNC_7(VAR_6->fid.unique);

 FUNC_4(VAR_11, VAR_5->cbi);
 FUNC_12(VAR_11, &VAR_6->fid, VAR_7);
 FUNC_3(VAR_11, VAR_5);
 FUNC_2(&VAR_5->ac, VAR_11, VAR_3);
 return FUNC_6(VAR_11, &VAR_5->ac);
}
