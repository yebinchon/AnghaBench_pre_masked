
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t vid; size_t vnode; size_t unique; } ;
struct afs_vnode {TYPE_1__ fid; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct TYPE_5__ {int error; } ;
struct afs_fs_cursor {TYPE_2__ ac; int key; struct afs_vnode* vnode; } ;
struct afs_call {int * request; int * out_volsync; struct afs_status_cb* out_scb; int key; } ;
struct afs_acl {size_t size; int data; } ;
typedef int __be32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,size_t,size_t) ;
 int VAR_3 ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,int,int) ;
 int FUNC_2 (TYPE_2__*,struct afs_call*,int ) ;
 struct afs_net* FUNC_3 (struct afs_vnode*) ;
 int FUNC_4 (struct afs_call*,TYPE_2__*) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,size_t) ;
 int FUNC_8 (void*,int ,size_t) ;
 size_t FUNC_9 (size_t,int) ;
 int FUNC_10 (struct afs_call*,TYPE_1__*) ;

int FUNC_11(struct afs_fs_cursor *VAR_4, const struct afs_acl *VAR_5,
       struct afs_status_cb *VAR_6)
{
 struct afs_vnode *VAR_7 = VAR_4->vnode;
 struct afs_call *VAR_8;
 struct afs_net *VAR_9 = FUNC_3(VAR_7);
 size_t VAR_10;
 __be32 *VAR_11;

 FUNC_0(",%x,{%llx:%llu},,",
        FUNC_6(VAR_4->key), VAR_7->fid.vid, VAR_7->fid.vnode);

 VAR_10 = FUNC_9(VAR_5->size, 4);
 VAR_8 = FUNC_1(VAR_9, &VAR_3,
       5 * 4 + VAR_10, (21 + 6) * 4);
 if (!VAR_8) {
  VAR_4->ac.error = -VAR_0;
  return -VAR_0;
 }

 VAR_8->key = VAR_4->key;
 VAR_8->out_scb = VAR_6;
 VAR_8->out_volsync = ((void*)0);


 VAR_11 = VAR_8->request;
 VAR_11[0] = FUNC_5(VAR_1);
 VAR_11[1] = FUNC_5(VAR_7->fid.vid);
 VAR_11[2] = FUNC_5(VAR_7->fid.vnode);
 VAR_11[3] = FUNC_5(VAR_7->fid.unique);
 VAR_11[4] = FUNC_5(VAR_5->size);
 FUNC_7(&VAR_11[5], VAR_5->data, VAR_5->size);
 if (VAR_5->size != VAR_10)
  FUNC_8((void *)&VAR_11[5] + VAR_5->size, 0, VAR_10 - VAR_5->size);

 FUNC_10(VAR_8, &VAR_7->fid);
 FUNC_2(&VAR_4->ac, VAR_8, VAR_2);
 return FUNC_4(VAR_8, &VAR_4->ac);
}
