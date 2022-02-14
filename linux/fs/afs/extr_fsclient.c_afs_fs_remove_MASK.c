
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
struct afs_call {int * request; struct afs_status_cb* out_dir_scb; int key; } ;
typedef int __be32 ;
struct TYPE_6__ {TYPE_1__* server; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
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
 int FUNC_13 (struct afs_fs_cursor*,struct afs_vnode*,char const*,int,struct afs_status_cb*) ;

int FUNC_14(struct afs_fs_cursor *VAR_7, struct afs_vnode *VAR_8,
    const char *VAR_9, bool VAR_10, struct afs_status_cb *VAR_11)
{
 struct afs_vnode *VAR_12 = VAR_7->vnode;
 struct afs_call *VAR_13;
 struct afs_net *VAR_14 = FUNC_5(VAR_12);
 size_t VAR_15, VAR_16, VAR_17;
 __be32 *VAR_18;

 if (FUNC_11(VAR_0, &VAR_7->cbi->server->flags))
  return FUNC_13(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

 FUNC_0("");

 VAR_15 = FUNC_10(VAR_9);
 VAR_17 = (4 - (VAR_15 & 3)) & 3;
 VAR_16 = (5 * 4) + VAR_15 + VAR_17;

 VAR_13 = FUNC_1(
  VAR_14, VAR_10 ? &VAR_5 : &VAR_6,
  VAR_16, (21 + 6) * 4);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->key = VAR_7->key;
 VAR_13->out_dir_scb = VAR_11;


 VAR_18 = VAR_13->request;
 *VAR_18++ = FUNC_7(VAR_10 ? VAR_2 : VAR_3);
 *VAR_18++ = FUNC_7(VAR_12->fid.vid);
 *VAR_18++ = FUNC_7(VAR_12->fid.vnode);
 *VAR_18++ = FUNC_7(VAR_12->fid.unique);
 *VAR_18++ = FUNC_7(VAR_15);
 FUNC_8(VAR_18, VAR_9, VAR_15);
 VAR_18 = (void *) VAR_18 + VAR_15;
 if (VAR_17 > 0) {
  FUNC_9(VAR_18, 0, VAR_17);
  VAR_18 = (void *) VAR_18 + VAR_17;
 }

 FUNC_4(VAR_13, VAR_7->cbi);
 FUNC_12(VAR_13, &VAR_12->fid, VAR_9);
 FUNC_3(VAR_13, VAR_7);
 FUNC_2(&VAR_7->ac, VAR_13, VAR_4);
 return FUNC_6(VAR_13, &VAR_7->ac);
}
