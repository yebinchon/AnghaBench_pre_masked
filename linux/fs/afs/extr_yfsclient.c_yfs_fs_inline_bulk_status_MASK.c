
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct yfs_xdr_YFSFid {int dummy; } ;
struct yfs_xdr_YFSFetchStatus {int dummy; } ;
struct afs_volsync {int dummy; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct TYPE_3__ {int error; } ;
struct afs_fs_cursor {TYPE_1__ ac; int cbi; int key; } ;
struct afs_fid {int vnode; int vid; } ;
struct afs_call {unsigned int count2; int * request; struct afs_volsync* out_volsync; struct afs_status_cb* out_scb; int key; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ,unsigned int) ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,int,int) ;
 int FUNC_2 (TYPE_1__*,struct afs_call*,int ) ;
 int FUNC_3 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_4 (struct afs_call*,int ) ;
 int FUNC_5 (struct afs_call*,TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct afs_call*,struct afs_fid*) ;
 int * FUNC_8 (int *,struct afs_fid*) ;
 int * FUNC_9 (int *,unsigned int) ;
 int VAR_3 ;
 int FUNC_10 (struct afs_call*,int *) ;

int FUNC_11(struct afs_fs_cursor *VAR_4,
         struct afs_net *VAR_5,
         struct afs_fid *VAR_6,
         struct afs_status_cb *VAR_7,
         unsigned int VAR_8,
         struct afs_volsync *VAR_9)
{
 struct afs_call *VAR_10;
 __be32 *VAR_11;
 int VAR_12;

 FUNC_0(",%x,{%llx:%llu},%u",
        FUNC_6(VAR_4->key), VAR_6[0].vid, VAR_6[1].vnode, VAR_8);

 VAR_10 = FUNC_1(VAR_5, &VAR_3,
       sizeof(__be32) +
       sizeof(__be32) +
       sizeof(__be32) +
       sizeof(struct yfs_xdr_YFSFid) * VAR_8,
       sizeof(struct yfs_xdr_YFSFetchStatus));
 if (!VAR_10) {
  VAR_4->ac.error = -VAR_0;
  return -VAR_0;
 }

 VAR_10->key = VAR_4->key;
 VAR_10->out_scb = VAR_7;
 VAR_10->out_volsync = VAR_9;
 VAR_10->count2 = VAR_8;


 VAR_11 = VAR_10->request;
 VAR_11 = FUNC_9(VAR_11, VAR_2);
 VAR_11 = FUNC_9(VAR_11, 0);
 VAR_11 = FUNC_9(VAR_11, VAR_8);
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
  VAR_11 = FUNC_8(VAR_11, &VAR_6[VAR_12]);
 FUNC_10(VAR_10, VAR_11);

 FUNC_4(VAR_10, VAR_4->cbi);
 FUNC_7(VAR_10, &VAR_6[0]);
 FUNC_3(VAR_10, VAR_4);
 FUNC_2(&VAR_4->ac, VAR_10, VAR_1);
 return FUNC_5(VAR_10, &VAR_4->ac);
}
