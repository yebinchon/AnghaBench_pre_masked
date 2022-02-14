
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int vid; int vnode; int unique; } ;
struct TYPE_4__ {int tv_sec; } ;
struct TYPE_5__ {TYPE_1__ i_mtime; } ;
struct afs_vnode {TYPE_3__ fid; TYPE_2__ vfs_inode; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct afs_fs_cursor {int ac; int key; struct afs_vnode* vnode; } ;
struct afs_call {unsigned int first_offset; unsigned int last_to; int send_pages; int * request; struct afs_status_cb* out_scb; void* last; void* first; struct address_space* mapping; int key; } ;
struct address_space {int dummy; } ;
typedef void* pgoff_t ;
typedef int loff_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int,int) ;
 int VAR_4 ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,int,int) ;
 int FUNC_2 (int *,struct afs_call*,int ) ;
 int FUNC_3 (struct afs_call*,struct afs_fs_cursor*) ;
 struct afs_net* FUNC_4 (struct afs_vnode*) ;
 int FUNC_5 (struct afs_call*,int *) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct afs_call*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(struct afs_fs_cursor *VAR_5,
          struct address_space *VAR_6,
          pgoff_t VAR_7, pgoff_t VAR_8,
          unsigned VAR_9, unsigned VAR_10,
          loff_t VAR_11, loff_t VAR_12, loff_t VAR_13,
          struct afs_status_cb *VAR_14)
{
 struct afs_vnode *VAR_15 = VAR_5->vnode;
 struct afs_call *VAR_16;
 struct afs_net *VAR_17 = FUNC_4(VAR_15);
 __be32 *VAR_18;

 FUNC_0(",%x,{%llx:%llu},,",
        FUNC_7(VAR_5->key), VAR_15->fid.vid, VAR_15->fid.vnode);

 VAR_16 = FUNC_1(VAR_17, &VAR_4,
       (4 + 6 + 3 * 2) * 4,
       (21 + 6) * 4);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->key = VAR_5->key;
 VAR_16->mapping = VAR_6;
 VAR_16->first = VAR_7;
 VAR_16->last = VAR_8;
 VAR_16->first_offset = VAR_9;
 VAR_16->last_to = VAR_10;
 VAR_16->send_pages = 1;
 VAR_16->out_scb = VAR_14;


 VAR_18 = VAR_16->request;
 *VAR_18++ = FUNC_6(VAR_2);
 *VAR_18++ = FUNC_6(VAR_15->fid.vid);
 *VAR_18++ = FUNC_6(VAR_15->fid.vnode);
 *VAR_18++ = FUNC_6(VAR_15->fid.unique);

 *VAR_18++ = FUNC_6(VAR_0);
 *VAR_18++ = FUNC_6(VAR_15->vfs_inode.i_mtime.tv_sec);
 *VAR_18++ = 0;
 *VAR_18++ = 0;
 *VAR_18++ = 0;
 *VAR_18++ = 0;

 *VAR_18++ = FUNC_6(VAR_12 >> 32);
 *VAR_18++ = FUNC_6((u32) VAR_12);
 *VAR_18++ = FUNC_6(VAR_11 >> 32);
 *VAR_18++ = FUNC_6((u32) VAR_11);
 *VAR_18++ = FUNC_6(VAR_13 >> 32);
 *VAR_18++ = FUNC_6((u32) VAR_13);

 FUNC_8(VAR_16, &VAR_15->fid);
 FUNC_3(VAR_16, VAR_5);
 FUNC_2(&VAR_5->ac, VAR_16, VAR_3);
 return FUNC_5(VAR_16, &VAR_5->ac);
}
