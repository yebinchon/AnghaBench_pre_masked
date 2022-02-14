
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


struct inode {int i_mode; int i_size; int i_blocks; int i_ino; TYPE_4__* i_mapping; int i_sb; int i_generation; int i_atime; int i_ctime; int i_mtime; int i_nlink; int i_gid; int i_uid; } ;
struct TYPE_37__ {int cluster_size; unsigned int cluster_size_bits; int sb; } ;
typedef TYPE_8__ ntfs_volume ;
struct TYPE_36__ {TYPE_9__* base_ntfs_ino; } ;
struct TYPE_34__ {unsigned int block_size; unsigned int block_clusters; int size; scalar_t__ block_size_bits; } ;
struct TYPE_35__ {TYPE_5__ compressed; } ;
struct TYPE_38__ {scalar_t__ type; int initialized_size; int allocated_size; int nr_extents; scalar_t__ name_len; TYPE_7__ ext; TYPE_6__ itype; int name; int seq_no; } ;
typedef TYPE_9__ ntfs_inode ;
struct TYPE_28__ {TYPE_11__* attr; } ;
typedef TYPE_10__ ntfs_attr_search_ctx ;
struct TYPE_33__ {int * a_ops; } ;
struct TYPE_31__ {int compression_unit; int allocated_size; int initialized_size; int data_size; scalar_t__ lowest_vcn; int compressed_size; int mapping_pairs_offset; } ;
struct TYPE_30__ {int value_offset; int value_length; } ;
struct TYPE_32__ {TYPE_2__ non_resident; TYPE_1__ resident; } ;
struct TYPE_29__ {int flags; TYPE_3__ data; int name_offset; scalar_t__ name_length; int length; int non_resident; } ;
typedef int MFT_RECORD ;
typedef TYPE_11__ ATTR_RECORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_9__*) ;
 scalar_t__ FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_9__*) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_9__*) ;
 scalar_t__ FUNC_7 (TYPE_9__*) ;
 TYPE_9__* FUNC_8 (struct inode*) ;
 TYPE_8__* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_8__*) ;
 int FUNC_11 (int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_12 (unsigned int) ;
 int FUNC_13 (struct inode*) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (struct inode*) ;
 int * FUNC_17 (TYPE_9__*) ;
 TYPE_10__* FUNC_18 (TYPE_9__*,int *) ;
 int FUNC_19 (scalar_t__,int ,scalar_t__,int ,int ,int *,int ,TYPE_10__*) ;
 int FUNC_20 (TYPE_10__*) ;
 int VAR_11 ;
 int FUNC_21 (char*,...) ;
 int FUNC_22 (int ,char*,...) ;
 int FUNC_23 (struct inode*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_24 (struct inode*,int ) ;
 void* FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int) ;
 int FUNC_27 (TYPE_9__*) ;

__attribute__((used)) static int FUNC_28(struct inode *VAR_14, struct inode *VAR_15)
{
 ntfs_volume *VAR_16 = FUNC_9(VAR_15->i_sb);
 ntfs_inode *VAR_17, *VAR_18;
 MFT_RECORD *VAR_19;
 ATTR_RECORD *VAR_20;
 ntfs_attr_search_ctx *VAR_21;
 int VAR_22 = 0;

 FUNC_21("Entering for i_ino 0x%lx.", VAR_15->i_ino);

 FUNC_23(VAR_15);

 VAR_17 = FUNC_8(VAR_15);
 VAR_18 = FUNC_8(VAR_14);


 VAR_15->i_uid = VAR_14->i_uid;
 VAR_15->i_gid = VAR_14->i_gid;
 FUNC_24(VAR_15, VAR_14->i_nlink);
 VAR_15->i_mtime = VAR_14->i_mtime;
 VAR_15->i_ctime = VAR_14->i_ctime;
 VAR_15->i_atime = VAR_14->i_atime;
 VAR_15->i_generation = VAR_17->seq_no = VAR_18->seq_no;


 VAR_15->i_mode = VAR_14->i_mode & ~VAR_10;

 VAR_19 = FUNC_17(VAR_18);
 if (FUNC_0(VAR_19)) {
  VAR_22 = FUNC_11(VAR_19);
  goto err_out;
 }
 VAR_21 = FUNC_18(VAR_18, VAR_19);
 if (!VAR_21) {
  VAR_22 = -VAR_8;
  goto unm_err_out;
 }

 VAR_22 = FUNC_19(VAR_17->type, VAR_17->name, VAR_17->name_len,
   VAR_6, 0, ((void*)0), 0, VAR_21);
 if (FUNC_26(VAR_22))
  goto unm_err_out;
 VAR_20 = VAR_21->attr;
 if (VAR_20->flags & (VAR_0 | VAR_3)) {
  if (VAR_20->flags & VAR_0) {
   FUNC_3(VAR_17);
   if ((VAR_17->type != VAR_4) || (VAR_17->type == VAR_4 &&
     VAR_17->name_len)) {
    FUNC_22(VAR_15->i_sb, "Found compressed "
      "non-data or named data "
      "attribute.  Please report "
      "you saw this message to "
      "linux-ntfs-dev@lists."
      "sourceforge.net");
    goto unm_err_out;
   }
   if (VAR_16->cluster_size > 4096) {
    FUNC_22(VAR_15->i_sb, "Found compressed "
      "attribute but compression is "
      "disabled due to cluster size "
      "(%i) > 4kiB.",
      VAR_16->cluster_size);
    goto unm_err_out;
   }
   if ((VAR_20->flags & VAR_0) !=
     VAR_1) {
    FUNC_22(VAR_15->i_sb, "Found unknown "
      "compression method.");
    goto unm_err_out;
   }
  }




  if (FUNC_2(VAR_17) && VAR_17->type != VAR_5) {
   FUNC_22(VAR_15->i_sb, "Found mst protected attribute "
     "but the attribute is %s.  Please "
     "report you saw this message to "
     "linux-ntfs-dev@lists.sourceforge.net",
     FUNC_1(VAR_17) ? "compressed" :
     "sparse");
   goto unm_err_out;
  }
  if (VAR_20->flags & VAR_3)
   FUNC_6(VAR_17);
 }
 if (VAR_20->flags & VAR_2) {
  if (FUNC_1(VAR_17)) {
   FUNC_22(VAR_15->i_sb, "Found encrypted and compressed "
     "data.");
   goto unm_err_out;
  }




  if (FUNC_2(VAR_17) && VAR_17->type != VAR_5) {
   FUNC_22(VAR_15->i_sb, "Found mst protected attribute "
     "but the attribute is encrypted.  "
     "Please report you saw this message "
     "to linux-ntfs-dev@lists.sourceforge."
     "net");
   goto unm_err_out;
  }
  if (VAR_17->type != VAR_4) {
   FUNC_22(VAR_15->i_sb, "Found encrypted non-data "
     "attribute.");
   goto unm_err_out;
  }
  FUNC_4(VAR_17);
 }
 if (!VAR_20->non_resident) {

  if (FUNC_26(VAR_20->name_length && (FUNC_14(VAR_20->name_offset) >=
    FUNC_14(VAR_20->data.resident.value_offset)))) {
   FUNC_22(VAR_16->sb, "Attribute name is placed after "
     "the attribute value.");
   goto unm_err_out;
  }
  if (FUNC_2(VAR_17)) {
   FUNC_22(VAR_15->i_sb, "Found mst protected attribute "
     "but the attribute is resident.  "
     "Please report you saw this message to "
     "linux-ntfs-dev@lists.sourceforge.net");
   goto unm_err_out;
  }
  VAR_15->i_size = VAR_17->initialized_size = FUNC_15(
    VAR_20->data.resident.value_length);
  VAR_17->allocated_size = FUNC_15(VAR_20->length) -
    FUNC_14(VAR_20->data.resident.value_offset);
  if (VAR_15->i_size > VAR_17->allocated_size) {
   FUNC_22(VAR_15->i_sb, "Resident attribute is corrupt "
     "(size exceeds allocation).");
   goto unm_err_out;
  }
 } else {
  FUNC_5(VAR_17);




  if (FUNC_26(VAR_20->name_length && (FUNC_14(VAR_20->name_offset) >=
    FUNC_14(
    VAR_20->data.non_resident.mapping_pairs_offset)))) {
   FUNC_22(VAR_16->sb, "Attribute name is placed after "
     "the mapping pairs array.");
   goto unm_err_out;
  }
  if (FUNC_1(VAR_17) || FUNC_7(VAR_17)) {
   if (FUNC_1(VAR_17) && VAR_20->data.non_resident.
     compression_unit != 4) {
    FUNC_22(VAR_15->i_sb, "Found non-standard "
      "compression unit (%u instead "
      "of 4).  Cannot handle this.",
      VAR_20->data.non_resident.
      compression_unit);
    VAR_22 = -VAR_9;
    goto unm_err_out;
   }
   if (VAR_20->data.non_resident.compression_unit) {
    VAR_17->itype.compressed.block_size = 1U <<
      (VAR_20->data.non_resident.
      compression_unit +
      VAR_16->cluster_size_bits);
    VAR_17->itype.compressed.block_size_bits =
      FUNC_12(VAR_17->itype.compressed.
      block_size) - 1;
    VAR_17->itype.compressed.block_clusters = 1U <<
      VAR_20->data.non_resident.
      compression_unit;
   } else {
    VAR_17->itype.compressed.block_size = 0;
    VAR_17->itype.compressed.block_size_bits = 0;
    VAR_17->itype.compressed.block_clusters = 0;
   }
   VAR_17->itype.compressed.size = FUNC_25(
     VAR_20->data.non_resident.compressed_size);
  }
  if (VAR_20->data.non_resident.lowest_vcn) {
   FUNC_22(VAR_15->i_sb, "First extent of attribute has "
     "non-zero lowest_vcn.");
   goto unm_err_out;
  }
  VAR_15->i_size = FUNC_25(VAR_20->data.non_resident.data_size);
  VAR_17->initialized_size = FUNC_25(
    VAR_20->data.non_resident.initialized_size);
  VAR_17->allocated_size = FUNC_25(
    VAR_20->data.non_resident.allocated_size);
 }
 VAR_15->i_mapping->a_ops = &VAR_13;
 if (FUNC_2(VAR_17))
  VAR_15->i_mapping->a_ops = &VAR_12;
 else if (FUNC_1(VAR_17))
  VAR_15->i_mapping->a_ops = &VAR_11;
 if ((FUNC_1(VAR_17) || FUNC_7(VAR_17)) && VAR_17->type != VAR_5)
  VAR_15->i_blocks = VAR_17->itype.compressed.size >> 9;
 else
  VAR_15->i_blocks = VAR_17->allocated_size >> 9;




 FUNC_13(VAR_14);
 VAR_17->ext.base_ntfs_ino = VAR_18;
 VAR_17->nr_extents = -1;

 FUNC_20(VAR_21);
 FUNC_27(VAR_18);

 FUNC_21("Done.");
 return 0;

unm_err_out:
 if (!VAR_22)
  VAR_22 = -VAR_7;
 if (VAR_21)
  FUNC_20(VAR_21);
 FUNC_27(VAR_18);
err_out:
 FUNC_22(VAR_16->sb, "Failed with error code %i while reading attribute "
   "inode (mft_no 0x%lx, type 0x%x, name_len %i).  "
   "Marking corrupt inode and base inode 0x%lx as bad.  "
   "Run chkdsk.", VAR_22, VAR_15->i_ino, VAR_17->type, VAR_17->name_len,
   VAR_14->i_ino);
 FUNC_16(VAR_15);
 if (VAR_22 != -VAR_8)
  FUNC_10(VAR_16);
 return VAR_22;
}
