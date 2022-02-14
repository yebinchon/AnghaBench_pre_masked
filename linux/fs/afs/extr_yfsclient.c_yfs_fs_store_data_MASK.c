
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct yfs_xdr_u64 {int dummy; } ;
struct yfs_xdr_YFSVolSync {int dummy; } ;
struct yfs_xdr_YFSStoreStatus {int dummy; } ;
struct yfs_xdr_YFSFid {int dummy; } ;
struct yfs_xdr_YFSFetchStatus {int dummy; } ;
struct TYPE_4__ {int vnode; int vid; } ;
struct TYPE_5__ {int i_mtime; } ;
struct afs_vnode {TYPE_1__ fid; TYPE_3__ vfs_inode; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct afs_fs_cursor {int ac; int cbi; int key; struct afs_vnode* vnode; } ;
struct afs_call {unsigned int first_offset; unsigned int last_to; int send_pages; int * request; struct afs_status_cb* out_scb; scalar_t__ last; scalar_t__ first; struct address_space* mapping; int key; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ pgoff_t ;
typedef int loff_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 struct afs_call* FUNC_2 (struct afs_net*,int *,int,int) ;
 int FUNC_3 (int *,struct afs_call*,int ) ;
 int FUNC_4 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_5 (struct afs_call*,int ) ;
 struct afs_net* FUNC_6 (struct afs_vnode*) ;
 int FUNC_7 (struct afs_call*,int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct afs_call*,TYPE_1__*) ;
 int * FUNC_11 (int *,TYPE_1__*) ;
 int * FUNC_12 (int *,int *) ;
 int * FUNC_13 (int *,int ) ;
 int * FUNC_14 (int *,int) ;
 int VAR_4 ;
 int FUNC_15 (struct afs_call*,int *) ;

int FUNC_16(struct afs_fs_cursor *VAR_5, struct address_space *VAR_6,
        pgoff_t VAR_7, pgoff_t VAR_8,
        unsigned VAR_9, unsigned VAR_10,
        struct afs_status_cb *VAR_11)
{
 struct afs_vnode *VAR_12 = VAR_5->vnode;
 struct afs_call *VAR_13;
 struct afs_net *VAR_14 = FUNC_6(VAR_12);
 loff_t VAR_15, VAR_16, VAR_17;
 __be32 *VAR_18;

 FUNC_1(",%x,{%llx:%llu},,",
        FUNC_9(VAR_5->key), VAR_12->fid.vid, VAR_12->fid.vnode);

 VAR_15 = (loff_t)VAR_10 - (loff_t)VAR_9;
 if (VAR_7 != VAR_8)
  VAR_15 += (loff_t)(VAR_8 - VAR_7) << VAR_2;
 VAR_16 = (loff_t)VAR_7 << VAR_2;
 VAR_16 += VAR_9;

 VAR_17 = FUNC_8(&VAR_12->vfs_inode);
 if (VAR_16 + VAR_15 > VAR_17)
  VAR_17 = VAR_15 + VAR_16;

 FUNC_0("size %llx, at %llx, i_size %llx",
        (unsigned long long)VAR_15, (unsigned long long)VAR_16,
        (unsigned long long)VAR_17);

 VAR_13 = FUNC_2(VAR_14, &VAR_4,
       sizeof(__be32) +
       sizeof(__be32) +
       sizeof(struct yfs_xdr_YFSFid) +
       sizeof(struct yfs_xdr_YFSStoreStatus) +
       sizeof(struct yfs_xdr_u64) * 3,
       sizeof(struct yfs_xdr_YFSFetchStatus) +
       sizeof(struct yfs_xdr_YFSVolSync));
 if (!VAR_13)
  return -VAR_0;

 VAR_13->key = VAR_5->key;
 VAR_13->mapping = VAR_6;
 VAR_13->first = VAR_7;
 VAR_13->last = VAR_8;
 VAR_13->first_offset = VAR_9;
 VAR_13->last_to = VAR_10;
 VAR_13->send_pages = 1;
 VAR_13->out_scb = VAR_11;


 VAR_18 = VAR_13->request;
 VAR_18 = FUNC_13(VAR_18, VAR_3);
 VAR_18 = FUNC_13(VAR_18, 0);
 VAR_18 = FUNC_11(VAR_18, &VAR_12->fid);
 VAR_18 = FUNC_12(VAR_18, &VAR_12->vfs_inode.i_mtime);
 VAR_18 = FUNC_14(VAR_18, VAR_16);
 VAR_18 = FUNC_14(VAR_18, VAR_15);
 VAR_18 = FUNC_14(VAR_18, VAR_17);
 FUNC_15(VAR_13, VAR_18);

 FUNC_5(VAR_13, VAR_5->cbi);
 FUNC_10(VAR_13, &VAR_12->fid);
 FUNC_4(VAR_13, VAR_5);
 FUNC_3(&VAR_5->ac, VAR_13, VAR_1);
 return FUNC_7(VAR_13, &VAR_5->ac);
}
