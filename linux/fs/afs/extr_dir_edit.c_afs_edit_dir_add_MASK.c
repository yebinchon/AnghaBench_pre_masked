
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int valid; scalar_t__* name; void* unique; void* vnode; scalar_t__ hash_next; scalar_t__* unused; } ;
union afs_xdr_dirent {TYPE_3__ u; } ;
struct TYPE_9__ {int* alloc_ctrs; } ;
struct TYPE_8__ {int magic; int npages; } ;
union afs_xdr_dir_block {TYPE_2__ meta; union afs_xdr_dirent* dirents; TYPE_1__ hdr; } ;
struct qstr {int len; int name; } ;
struct page {int dummy; } ;
struct afs_xdr_dir_page {union afs_xdr_dir_block* blocks; } ;
struct TYPE_11__ {TYPE_7__* i_mapping; } ;
struct afs_vnode {int flags; TYPE_4__ vfs_inode; } ;
struct afs_fid {int unique; int vnode; } ;
typedef unsigned int pgoff_t ;
typedef int loff_t ;
typedef int gfp_t ;
typedef enum afs_edit_dir_reason { ____Placeholder_afs_edit_dir_reason } afs_edit_dir_reason ;
struct TYPE_12__ {int gfp_mask; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (char*,unsigned int,...) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (union afs_xdr_dir_block*,union afs_xdr_dir_block*,unsigned int) ;
 int FUNC_6 (union afs_xdr_dir_block*,unsigned int) ;
 int FUNC_7 (union afs_xdr_dir_block*,int,unsigned int) ;
 int FUNC_8 (struct afs_vnode*,int ) ;
 int FUNC_9 (int ,int *) ;
 struct page* FUNC_10 (TYPE_7__*,unsigned int,int ) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*,int) ;
 int FUNC_14 (TYPE_4__*) ;
 struct afs_xdr_dir_page* FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (scalar_t__*,int ,int) ;
 int VAR_11 ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct page*) ;
 unsigned int FUNC_20 (int,unsigned int) ;
 int FUNC_21 (struct page*,int) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (struct afs_vnode*,int,int ,unsigned int,int,int ,int ,int ) ;
 int FUNC_24 (struct page*) ;

void FUNC_25(struct afs_vnode *VAR_12,
        struct qstr *VAR_13, struct afs_fid *VAR_14,
        enum afs_edit_dir_reason VAR_15)
{
 union afs_xdr_dir_block *VAR_16, *VAR_17;
 struct afs_xdr_dir_page *VAR_18, *VAR_19;
 union afs_xdr_dirent *VAR_20;
 struct page *VAR_21, *VAR_22;
 unsigned int VAR_23, VAR_24, VAR_25;
 pgoff_t VAR_26;
 loff_t VAR_27;
 gfp_t VAR_28;
 int VAR_29;

 FUNC_3(",,{%d,%s},", VAR_13->len, VAR_13->name);

 VAR_27 = FUNC_12(&VAR_12->vfs_inode);
 if (VAR_27 > VAR_2 * VAR_4 ||
     (VAR_27 & (VAR_2 - 1))) {
  FUNC_9(VAR_6, &VAR_12->flags);
  return;
 }

 VAR_28 = VAR_12->vfs_inode.i_mapping->gfp_mask;
 VAR_21 = FUNC_10(VAR_12->vfs_inode.i_mapping, 0, VAR_28);
 if (!VAR_21) {
  FUNC_9(VAR_6, &VAR_12->flags);
  FUNC_4(" [fgp]");
  return;
 }


 VAR_23 = FUNC_20(12 + VAR_13->len + 1 + 4, VAR_3);
 VAR_23 /= VAR_3;

 VAR_18 = FUNC_15(VAR_21);
 VAR_16 = &VAR_18->blocks[0];
 if (VAR_27 == 0)
  goto new_directory;
 VAR_24 = VAR_27 / VAR_2;




