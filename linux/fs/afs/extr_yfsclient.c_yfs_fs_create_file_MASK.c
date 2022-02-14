
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct yfs_xdr_YFSVolSync {int dummy; } ;
struct yfs_xdr_YFSStoreStatus {int dummy; } ;
struct yfs_xdr_YFSFid {int dummy; } ;
struct yfs_xdr_YFSFetchStatus {int dummy; } ;
struct yfs_xdr_YFSCallBack {int dummy; } ;
struct afs_vnode {int fid; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct afs_fs_cursor {int ac; int cbi; int key; struct afs_vnode* vnode; } ;
struct afs_fid {int dummy; } ;
struct afs_call {int * request; struct afs_status_cb* out_scb; struct afs_fid* out_fid; struct afs_status_cb* out_dir_scb; int key; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,size_t,size_t) ;
 int FUNC_2 (int *,struct afs_call*,int ) ;
 int FUNC_3 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_4 (struct afs_call*,int ) ;
 struct afs_net* FUNC_5 (struct afs_vnode*) ;
 int FUNC_6 (struct afs_call*,int *) ;
 size_t FUNC_7 (char const*) ;
 int FUNC_8 (struct afs_call*,int *,char const*) ;
 int * FUNC_9 (int *,int *) ;
 int * FUNC_10 (int *,int ) ;
 int * FUNC_11 (int *,char const*,size_t) ;
 int * FUNC_12 (int *,int ) ;
 int FUNC_13 (size_t) ;
 int VAR_4 ;
 int FUNC_14 (struct afs_call*,int *) ;

int FUNC_15(struct afs_fs_cursor *VAR_5,
         const char *VAR_6,
         umode_t VAR_7,
         struct afs_status_cb *VAR_8,
         struct afs_fid *VAR_9,
         struct afs_status_cb *VAR_10)
{
 struct afs_vnode *VAR_11 = VAR_5->vnode;
 struct afs_call *VAR_12;
 struct afs_net *VAR_13 = FUNC_5(VAR_11);
 size_t VAR_14, VAR_15, VAR_16;
 __be32 *VAR_17;

 FUNC_0("");

 VAR_14 = FUNC_7(VAR_6);
 VAR_15 = (sizeof(__be32) +
   sizeof(__be32) +
   sizeof(struct yfs_xdr_YFSFid) +
   FUNC_13(VAR_14) +
   sizeof(struct yfs_xdr_YFSStoreStatus) +
   sizeof(__be32));
 VAR_16 = (sizeof(struct yfs_xdr_YFSFid) +
   sizeof(struct yfs_xdr_YFSFetchStatus) +
   sizeof(struct yfs_xdr_YFSFetchStatus) +
   sizeof(struct yfs_xdr_YFSCallBack) +
   sizeof(struct yfs_xdr_YFSVolSync));

 VAR_12 = FUNC_1(VAR_13, &VAR_3, VAR_15, VAR_16);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->key = VAR_5->key;
 VAR_12->out_dir_scb = VAR_8;
 VAR_12->out_fid = VAR_9;
 VAR_12->out_scb = VAR_10;


 VAR_17 = VAR_12->request;
 VAR_17 = FUNC_12(VAR_17, VAR_2);
 VAR_17 = FUNC_12(VAR_17, 0);
 VAR_17 = FUNC_9(VAR_17, &VAR_11->fid);
 VAR_17 = FUNC_11(VAR_17, VAR_6, VAR_14);
 VAR_17 = FUNC_10(VAR_17, VAR_7);
 VAR_17 = FUNC_12(VAR_17, VAR_4);
 FUNC_14(VAR_12, VAR_17);

 FUNC_4(VAR_12, VAR_5->cbi);
 FUNC_8(VAR_12, &VAR_11->fid, VAR_6);
 FUNC_3(VAR_12, VAR_5);
 FUNC_2(&VAR_5->ac, VAR_12, VAR_1);
 return FUNC_6(VAR_12, &VAR_5->ac);
}
