
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_13__ ;
typedef struct TYPE_30__ TYPE_12__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


typedef int u8 ;
struct inode {int i_mode; int i_size; int i_blocks; int i_ino; int i_sb; TYPE_7__* i_mapping; int i_generation; int i_atime; int i_ctime; int i_mtime; int i_nlink; int i_gid; int i_uid; } ;
struct TYPE_40__ {int mft_record_size; scalar_t__ cluster_size; scalar_t__ sector_size; int sb; int sector_size_bits; int cluster_size_bits; } ;
typedef TYPE_9__ ntfs_volume ;
struct TYPE_39__ {TYPE_10__* base_ntfs_ino; } ;
struct TYPE_36__ {int block_size; int block_size_bits; scalar_t__ vcn_size; int vcn_size_bits; scalar_t__ collation_rule; } ;
struct TYPE_37__ {TYPE_5__ index; } ;
struct TYPE_28__ {int initialized_size; int allocated_size; int nr_extents; int name_len; TYPE_8__ ext; TYPE_6__ itype; int name; int seq_no; } ;
typedef TYPE_10__ ntfs_inode ;
struct TYPE_29__ {TYPE_13__* attr; scalar_t__ mrec; } ;
typedef TYPE_11__ ntfs_attr_search_ctx ;
typedef int loff_t ;
struct TYPE_38__ {int * a_ops; } ;
struct TYPE_34__ {int allocated_size; int initialized_size; int data_size; scalar_t__ lowest_vcn; int mapping_pairs_offset; } ;
struct TYPE_32__ {scalar_t__ value_length; int value_offset; } ;
struct TYPE_35__ {TYPE_3__ non_resident; TYPE_1__ resident; } ;
struct TYPE_33__ {int flags; scalar_t__ index_length; } ;
struct TYPE_31__ {int non_resident; int flags; TYPE_4__ data; int name_offset; scalar_t__ name_length; } ;
struct TYPE_30__ {TYPE_2__ index; scalar_t__ index_block_size; scalar_t__ collation_rule; scalar_t__ type; } ;
typedef struct inode MFT_RECORD ;
typedef TYPE_12__ INDEX_ROOT ;
typedef TYPE_13__ ATTR_RECORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (TYPE_10__*) ;
 scalar_t__ FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (TYPE_10__*) ;
 scalar_t__ FUNC_4 (TYPE_10__*) ;
 scalar_t__ VAR_12 ;
 TYPE_10__* FUNC_5 (struct inode*) ;
 TYPE_9__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_9__*) ;
 scalar_t__ VAR_13 ;
 int FUNC_8 (struct inode*) ;
 int VAR_14 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (struct inode*) ;
 struct inode* FUNC_17 (TYPE_10__*) ;
 TYPE_11__* FUNC_18 (TYPE_10__*,struct inode*) ;
 struct inode* FUNC_19 (struct inode*,int ,int ,int ) ;
 int FUNC_20 (int ,int ,int ,int ,int ,int *,int ,TYPE_11__*) ;
 int FUNC_21 (TYPE_11__*) ;
 int FUNC_22 (TYPE_11__*) ;
 int FUNC_23 (char*,...) ;
 int FUNC_24 (int ,char*,...) ;
 int FUNC_25 (struct inode*) ;
 int VAR_15 ;
 int FUNC_26 (struct inode*,int ) ;
 void* FUNC_27 (int ) ;
 scalar_t__ FUNC_28 (int) ;
 int FUNC_29 (TYPE_10__*) ;

