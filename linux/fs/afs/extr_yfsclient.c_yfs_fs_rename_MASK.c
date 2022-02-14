
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yfs_xdr_YFSVolSync {int dummy; } ;
struct yfs_xdr_YFSFid {int dummy; } ;
struct yfs_xdr_YFSFetchStatus {int dummy; } ;
struct yfs_xdr_RPCFlags {int dummy; } ;
struct afs_vnode {int fid; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct afs_fs_cursor {int ac; int cbi; int key; struct afs_vnode* vnode; } ;
struct afs_call {int * request; struct afs_status_cb* out_scb; struct afs_status_cb* out_dir_scb; int key; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,scalar_t__,int) ;
 int FUNC_2 (int *,struct afs_call*,int ) ;
 int FUNC_3 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_4 (struct afs_call*,int ) ;
 struct afs_net* FUNC_5 (struct afs_vnode*) ;
 int FUNC_6 (struct afs_call*,int *) ;
 size_t FUNC_7 (char const*) ;
 int FUNC_8 (struct afs_call*,int *,char const*,char const*) ;
 int * FUNC_9 (int *,int *) ;
 int * FUNC_10 (int *,char const*,size_t) ;
 int * FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (size_t) ;
 int VAR_3 ;
 int FUNC_13 (struct afs_call*,int *) ;

int FUNC_14(struct afs_fs_cursor *VAR_4,
    const char *VAR_5,
    struct afs_vnode *VAR_6,
    const char *VAR_7,
    struct afs_status_cb *VAR_8,
    struct afs_status_cb *VAR_9)
{
 struct afs_vnode *VAR_10 = VAR_4->vnode;
 struct afs_call *VAR_11;
 struct afs_net *VAR_12 = FUNC_5(VAR_10);
 size_t VAR_13, VAR_14;
 __be32 *VAR_15;

 FUNC_0("");

 VAR_13 = FUNC_7(VAR_5);
 VAR_14 = FUNC_7(VAR_7);
 VAR_11 = FUNC_1(VAR_12, &VAR_3,
       sizeof(__be32) +
       sizeof(struct yfs_xdr_RPCFlags) +
       sizeof(struct yfs_xdr_YFSFid) +
       FUNC_12(VAR_13) +
       sizeof(struct yfs_xdr_YFSFid) +
       FUNC_12(VAR_14),
       sizeof(struct yfs_xdr_YFSFetchStatus) +
       sizeof(struct yfs_xdr_YFSFetchStatus) +
       sizeof(struct yfs_xdr_YFSVolSync));
 if (!VAR_11)
  return -VAR_0;

 VAR_11->key = VAR_4->key;
 VAR_11->out_dir_scb = VAR_8;
 VAR_11->out_scb = VAR_9;


 VAR_15 = VAR_11->request;
 VAR_15 = FUNC_11(VAR_15, VAR_2);
 VAR_15 = FUNC_11(VAR_15, 0);
 VAR_15 = FUNC_9(VAR_15, &VAR_10->fid);
 VAR_15 = FUNC_10(VAR_15, VAR_5, VAR_13);
 VAR_15 = FUNC_9(VAR_15, &VAR_6->fid);
 VAR_15 = FUNC_10(VAR_15, VAR_7, VAR_14);
 FUNC_13(VAR_11, VAR_15);

 FUNC_4(VAR_11, VAR_4->cbi);
 FUNC_8(VAR_11, &VAR_10->fid, VAR_5, VAR_7);
 FUNC_3(VAR_11, VAR_4);
 FUNC_2(&VAR_4->ac, VAR_11, VAR_1);
 return FUNC_6(VAR_11, &VAR_4->ac);
}
