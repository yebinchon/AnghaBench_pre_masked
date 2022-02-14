
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iattr {int ia_valid; int ia_size; } ;
struct TYPE_2__ {int vid; int vnode; int unique; } ;
struct afs_vnode {TYPE_1__ fid; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct afs_fs_cursor {int ac; int cbi; int key; struct afs_vnode* vnode; } ;
struct afs_call {int * request; struct afs_status_cb* out_scb; int key; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int,int) ;
 int VAR_4 ;
 struct afs_call* FUNC_2 (struct afs_net*,int *,int,int) ;
 int FUNC_3 (struct afs_fs_cursor*,struct iattr*,struct afs_status_cb*) ;
 int FUNC_4 (int *,struct afs_call*,int ) ;
 int FUNC_5 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_6 (struct afs_call*,int ) ;
 struct afs_net* FUNC_7 (struct afs_vnode*) ;
 int FUNC_8 (struct afs_call*,int *) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct afs_call*,TYPE_1__*) ;
 int FUNC_12 (int **,struct iattr*) ;

__attribute__((used)) static int FUNC_13(struct afs_fs_cursor *VAR_5, struct iattr *VAR_6,
          struct afs_status_cb *VAR_7)
{
 struct afs_vnode *VAR_8 = VAR_5->vnode;
 struct afs_call *VAR_9;
 struct afs_net *VAR_10 = FUNC_7(VAR_8);
 __be32 *VAR_11;

 FUNC_1(",%x,{%llx:%llu},,",
        FUNC_10(VAR_5->key), VAR_8->fid.vid, VAR_8->fid.vnode);

 FUNC_0(VAR_6->ia_valid & VAR_0);
 if (VAR_6->ia_size >> 32)
  return FUNC_3(VAR_5, VAR_6, VAR_7);

 VAR_9 = FUNC_2(VAR_10, &VAR_4,
       (4 + 6 + 3) * 4,
       (21 + 6) * 4);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->key = VAR_5->key;
 VAR_9->out_scb = VAR_7;


 VAR_11 = VAR_9->request;
 *VAR_11++ = FUNC_9(VAR_2);
 *VAR_11++ = FUNC_9(VAR_8->fid.vid);
 *VAR_11++ = FUNC_9(VAR_8->fid.vnode);
 *VAR_11++ = FUNC_9(VAR_8->fid.unique);

 FUNC_12(&VAR_11, VAR_6);

 *VAR_11++ = FUNC_9(VAR_6->ia_size);
 *VAR_11++ = 0;
 *VAR_11++ = FUNC_9(VAR_6->ia_size);

 FUNC_6(VAR_9, VAR_5->cbi);
 FUNC_11(VAR_9, &VAR_8->fid);
 FUNC_5(VAR_9, VAR_5);
 FUNC_4(&VAR_5->ac, VAR_9, VAR_3);
 return FUNC_8(VAR_9, &VAR_5->ac);
}