__attribute__((used)) static int FUNC_30(struct inode *VAR_16, struct inode *VAR_17)
{
 loff_t VAR_18;
 ntfs_volume *VAR_19 = FUNC_6(VAR_17->i_sb);
 ntfs_inode *VAR_20, *VAR_21, *VAR_22;
 struct inode *VAR_23;
 MFT_RECORD *VAR_24;
 ATTR_RECORD *VAR_25;
 ntfs_attr_search_ctx *VAR_26;
 INDEX_ROOT *VAR_27;
 u8 *VAR_28, *VAR_29;
 int VAR_30 = 0;

 FUNC_23("Entering for i_ino 0x%lx.", VAR_17->i_ino);
 FUNC_25(VAR_17);
 VAR_20 = FUNC_5(VAR_17);
 VAR_21 = FUNC_5(VAR_16);

 VAR_17->i_uid = VAR_16->i_uid;
 VAR_17->i_gid = VAR_16->i_gid;
 FUNC_26(VAR_17, VAR_16->i_nlink);
 VAR_17->i_mtime = VAR_16->i_mtime;
 VAR_17->i_ctime = VAR_16->i_ctime;
 VAR_17->i_atime = VAR_16->i_atime;
 VAR_17->i_generation = VAR_20->seq_no = VAR_21->seq_no;

 VAR_17->i_mode = VAR_16->i_mode & ~VAR_14;

 VAR_24 = FUNC_17(VAR_21);
 if (FUNC_0(VAR_24)) {
  VAR_30 = FUNC_8(VAR_24);
  goto err_out;
 }
 VAR_26 = FUNC_18(VAR_21, VAR_24);
 if (!VAR_26) {
  VAR_30 = -VAR_9;
  goto unm_err_out;
 }

 VAR_30 = FUNC_20(VAR_5, VAR_20->name, VAR_20->name_len,
   VAR_6, 0, ((void*)0), 0, VAR_26);
 if (FUNC_28(VAR_30)) {
  if (VAR_30 == -VAR_8)
   FUNC_24(VAR_17->i_sb, "$INDEX_ROOT attribute is "
     "missing.");
  goto unm_err_out;
 }
 VAR_25 = VAR_26->attr;

 if (FUNC_28(VAR_25->non_resident)) {
  FUNC_24(VAR_19->sb, "$INDEX_ROOT attribute is not resident.");
  goto unm_err_out;
 }

 if (FUNC_28(VAR_25->name_length && (FUNC_14(VAR_25->name_offset) >=
   FUNC_14(VAR_25->data.resident.value_offset)))) {
  FUNC_24(VAR_19->sb, "$INDEX_ROOT attribute name is placed "
    "after the attribute value.");
  goto unm_err_out;
 }




 if (VAR_25->flags & (VAR_0 | VAR_1 |
   VAR_2)) {
  FUNC_24(VAR_17->i_sb, "Found compressed/encrypted/sparse index "
    "root attribute.");
  goto unm_err_out;
 }
 VAR_27 = (INDEX_ROOT*)((u8*)VAR_25 + FUNC_14(VAR_25->data.resident.value_offset));
 VAR_28 = (u8*)VAR_27 + FUNC_15(VAR_25->data.resident.value_length);
 if (VAR_28 > (u8*)VAR_26->mrec + VAR_19->mft_record_size) {
  FUNC_24(VAR_17->i_sb, "$INDEX_ROOT attribute is corrupt.");
  goto unm_err_out;
 }
 VAR_29 = (u8*)&VAR_27->index + FUNC_15(VAR_27->index.index_length);
 if (VAR_29 > VAR_28) {
  FUNC_24(VAR_17->i_sb, "Index is corrupt.");
  goto unm_err_out;
 }
 if (VAR_27->type) {
  FUNC_24(VAR_17->i_sb, "Index type is not 0 (type is 0x%x).",
    FUNC_15(VAR_27->type));
  goto unm_err_out;
 }
 VAR_20->itype.index.collation_rule = VAR_27->collation_rule;
 FUNC_23("Index collation rule is 0x%x.",
   FUNC_15(VAR_27->collation_rule));
 VAR_20->itype.index.block_size = FUNC_15(VAR_27->index_block_size);
 if (!FUNC_13(VAR_20->itype.index.block_size)) {
  FUNC_24(VAR_17->i_sb, "Index block size (%u) is not a power of "
    "two.", VAR_20->itype.index.block_size);
  goto unm_err_out;
 }
 if (VAR_20->itype.index.block_size > VAR_13) {
  FUNC_24(VAR_17->i_sb, "Index block size (%u) > PAGE_SIZE "
    "(%ld) is not supported.  Sorry.",
    VAR_20->itype.index.block_size, VAR_13);
  VAR_30 = -VAR_10;
  goto unm_err_out;
 }
 if (VAR_20->itype.index.block_size < VAR_12) {
  FUNC_24(VAR_17->i_sb, "Index block size (%u) < NTFS_BLOCK_SIZE "
    "(%i) is not supported.  Sorry.",
    VAR_20->itype.index.block_size, VAR_12);
  VAR_30 = -VAR_10;
  goto unm_err_out;
 }
 VAR_20->itype.index.block_size_bits = FUNC_9(VAR_20->itype.index.block_size) - 1;

 if (VAR_19->cluster_size <= VAR_20->itype.index.block_size) {
  VAR_20->itype.index.vcn_size = VAR_19->cluster_size;
  VAR_20->itype.index.vcn_size_bits = VAR_19->cluster_size_bits;
 } else {
  VAR_20->itype.index.vcn_size = VAR_19->sector_size;
  VAR_20->itype.index.vcn_size_bits = VAR_19->sector_size_bits;
 }

 if (!(VAR_27->index.flags & VAR_11)) {

  VAR_17->i_size = VAR_20->initialized_size = VAR_20->allocated_size = 0;

  FUNC_21(VAR_26);
  FUNC_29(VAR_21);
  VAR_24 = ((void*)0);
  VAR_26 = ((void*)0);
  goto skip_large_index_stuff;
 }
 FUNC_3(VAR_20);

 FUNC_22(VAR_26);
 VAR_30 = FUNC_20(VAR_4, VAR_20->name, VAR_20->name_len,
   VAR_6, 0, ((void*)0), 0, VAR_26);
 if (FUNC_28(VAR_30)) {
  if (VAR_30 == -VAR_8)
   FUNC_24(VAR_17->i_sb, "$INDEX_ALLOCATION attribute is "
     "not present but $INDEX_ROOT "
     "indicated it is.");
  else
   FUNC_24(VAR_17->i_sb, "Failed to lookup "
     "$INDEX_ALLOCATION attribute.");
  goto unm_err_out;
 }
 VAR_25 = VAR_26->attr;
 if (!VAR_25->non_resident) {
  FUNC_24(VAR_17->i_sb, "$INDEX_ALLOCATION attribute is "
    "resident.");
  goto unm_err_out;
 }



 if (FUNC_28(VAR_25->name_length && (FUNC_14(VAR_25->name_offset) >=
   FUNC_14(
   VAR_25->data.non_resident.mapping_pairs_offset)))) {
  FUNC_24(VAR_19->sb, "$INDEX_ALLOCATION attribute name is "
    "placed after the mapping pairs array.");
  goto unm_err_out;
 }
 if (VAR_25->flags & VAR_1) {
  FUNC_24(VAR_17->i_sb, "$INDEX_ALLOCATION attribute is "
    "encrypted.");
  goto unm_err_out;
 }
 if (VAR_25->flags & VAR_2) {
  FUNC_24(VAR_17->i_sb, "$INDEX_ALLOCATION attribute is sparse.");
  goto unm_err_out;
 }
 if (VAR_25->flags & VAR_0) {
  FUNC_24(VAR_17->i_sb, "$INDEX_ALLOCATION attribute is "
    "compressed.");
  goto unm_err_out;
 }
 if (VAR_25->data.non_resident.lowest_vcn) {
  FUNC_24(VAR_17->i_sb, "First extent of $INDEX_ALLOCATION "
    "attribute has non zero lowest_vcn.");
  goto unm_err_out;
 }
 VAR_17->i_size = FUNC_27(VAR_25->data.non_resident.data_size);
 VAR_20->initialized_size = FUNC_27(
   VAR_25->data.non_resident.initialized_size);
 VAR_20->allocated_size = FUNC_27(VAR_25->data.non_resident.allocated_size);




 FUNC_21(VAR_26);
 FUNC_29(VAR_21);
 VAR_24 = ((void*)0);
 VAR_26 = ((void*)0);

 VAR_23 = FUNC_19(VAR_16, VAR_3, VAR_20->name, VAR_20->name_len);
 if (FUNC_0(VAR_23)) {
  FUNC_24(VAR_17->i_sb, "Failed to get bitmap attribute.");
  VAR_30 = FUNC_8(VAR_23);
  goto unm_err_out;
 }
 VAR_22 = FUNC_5(VAR_23);
 if (FUNC_1(VAR_22) || FUNC_2(VAR_22) ||
   FUNC_4(VAR_22)) {
  FUNC_24(VAR_17->i_sb, "$BITMAP attribute is compressed and/or "
    "encrypted and/or sparse.");
  goto iput_unm_err_out;
 }

 VAR_18 = FUNC_10(VAR_23);
 if ((VAR_18 << 3) < (VAR_17->i_size >> VAR_20->itype.index.block_size_bits)) {
  FUNC_24(VAR_17->i_sb, "Index bitmap too small (0x%llx) for "
    "index allocation (0x%llx).", VAR_18 << 3,
    VAR_17->i_size);
  goto iput_unm_err_out;
 }
 FUNC_12(VAR_23);
skip_large_index_stuff:

 VAR_17->i_mapping->a_ops = &VAR_15;
 VAR_17->i_blocks = VAR_20->allocated_size >> 9;




 FUNC_11(VAR_16);
 VAR_20->ext.base_ntfs_ino = VAR_21;
 VAR_20->nr_extents = -1;

 FUNC_23("Done.");
 return 0;
iput_unm_err_out:
 FUNC_12(VAR_23);
unm_err_out:
 if (!VAR_30)
  VAR_30 = -VAR_7;
 if (VAR_26)
  FUNC_21(VAR_26);
 if (VAR_24)
  FUNC_29(VAR_21);
err_out:
 FUNC_24(VAR_17->i_sb, "Failed with error code %i while reading index "
   "inode (mft_no 0x%lx, name_len %i.", VAR_30, VAR_17->i_ino,
   VAR_20->name_len);
 FUNC_16(VAR_17);
 if (VAR_30 != -VAR_10 && VAR_30 != -VAR_9)
  FUNC_7(VAR_19);
 return VAR_30;
}
