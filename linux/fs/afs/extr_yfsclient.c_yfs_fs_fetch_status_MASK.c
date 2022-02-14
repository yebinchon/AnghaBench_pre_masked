
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct yfs_xdr_YFSVolSync {int dummy; } ;
struct yfs_xdr_YFSFid {int dummy; } ;
struct yfs_xdr_YFSFetchStatus {int dummy; } ;
struct yfs_xdr_YFSCallBack {int dummy; } ;
struct afs_volsync {int dummy; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct TYPE_3__ {int error; } ;
struct afs_fs_cursor {TYPE_1__ ac; int cbi; int key; } ;
struct afs_fid {int vnode; int vid; } ;
struct afs_call {int * request; struct afs_volsync* out_volsync; struct afs_status_cb* out_scb; int key; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,int,int) ;
 int FUNC_2 (TYPE_1__*,struct afs_call*,int ) ;
 int FUNC_3 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_4 (struct afs_call*,int ) ;
 int FUNC_5 (struct afs_call*,TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct afs_call*,struct afs_fid*) ;
 int * FUNC_8 (int *,struct afs_fid*) ;
 int * FUNC_9 (int *,int ) ;
 int VAR_3 ;
 int FUNC_10 (struct afs_call*,int *) ;

int FUNC_11(struct afs_fs_cursor *VAR_4,
   struct afs_net *VAR_5,
   struct afs_fid *VAR_6,
   struct afs_status_cb *VAR_7,
   struct afs_volsync *VAR_8)
{
 struct afs_call *VAR_9;
 __be32 *VAR_10;

 FUNC_0(",%x,{%llx:%llu},,",
        FUNC_6(VAR_4->key), VAR_6->vid, VAR_6->vnode);

 VAR_9 = FUNC_1(VAR_5, &VAR_3,
       sizeof(__be32) * 2 +
       sizeof(struct yfs_xdr_YFSFid),
       sizeof(struct yfs_xdr_YFSFetchStatus) +
       sizeof(struct yfs_xdr_YFSCallBack) +
       sizeof(struct yfs_xdr_YFSVolSync));
 if (!VAR_9) {
  VAR_4->ac.error = -VAR_0;
  return -VAR_0;
 }

 VAR_9->key = VAR_4->key;
 VAR_9->out_scb = VAR_7;
 VAR_9->out_volsync = VAR_8;


 VAR_10 = VAR_9->request;
 VAR_10 = FUNC_9(VAR_10, VAR_2);
 VAR_10 = FUNC_9(VAR_10, 0);
 VAR_10 = FUNC_8(VAR_10, VAR_6);
 FUNC_10(VAR_9, VAR_10);

 FUNC_4(VAR_9, VAR_4->cbi);
 FUNC_7(VAR_9, VAR_6);
 FUNC_3(VAR_9, VAR_4);
 FUNC_2(&VAR_4->ac, VAR_9, VAR_1);
 return FUNC_5(VAR_9, &VAR_4->ac);
}