 for (VAR_25 = 0; VAR_25 < VAR_24 + 1; VAR_25++) {



  VAR_26 = VAR_25 / VAR_0;
  if (VAR_26 == 0) {
   VAR_22 = VAR_21;
   VAR_19 = VAR_18;
  } else {
   if (VAR_24 >= VAR_4)
    goto error;
   VAR_28 = VAR_12->vfs_inode.i_mapping->gfp_mask;
   VAR_22 = FUNC_10(VAR_12->vfs_inode.i_mapping,
         VAR_26, VAR_28);
   if (!VAR_22)
    goto error;
   if (!FUNC_0(VAR_22)) {
    FUNC_21(VAR_22, 1);
    FUNC_1(VAR_22);
   }
   VAR_19 = FUNC_15(VAR_22);
  }


  if (!FUNC_22(VAR_6, &VAR_12->flags))
   goto invalidated;

  VAR_17 = &VAR_19->blocks[VAR_25 % VAR_0];

  FUNC_2("block %u: %2u %3u %u",
         VAR_25,
         (VAR_25 < VAR_1) ? VAR_16->meta.alloc_ctrs[VAR_25] : 99,
         FUNC_18(VAR_17->hdr.npages),
         FUNC_18(VAR_17->hdr.magic));


  if (VAR_25 == VAR_24) {
   FUNC_2("init %u", VAR_25);
   FUNC_5(VAR_16, VAR_17, VAR_25);
   FUNC_13(&VAR_12->vfs_inode, (VAR_25 + 1) * VAR_2);
  }


  if (VAR_25 >= VAR_1 ||
      VAR_16->meta.alloc_ctrs[VAR_25] >= VAR_23) {



   VAR_29 = FUNC_6(VAR_17, VAR_23);
   if (VAR_29 >= 0) {
    FUNC_2("slot %u", VAR_29);
    goto found_space;
   }
  }

  if (VAR_22 != VAR_21) {
   FUNC_24(VAR_22);
   FUNC_16(VAR_22);
   FUNC_19(VAR_22);
  }
 }




 FUNC_23(VAR_12, VAR_15, VAR_10, 0, 0, 0, 0, VAR_13->name);
 FUNC_9(VAR_6, &VAR_12->flags);
 goto out_unmap;

new_directory:
 FUNC_5(VAR_16, VAR_16, 0);
 VAR_27 = VAR_2;
 FUNC_13(&VAR_12->vfs_inode, VAR_27);
 VAR_29 = VAR_5;
 VAR_22 = VAR_21;
 VAR_17 = VAR_16;
 VAR_24 = 1;
 VAR_25 = 0;

found_space:

 FUNC_23(VAR_12, VAR_15, VAR_7, VAR_25, VAR_29,
      VAR_14->vnode, VAR_14->unique, VAR_13->name);
 VAR_20 = &VAR_17->dirents[VAR_29];
 VAR_20->u.valid = 1;
 VAR_20->u.unused[0] = 0;
 VAR_20->u.hash_next = 0;
 VAR_20->u.vnode = FUNC_11(VAR_14->vnode);
 VAR_20->u.unique = FUNC_11(VAR_14->unique);
 FUNC_17(VAR_20->u.name, VAR_13->name, VAR_13->len + 1);
 VAR_20->u.name[VAR_13->len] = 0;


 FUNC_7(VAR_17, VAR_29, VAR_23);
 if (VAR_22 != VAR_21) {
  FUNC_24(VAR_22);
  FUNC_16(VAR_22);
  FUNC_19(VAR_22);
 }


 if (VAR_25 < VAR_1)
  VAR_16->meta.alloc_ctrs[VAR_25] -= VAR_23;

 FUNC_14(&VAR_12->vfs_inode);
 FUNC_8(VAR_12, VAR_11);
 FUNC_2("Insert %s in %u[%u]", VAR_13->name, VAR_25, VAR_29);

out_unmap:
 FUNC_24(VAR_21);
 FUNC_16(VAR_21);
 FUNC_19(VAR_21);
 FUNC_4("");
 return;

invalidated:
 FUNC_23(VAR_12, VAR_15, VAR_9, 0, 0, 0, 0, VAR_13->name);
 FUNC_9(VAR_6, &VAR_12->flags);
 if (VAR_22 != VAR_21) {
  FUNC_16(VAR_22);
  FUNC_19(VAR_22);
 }
 goto out_unmap;

error:
 FUNC_23(VAR_12, VAR_15, VAR_8, 0, 0, 0, 0, VAR_13->name);
 FUNC_9(VAR_6, &VAR_12->flags);
 goto out_unmap;
}
