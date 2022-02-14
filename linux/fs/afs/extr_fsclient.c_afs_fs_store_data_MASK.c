
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int vid; int vnode; int unique; } ;
struct TYPE_7__ {int tv_sec; } ;
struct TYPE_9__ {TYPE_2__ i_mtime; } ;
struct afs_vnode {TYPE_3__ fid; TYPE_4__ vfs_inode; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct afs_fs_cursor {int ac; TYPE_5__* cbi; int key; struct afs_vnode* vnode; } ;
struct afs_call {unsigned int first_offset; unsigned int last_to; int send_pages; int * request; struct afs_status_cb* out_scb; scalar_t__ last; scalar_t__ first; struct address_space* mapping; int key; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ pgoff_t ;
typedef int loff_t ;
typedef int __be32 ;
struct TYPE_10__ {TYPE_1__* server; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_1 (char*,int ,int,int) ;
 int VAR_6 ;
 struct afs_call* FUNC_2 (struct afs_net*,int *,int,int) ;
 int FUNC_3 (struct afs_fs_cursor*,struct address_space*,scalar_t__,scalar_t__,unsigned int,unsigned int,int,int,int,struct afs_status_cb*) ;
 int FUNC_4 (int *,struct afs_call*,int ) ;
 int FUNC_5 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_6 (struct afs_call*,TYPE_5__*) ;
 struct afs_net* FUNC_7 (struct afs_vnode*) ;
 int FUNC_8 (struct afs_call*,int *) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (struct afs_call*,TYPE_3__*) ;
 int FUNC_14 (struct afs_fs_cursor*,struct address_space*,scalar_t__,scalar_t__,unsigned int,unsigned int,struct afs_status_cb*) ;

int FUNC_15(struct afs_fs_cursor *VAR_7, struct address_space *VAR_8,
        pgoff_t VAR_9, pgoff_t VAR_10,
        unsigned VAR_11, unsigned VAR_12,
        struct afs_status_cb *VAR_13)
{
 struct afs_vnode *VAR_14 = VAR_7->vnode;
 struct afs_call *VAR_15;
 struct afs_net *VAR_16 = FUNC_7(VAR_14);
 loff_t VAR_17, VAR_18, VAR_19;
 __be32 *VAR_20;

 if (FUNC_12(VAR_0, &VAR_7->cbi->server->flags))
  return FUNC_14(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);

 FUNC_1(",%x,{%llx:%llu},,",
        FUNC_11(VAR_7->key), VAR_14->fid.vid, VAR_14->fid.vnode);

 VAR_17 = (loff_t)VAR_12 - (loff_t)VAR_11;
 if (VAR_9 != VAR_10)
  VAR_17 += (loff_t)(VAR_10 - VAR_9) << VAR_5;
 VAR_18 = (loff_t)VAR_9 << VAR_5;
 VAR_18 += VAR_11;

 VAR_19 = FUNC_10(&VAR_14->vfs_inode);
 if (VAR_18 + VAR_17 > VAR_19)
  VAR_19 = VAR_17 + VAR_18;

 FUNC_0("size %llx, at %llx, i_size %llx",
        (unsigned long long) VAR_17, (unsigned long long) VAR_18,
        (unsigned long long) VAR_19);

 if (VAR_18 >> 32 || VAR_19 >> 32 || VAR_17 >> 32 || (VAR_18 + VAR_17) >> 32)
  return FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12,
        VAR_17, VAR_18, VAR_19, VAR_13);

 VAR_15 = FUNC_2(VAR_16, &VAR_6,
       (4 + 6 + 3) * 4,
       (21 + 6) * 4);
 if (!VAR_15)
  return -VAR_2;

 VAR_15->key = VAR_7->key;
 VAR_15->mapping = VAR_8;
 VAR_15->first = VAR_9;
 VAR_15->last = VAR_10;
 VAR_15->first_offset = VAR_11;
 VAR_15->last_to = VAR_12;
 VAR_15->send_pages = 1;
 VAR_15->out_scb = VAR_13;


 VAR_20 = VAR_15->request;
 *VAR_20++ = FUNC_9(VAR_3);
 *VAR_20++ = FUNC_9(VAR_14->fid.vid);
 *VAR_20++ = FUNC_9(VAR_14->fid.vnode);
 *VAR_20++ = FUNC_9(VAR_14->fid.unique);

 *VAR_20++ = FUNC_9(VAR_1);
 *VAR_20++ = FUNC_9(VAR_14->vfs_inode.i_mtime.tv_sec);
 *VAR_20++ = 0;
 *VAR_20++ = 0;
 *VAR_20++ = 0;
 *VAR_20++ = 0;

 *VAR_20++ = FUNC_9(VAR_18);
 *VAR_20++ = FUNC_9(VAR_17);
 *VAR_20++ = FUNC_9(VAR_19);

 FUNC_6(VAR_15, VAR_7->cbi);
 FUNC_13(VAR_15, &VAR_14->fid);
 FUNC_5(VAR_15, VAR_7);
 FUNC_4(&VAR_7->ac, VAR_15, VAR_4);
 return FUNC_8(VAR_15, &VAR_7->ac);
}
