
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_25__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_13__ ;
typedef struct TYPE_35__ TYPE_12__ ;
typedef struct TYPE_34__ TYPE_11__ ;
typedef struct TYPE_33__ TYPE_10__ ;


typedef char u8 ;
typedef unsigned int u32 ;
struct super_block {unsigned int s_blocksize; int s_blocksize_bits; } ;
struct inode {int i_generation; scalar_t__ i_ino; int i_size; int * i_fop; int * i_op; int i_mode; int i_gid; int i_uid; TYPE_3__* i_mapping; struct super_block* i_sb; } ;
struct buffer_head {char* b_data; } ;
typedef int s64 ;
typedef int runlist_element ;
struct TYPE_45__ {int mft_record_size; unsigned long long mft_record_size_bits; int mft_lcn; int cluster_size_bits; struct inode* mft_ino; } ;
typedef TYPE_8__ ntfs_volume ;
struct TYPE_44__ {int lock; int * rl; } ;
struct TYPE_38__ {int * rl; } ;
struct TYPE_37__ {int block_size; unsigned long long block_size_bits; } ;
struct TYPE_39__ {TYPE_1__ index; } ;
struct TYPE_46__ {int seq_no; unsigned int attr_list_size; char* attr_list; int initialized_size; int allocated_size; int mrec_lock; TYPE_7__ runlist; TYPE_25__ attr_list_rl; TYPE_2__ itype; scalar_t__ name_len; int * name; scalar_t__ type; } ;
typedef TYPE_9__ ntfs_inode ;
struct TYPE_33__ {TYPE_12__* attr; scalar_t__ mrec; } ;
typedef TYPE_10__ ntfs_attr_search_ctx ;
typedef int VCN ;
struct TYPE_42__ {scalar_t__ lowest_vcn; scalar_t__ highest_vcn; scalar_t__ allocated_size; scalar_t__ initialized_size; scalar_t__ data_size; } ;
struct TYPE_41__ {scalar_t__ value_length; int value_offset; } ;
struct TYPE_43__ {TYPE_5__ non_resident; TYPE_4__ resident; } ;
struct TYPE_40__ {int * a_ops; } ;
struct TYPE_36__ {scalar_t__ type; int mft_reference; scalar_t__ lowest_vcn; scalar_t__ name_length; int length; } ;
struct TYPE_35__ {int flags; TYPE_6__ data; scalar_t__ non_resident; } ;
struct TYPE_34__ {int sequence_number; } ;
typedef int NTFS_RECORD ;
typedef TYPE_11__ MFT_RECORD ;
typedef TYPE_12__ ATTR_RECORD ;
typedef TYPE_13__ ATTR_LIST_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_9__*) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (TYPE_9__*) ;
 TYPE_9__* FUNC_8 (struct inode*) ;
 TYPE_8__* FUNC_9 (struct super_block*) ;
 int FUNC_10 (int *) ;
 int VAR_9 ;
 int FUNC_11 (struct buffer_head*) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (TYPE_8__*,TYPE_25__*,char*,unsigned int,int) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (char*,char*,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_10__* FUNC_19 (TYPE_9__*,TYPE_11__*) ;
 int FUNC_20 (scalar_t__,int *,int ,int ,int,int *,int ,TYPE_10__*) ;
 int FUNC_21 (TYPE_10__*) ;
 int FUNC_22 (TYPE_10__*) ;
 scalar_t__ FUNC_23 (TYPE_12__*) ;
 int FUNC_24 (char*,...) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_25 (struct super_block*,char*,...) ;
 int FUNC_26 (TYPE_11__*) ;
 int FUNC_27 (struct inode*) ;
 char* FUNC_28 (unsigned int) ;
 void* FUNC_29 (TYPE_8__*,TYPE_12__*,int *) ;
 int VAR_14 ;
 int FUNC_30 (struct inode*) ;
 int FUNC_31 (struct super_block*,char*) ;
 scalar_t__ FUNC_32 (int *,unsigned int) ;
 struct buffer_head* FUNC_33 (struct super_block*,int ) ;
 int FUNC_34 (scalar_t__) ;
 scalar_t__ FUNC_35 (int) ;

int FUNC_36(struct inode *VAR_15)
{
 VCN VAR_16, VAR_17, VAR_18;
 s64 VAR_19;
 struct super_block *VAR_20 = VAR_15->i_sb;
 ntfs_volume *VAR_21 = FUNC_9(VAR_20);
 struct buffer_head *VAR_22;
 ntfs_inode *VAR_23;
 MFT_RECORD *VAR_24 = ((void*)0);
 ATTR_RECORD *VAR_25;
 ntfs_attr_search_ctx *VAR_26;
 unsigned int VAR_27, VAR_28;
 int VAR_29;

 FUNC_24("Entering.");


 FUNC_27(VAR_15);

 VAR_23 = FUNC_8(VAR_15);


 FUNC_6(VAR_23);
 FUNC_5(VAR_23);
 FUNC_7(VAR_23);
 VAR_23->type = VAR_4;
 VAR_23->name = ((void*)0);
 VAR_23->name_len = 0;




 VAR_23->itype.index.block_size = VAR_21->mft_record_size;
 VAR_23->itype.index.block_size_bits = VAR_21->mft_record_size_bits;


 VAR_21->mft_ino = VAR_15;


 if (VAR_21->mft_record_size > 64 * 1024) {
  FUNC_25(VAR_20, "Unsupported mft record size %i (max 64kiB).",
    VAR_21->mft_record_size);
  goto err_out;
 }
 VAR_27 = VAR_21->mft_record_size;
 if (VAR_27 < VAR_20->s_blocksize)
  VAR_27 = VAR_20->s_blocksize;
 VAR_24 = (MFT_RECORD*)FUNC_28(VAR_27);
 if (!VAR_24) {
  FUNC_25(VAR_20, "Failed to allocate buffer for $MFT record 0.");
  goto err_out;
 }


 VAR_19 = VAR_21->mft_lcn << VAR_21->cluster_size_bits >>
   VAR_20->s_blocksize_bits;
 VAR_28 = VAR_21->mft_record_size >> VAR_20->s_blocksize_bits;
 if (!VAR_28)
  VAR_28 = 1;


 for (VAR_27 = 0; VAR_27 < VAR_28; VAR_27++) {
  VAR_22 = FUNC_33(VAR_20, VAR_19++);
  if (!VAR_22) {
   FUNC_25(VAR_20, "Device read failed.");
   goto err_out;
  }
  FUNC_18((char*)VAR_24 + (VAR_27 << VAR_20->s_blocksize_bits), VAR_22->b_data,
    VAR_20->s_blocksize);
  FUNC_11(VAR_22);
 }


 if (FUNC_32((NTFS_RECORD*)VAR_24, VAR_21->mft_record_size)) {

  FUNC_25(VAR_20, "MST fixup failed. $MFT is corrupt.");
  goto err_out;
 }


 VAR_15->i_generation = VAR_23->seq_no = FUNC_13(VAR_24->sequence_number);


 VAR_15->i_mapping->a_ops = &VAR_14;

 VAR_26 = FUNC_19(VAR_23, VAR_24);
 if (!VAR_26) {
  VAR_29 = -VAR_6;
  goto err_out;
 }


 VAR_29 = FUNC_20(VAR_3, ((void*)0), 0, 0, 0, ((void*)0), 0, VAR_26);
 if (VAR_29) {
  if (FUNC_35(VAR_29 != -VAR_5)) {
   FUNC_25(VAR_20, "Failed to lookup attribute list "
     "attribute. You should run chkdsk.");
   goto put_err_out;
  }
 } else {
  ATTR_LIST_ENTRY *VAR_30, *VAR_31;
  u8 *VAR_32;
  static const char *VAR_33 = "  Not allowed.  $MFT is corrupt.  "
    "You should run chkdsk.";

  FUNC_24("Attribute list attribute found in $MFT.");
  FUNC_3(VAR_23);
  VAR_25 = VAR_26->attr;
  if (VAR_25->flags & VAR_0) {
   FUNC_25(VAR_20, "Attribute list attribute is "
     "compressed.%s", VAR_33);
   goto put_err_out;
  }
  if (VAR_25->flags & VAR_1 ||
    VAR_25->flags & VAR_2) {
   if (VAR_25->non_resident) {
    FUNC_25(VAR_20, "Non-resident attribute list "
      "attribute is encrypted/"
      "sparse.%s", VAR_33);
    goto put_err_out;
   }
   FUNC_31(VAR_20, "Resident attribute list attribute "
     "in $MFT system file is marked "
     "encrypted/sparse which is not true.  "
     "However, Windows allows this and "
     "chkdsk does not detect or correct it "
     "so we will just ignore the invalid "
     "flags and pretend they are not set.");
  }

  VAR_23->attr_list_size = (u32)FUNC_23(VAR_25);
  VAR_23->attr_list = FUNC_28(VAR_23->attr_list_size);
  if (!VAR_23->attr_list) {
   FUNC_25(VAR_20, "Not enough memory to allocate buffer "
     "for attribute list.");
   goto put_err_out;
  }
  if (VAR_25->non_resident) {
   FUNC_4(VAR_23);
   if (VAR_25->data.non_resident.lowest_vcn) {
    FUNC_25(VAR_20, "Attribute list has non zero "
      "lowest_vcn. $MFT is corrupt. "
      "You should run chkdsk.");
    goto put_err_out;
   }

   VAR_23->attr_list_rl.rl = FUNC_29(VAR_21,
     VAR_25, ((void*)0));
   if (FUNC_0(VAR_23->attr_list_rl.rl)) {
    VAR_29 = FUNC_10(VAR_23->attr_list_rl.rl);
    VAR_23->attr_list_rl.rl = ((void*)0);
    FUNC_25(VAR_20, "Mapping pairs decompression "
      "failed with error code %i.",
      -VAR_29);
    goto put_err_out;
   }

   if ((VAR_29 = FUNC_15(VAR_21, &VAR_23->attr_list_rl,
     VAR_23->attr_list, VAR_23->attr_list_size,
     FUNC_34(VAR_25->data.
     non_resident.initialized_size)))) {
    FUNC_25(VAR_20, "Failed to load attribute list "
      "attribute with error code %i.",
      -VAR_29);
    goto put_err_out;
   }
  } else {
   if ((u8*)VAR_25 + FUNC_13(
     VAR_25->data.resident.value_offset) +
     FUNC_14(
     VAR_25->data.resident.value_length) >
     (u8*)VAR_26->mrec + VAR_21->mft_record_size) {
    FUNC_25(VAR_20, "Corrupt attribute list "
      "attribute.");
    goto put_err_out;
   }

   FUNC_18(VAR_23->attr_list, (u8*)VAR_25 + FUNC_13(
     VAR_25->data.resident.value_offset),
     FUNC_14(
     VAR_25->data.resident.value_length));
  }
  VAR_30 = (ATTR_LIST_ENTRY*)VAR_23->attr_list;
  VAR_32 = (u8*)VAR_30 + VAR_23->attr_list_size;
  for (;; VAR_30 = VAR_31) {

   if ((u8*)VAR_30 < VAR_23->attr_list ||
     (u8*)VAR_30 > VAR_32)
    goto em_put_err_out;

   if ((u8*)VAR_30 == VAR_32)
    goto em_put_err_out;
   if (!VAR_30->length)
    goto em_put_err_out;
   if ((u8*)VAR_30 + 6 > VAR_32 || (u8*)VAR_30 +
     FUNC_13(VAR_30->length) > VAR_32)
    goto em_put_err_out;
   VAR_31 = (ATTR_LIST_ENTRY*)((u8*)VAR_30 +
     FUNC_13(VAR_30->length));
   if (FUNC_14(VAR_30->type) > FUNC_14(VAR_4))
    goto em_put_err_out;
   if (VAR_4 != VAR_30->type)
    continue;

   if (VAR_30->name_length)
    goto em_put_err_out;

   if (VAR_30->lowest_vcn)
    goto em_put_err_out;

   if (FUNC_1(VAR_30->mft_reference) != VAR_15->i_ino) {

    FUNC_25(VAR_20, "BUG: The first $DATA extent "
      "of $MFT is not in the base "
      "mft record. Please report "
      "you saw this message to "
      "linux-ntfs-dev@lists."
      "sourceforge.net");
    goto put_err_out;
   } else {

    if (FUNC_2(VAR_30->mft_reference) !=
      VAR_23->seq_no)
     goto em_put_err_out;

    break;
   }
  }
 }

 FUNC_22(VAR_26);


 VAR_25 = ((void*)0);
 VAR_16 = VAR_17 = VAR_18 = 0;
 while (!(VAR_29 = FUNC_20(VAR_4, ((void*)0), 0, 0, VAR_16, ((void*)0), 0,
   VAR_26))) {
  runlist_element *VAR_34;


  VAR_25 = VAR_26->attr;

  if (!VAR_25->non_resident) {
   FUNC_25(VAR_20, "$MFT must be non-resident but a "
     "resident extent was found. $MFT is "
     "corrupt. Run chkdsk.");
   goto put_err_out;
  }

  if (VAR_25->flags & VAR_0 ||
    VAR_25->flags & VAR_1 ||
    VAR_25->flags & VAR_2) {
   FUNC_25(VAR_20, "$MFT must be uncompressed, "
     "non-sparse, and unencrypted but a "
     "compressed/sparse/encrypted extent "
     "was found. $MFT is corrupt. Run "
     "chkdsk.");
   goto put_err_out;
  }






  VAR_34 = FUNC_29(VAR_21, VAR_25, VAR_23->runlist.rl);
  if (FUNC_0(VAR_34)) {
   FUNC_25(VAR_20, "ntfs_mapping_pairs_decompress() "
     "failed with error code %ld.  $MFT is "
     "corrupt.", FUNC_10(VAR_34));
   goto put_err_out;
  }
  VAR_23->runlist.rl = VAR_34;


  if (!VAR_16) {
   if (VAR_25->data.non_resident.lowest_vcn) {
    FUNC_25(VAR_20, "First extent of $DATA "
      "attribute has non zero "
      "lowest_vcn. $MFT is corrupt. "
      "You should run chkdsk.");
    goto put_err_out;
   }

   VAR_17 = FUNC_34(
     VAR_25->data.non_resident.allocated_size)
     >> VAR_21->cluster_size_bits;

   VAR_15->i_size = FUNC_34(
     VAR_25->data.non_resident.data_size);
   VAR_23->initialized_size = FUNC_34(
     VAR_25->data.non_resident.initialized_size);
   VAR_23->allocated_size = FUNC_34(
     VAR_25->data.non_resident.allocated_size);




   if ((VAR_15->i_size >> VAR_21->mft_record_size_bits) >=
     (1ULL << 32)) {
    FUNC_25(VAR_20, "$MFT is too big! Aborting.");
    goto put_err_out;
   }
   FUNC_30(VAR_15);
   if (FUNC_12(VAR_15)) {
    FUNC_25(VAR_20, "ntfs_read_inode() of $MFT "
      "failed. BUG or corrupt $MFT. "
      "Run chkdsk and if no errors "
      "are found, please report you "
      "saw this message to "
      "linux-ntfs-dev@lists."
      "sourceforge.net");
    FUNC_21(VAR_26);

    FUNC_26(VAR_24);
    return -1;
   }





   VAR_15->i_uid = VAR_8;
   VAR_15->i_gid = VAR_7;

   VAR_15->i_mode = VAR_9;

   VAR_15->i_op = &VAR_13;
   VAR_15->i_fop = &VAR_12;
  }


  VAR_18 = FUNC_34(VAR_25->data.non_resident.highest_vcn);
  VAR_16 = VAR_18 + 1;


  if (VAR_16 <= 0)
   break;


  if (VAR_16 < FUNC_34(
    VAR_25->data.non_resident.lowest_vcn)) {
   FUNC_25(VAR_20, "$MFT has corrupt attribute list "
     "attribute. Run chkdsk.");
   goto put_err_out;
  }
 }
 if (VAR_29 != -VAR_5) {
  FUNC_25(VAR_20, "Failed to lookup $MFT/$DATA attribute extent. "
    "$MFT is corrupt. Run chkdsk.");
  goto put_err_out;
 }
 if (!VAR_25) {
  FUNC_25(VAR_20, "$MFT/$DATA attribute not found. $MFT is "
    "corrupt. Run chkdsk.");
  goto put_err_out;
 }
 if (VAR_18 && VAR_18 != VAR_17 - 1) {
  FUNC_25(VAR_20, "Failed to load the complete runlist for "
    "$MFT/$DATA. Driver bug or corrupt $MFT. "
    "Run chkdsk.");
  FUNC_24("highest_vcn = 0x%llx, last_vcn - 1 = 0x%llx",
    (unsigned long long)VAR_18,
    (unsigned long long)VAR_17 - 1);
  goto put_err_out;
 }
 FUNC_21(VAR_26);
 FUNC_24("Done.");
 FUNC_26(VAR_24);





 FUNC_16(&VAR_23->runlist.lock, &VAR_11);
 FUNC_16(&VAR_23->mrec_lock, &VAR_10);

 return 0;

em_put_err_out:
 FUNC_25(VAR_20, "Couldn't find first extent of $DATA attribute in "
   "attribute list. $MFT is corrupt. Run chkdsk.");
put_err_out:
 FUNC_21(VAR_26);
err_out:
 FUNC_25(VAR_20, "Failed. Marking inode as bad.");
 FUNC_17(VAR_15);
 FUNC_26(VAR_24);
 return -1;
}
