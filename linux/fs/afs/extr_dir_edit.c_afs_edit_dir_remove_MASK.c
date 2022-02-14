
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int unique; int vnode; } ;
union afs_xdr_dirent {TYPE_1__ u; } ;
struct TYPE_7__ {int* alloc_ctrs; } ;
union afs_xdr_dir_block {TYPE_2__ meta; union afs_xdr_dirent* dirents; } ;
struct qstr {int name; scalar_t__ len; } ;
struct page {int dummy; } ;
struct afs_xdr_dir_page {union afs_xdr_dir_block* blocks; } ;
struct TYPE_8__ {int data_version; } ;
struct TYPE_9__ {int i_mapping; } ;
struct afs_vnode {int flags; TYPE_3__ status; TYPE_4__ vfs_inode; } ;
typedef unsigned int pgoff_t ;
typedef int loff_t ;
typedef enum afs_edit_dir_reason { ____Placeholder_afs_edit_dir_reason } afs_edit_dir_reason ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ,unsigned int,int) ;
 int FUNC_1 (char*,scalar_t__,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (union afs_xdr_dir_block*,int,unsigned int) ;
 int FUNC_4 (union afs_xdr_dir_block*,struct qstr*,unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct afs_vnode*,int ) ;
 int FUNC_6 (int ,int *) ;
 struct page* FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 struct afs_xdr_dir_page* FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (union afs_xdr_dirent*,int ,int) ;
 int VAR_11 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct page*) ;
 unsigned int FUNC_15 (scalar_t__,unsigned int) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (struct afs_vnode*,int,int ,unsigned int,int,int ,int ,int ) ;
 int FUNC_18 (struct page*) ;

void FUNC_19(struct afs_vnode *VAR_12,
    struct qstr *VAR_13, enum afs_edit_dir_reason VAR_14)
{
 struct afs_xdr_dir_page *VAR_15, *VAR_16;
 union afs_xdr_dir_block *VAR_17, *VAR_18;
 union afs_xdr_dirent *VAR_19;
 struct page *VAR_20, *VAR_21;
 unsigned int VAR_22, VAR_23, VAR_24;
 pgoff_t VAR_25;
 loff_t VAR_26;
 int VAR_27;

 FUNC_1(",,{%d,%s},", VAR_13->len, VAR_13->name);

 VAR_26 = FUNC_8(&VAR_12->vfs_inode);
 if (VAR_26 < VAR_2 ||
     VAR_26 > VAR_2 * VAR_4 ||
     (VAR_26 & (VAR_2 - 1))) {
  FUNC_6(VAR_6, &VAR_12->flags);
  return;
 }
 VAR_23 = VAR_26 / VAR_2;

 VAR_20 = FUNC_7(VAR_12->vfs_inode.i_mapping, 0);
 if (!VAR_20) {
  FUNC_6(VAR_6, &VAR_12->flags);
  FUNC_2(" [fgp]");
  return;
 }


 VAR_22 = FUNC_15(12 + VAR_13->len + 1 + 4, VAR_3);
 VAR_22 /= VAR_3;

 VAR_15 = FUNC_10(VAR_20);
 VAR_17 = &VAR_15->blocks[0];




 for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++) {
  VAR_25 = VAR_24 / VAR_0;
  if (VAR_25 != 0) {
   VAR_21 = FUNC_7(VAR_12->vfs_inode.i_mapping, VAR_25);
   if (!VAR_21)
    goto error;
   VAR_16 = FUNC_10(VAR_21);
  } else {
   VAR_21 = VAR_20;
   VAR_16 = VAR_15;
  }


  if (!FUNC_16(VAR_6, &VAR_12->flags))
   goto invalidated;

  VAR_18 = &VAR_16->blocks[VAR_24 % VAR_0];

  if (VAR_24 > VAR_1 ||
      VAR_17->meta.alloc_ctrs[VAR_24] <= VAR_5 - 1 - VAR_22) {
   VAR_27 = FUNC_4(VAR_18, VAR_13, VAR_24);
   if (VAR_27 >= 0)
    goto found_dirent;
  }

  if (VAR_21 != VAR_20) {
   FUNC_18(VAR_21);
   FUNC_11(VAR_21);
   FUNC_14(VAR_21);
  }
 }


 FUNC_17(VAR_12, VAR_14, VAR_10,
      0, 0, 0, 0, VAR_13->name);
 FUNC_6(VAR_6, &VAR_12->flags);
 goto out_unmap;

found_dirent:
 VAR_19 = &VAR_18->dirents[VAR_27];

 FUNC_17(VAR_12, VAR_14, VAR_7, VAR_24, VAR_27,
      FUNC_13(VAR_19->u.vnode), FUNC_13(VAR_19->u.unique),
      VAR_13->name);

 FUNC_12(VAR_19, 0, sizeof(*VAR_19) * VAR_22);


 FUNC_3(VAR_18, VAR_27, VAR_22);
 if (VAR_21 != VAR_20) {
  FUNC_18(VAR_21);
  FUNC_11(VAR_21);
  FUNC_14(VAR_21);
 }


 if (VAR_24 < VAR_1)
  VAR_17->meta.alloc_ctrs[VAR_24] += VAR_22;

 FUNC_9(&VAR_12->vfs_inode, VAR_12->status.data_version);
 FUNC_5(VAR_12, VAR_11);
 FUNC_0("Remove %s from %u[%u]", VAR_13->name, VAR_24, VAR_27);

out_unmap:
 FUNC_18(VAR_20);
 FUNC_11(VAR_20);
 FUNC_14(VAR_20);
 FUNC_2("");
 return;

invalidated:
 FUNC_17(VAR_12, VAR_14, VAR_9,
      0, 0, 0, 0, VAR_13->name);
 FUNC_6(VAR_6, &VAR_12->flags);
 if (VAR_21 != VAR_20) {
  FUNC_18(VAR_21);
  FUNC_11(VAR_21);
  FUNC_14(VAR_21);
 }
 goto out_unmap;

error:
 FUNC_17(VAR_12, VAR_14, VAR_8,
      0, 0, 0, 0, VAR_13->name);
 FUNC_6(VAR_6, &VAR_12->flags);
 goto out_unmap;
}
