
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_9__ ;
typedef struct TYPE_46__ TYPE_8__ ;
typedef struct TYPE_45__ TYPE_7__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_26__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_17__ ;
typedef struct TYPE_36__ TYPE_16__ ;
typedef struct TYPE_35__ TYPE_15__ ;
typedef struct TYPE_34__ TYPE_14__ ;
typedef struct TYPE_33__ TYPE_13__ ;
typedef struct TYPE_32__ TYPE_12__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int sle64 ;
struct TYPE_31__ {int cluster_size_bits; struct super_block* sb; } ;
typedef TYPE_11__ ntfs_volume ;
struct TYPE_46__ {int vcn_size_bits; int block_size; int collation_rule; } ;
struct TYPE_47__ {TYPE_8__ index; } ;
struct TYPE_38__ {TYPE_12__* base_ntfs_ino; } ;
struct TYPE_32__ {scalar_t__ type; int nr_extents; int mft_no; TYPE_9__ itype; int name_len; int name; TYPE_1__ ext; TYPE_11__* vol; } ;
typedef TYPE_12__ ntfs_inode ;
struct TYPE_33__ {int is_in_root; int data_len; struct page* page; TYPE_17__* ia; TYPE_12__* base_ni; TYPE_14__* actx; int * data; TYPE_16__* entry; TYPE_15__* ir; TYPE_12__* idx_ni; } ;
typedef TYPE_13__ ntfs_index_context ;
struct TYPE_34__ {scalar_t__ mrec; TYPE_4__* attr; } ;
typedef TYPE_14__ ntfs_attr_search_ctx ;
typedef int VCN ;
struct TYPE_44__ {int data_length; int data_offset; } ;
struct TYPE_45__ {TYPE_6__ vi; } ;
struct TYPE_43__ {int entries_offset; int index_length; } ;
struct TYPE_40__ {int value_offset; } ;
struct TYPE_41__ {TYPE_2__ resident; } ;
struct TYPE_42__ {TYPE_3__ data; } ;
struct TYPE_39__ {struct address_space* i_mapping; } ;
struct TYPE_30__ {int flags; int entries_offset; int index_length; int allocated_size; } ;
struct TYPE_37__ {TYPE_10__ index; int index_block_vcn; int magic; } ;
struct TYPE_36__ {int flags; int length; int key_length; int key; TYPE_7__ data; } ;
struct TYPE_35__ {TYPE_5__ index; } ;
typedef struct page MFT_RECORD ;
typedef TYPE_15__ INDEX_ROOT ;
typedef int INDEX_ENTRY_HEADER ;
typedef TYPE_16__ INDEX_ENTRY ;
typedef TYPE_17__ INDEX_ALLOCATION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_9 ;
 int FUNC_2 (TYPE_12__*) ;
 int FUNC_3 (TYPE_12__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct page*) ;
 TYPE_26__* FUNC_5 (TYPE_12__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct page*) ;
 struct page* FUNC_9 (TYPE_12__*) ;
 int FUNC_10 (void const*,int *,int const) ;
 TYPE_14__* FUNC_11 (TYPE_12__*,struct page*) ;
 int FUNC_12 (int ,int ,int ,int ,int ,int *,int ,TYPE_14__*) ;
 int FUNC_13 (TYPE_14__*) ;
 int FUNC_14 (TYPE_11__*,int ,void const*,int const,int *,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (struct super_block*,char*,...) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 struct page* FUNC_19 (struct address_space*,int) ;
 int FUNC_20 (struct page*) ;
 scalar_t__ FUNC_21 (struct page*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int) ;
 int FUNC_25 (struct page*) ;
 int FUNC_26 (TYPE_12__*) ;

int FUNC_27(const void *VAR_14, const int VAR_15,
  ntfs_index_context *VAR_16)
{
 VCN VAR_17, VAR_18;
 ntfs_inode *VAR_19 = VAR_16->idx_ni;
 ntfs_volume *VAR_20 = VAR_19->vol;
 struct super_block *VAR_21 = VAR_20->sb;
 ntfs_inode *VAR_22 = VAR_19->ext.base_ntfs_ino;
 MFT_RECORD *VAR_23;
 INDEX_ROOT *VAR_24;
 INDEX_ENTRY *VAR_25;
 INDEX_ALLOCATION *VAR_26;
 u8 *VAR_27, *VAR_28;
 ntfs_attr_search_ctx *VAR_29;
 struct address_space *VAR_30;
 struct page *VAR_31;
 int VAR_32, VAR_33 = 0;

 FUNC_15("Entering.");
 FUNC_0(!FUNC_2(VAR_19));
 FUNC_0(VAR_19->type != VAR_0);
 FUNC_0(VAR_19->nr_extents != -1);
 FUNC_0(!VAR_22);
 FUNC_0(!VAR_14);
 FUNC_0(VAR_15 <= 0);
 if (!FUNC_17(
   VAR_19->itype.index.collation_rule)) {
  FUNC_16(VAR_21, "Index uses unsupported collation rule 0x%x.  "
    "Aborting lookup.", FUNC_7(
    VAR_19->itype.index.collation_rule));
  return -VAR_6;
 }

 VAR_23 = FUNC_9(VAR_22);
 if (FUNC_1(VAR_23)) {
  FUNC_16(VAR_21, "map_mft_record() failed with error code %ld.",
    -FUNC_4(VAR_23));
  return FUNC_4(VAR_23);
 }
 VAR_29 = FUNC_11(VAR_22, VAR_23);
 if (FUNC_24(!VAR_29)) {
  VAR_33 = -VAR_5;
  goto err_out;
 }

 VAR_33 = FUNC_12(VAR_1, VAR_19->name, VAR_19->name_len,
   VAR_2, 0, ((void*)0), 0, VAR_29);
 if (FUNC_24(VAR_33)) {
  if (VAR_33 == -VAR_4) {
   FUNC_16(VAR_21, "Index root attribute missing in inode "
     "0x%lx.", VAR_19->mft_no);
   VAR_33 = -VAR_3;
  }
  goto err_out;
 }

 VAR_24 = (INDEX_ROOT*)((u8*)VAR_29->attr +
   FUNC_6(VAR_29->attr->data.resident.value_offset));
 VAR_27 = (u8*)&VAR_24->index + FUNC_7(VAR_24->index.index_length);

 VAR_25 = (INDEX_ENTRY*)((u8*)&VAR_24->index +
   FUNC_7(VAR_24->index.entries_offset));




 for (;; VAR_25 = (INDEX_ENTRY*)((u8*)VAR_25 + FUNC_6(VAR_25->length))) {

  if ((u8*)VAR_25 < (u8*)VAR_29->mrec || (u8*)VAR_25 +
    sizeof(INDEX_ENTRY_HEADER) > VAR_27 ||
    (u8*)VAR_25 + FUNC_6(VAR_25->length) > VAR_27)
   goto idx_err_out;




  if (VAR_25->flags & VAR_7)
   break;

  if ((u32)sizeof(INDEX_ENTRY_HEADER) +
    FUNC_6(VAR_25->key_length) >
    FUNC_6(VAR_25->data.vi.data_offset) ||
    (u32)FUNC_6(VAR_25->data.vi.data_offset) +
    FUNC_6(VAR_25->data.vi.data_length) >
    FUNC_6(VAR_25->length))
   goto idx_err_out;

  if ((VAR_15 == FUNC_6(VAR_25->key_length)) && !FUNC_10(VAR_14,
    &VAR_25->key, VAR_15)) {
ir_done:
   VAR_16->is_in_root = 1;
   VAR_16->ir = VAR_24;
   VAR_16->actx = VAR_29;
   VAR_16->base_ni = VAR_22;
   VAR_16->ia = ((void*)0);
   VAR_16->page = ((void*)0);
done:
   VAR_16->entry = VAR_25;
   VAR_16->data = (u8*)VAR_25 +
     FUNC_6(VAR_25->data.vi.data_offset);
   VAR_16->data_len = FUNC_6(VAR_25->data.vi.data_length);
   FUNC_15("Done.");
   return VAR_33;
  }




  VAR_32 = FUNC_14(VAR_20, VAR_19->itype.index.collation_rule, VAR_14,
    VAR_15, &VAR_25->key, FUNC_6(VAR_25->key_length));





  if (VAR_32 == -1)
   break;




  if (!VAR_32)
   goto ir_done;

 }





 if (!(VAR_25->flags & VAR_8)) {
  FUNC_15("Entry not found.");
  VAR_33 = -VAR_4;
  goto ir_done;
 }

 if (!FUNC_3(VAR_19)) {
  FUNC_16(VAR_21, "No index allocation attribute but index entry "
    "requires one.  Inode 0x%lx is corrupt or "
    "driver bug.", VAR_19->mft_no);
  goto err_out;
 }

 VAR_17 = FUNC_23((sle64*)((u8*)VAR_25 + FUNC_6(VAR_25->length) - 8));
 VAR_30 = FUNC_5(VAR_19)->i_mapping;




 FUNC_13(VAR_29);
 FUNC_26(VAR_22);
 VAR_23 = ((void*)0);
 VAR_29 = ((void*)0);
descend_into_child_node:





 VAR_31 = FUNC_19(VAR_30, VAR_17 <<
   VAR_19->itype.index.vcn_size_bits >> VAR_12);
 if (FUNC_1(VAR_31)) {
  FUNC_16(VAR_21, "Failed to map index page, error %ld.",
    -FUNC_4(VAR_31));
  VAR_33 = FUNC_4(VAR_31);
  goto err_out;
 }
 FUNC_8(VAR_31);
 VAR_28 = (u8*)FUNC_21(VAR_31);
fast_descend_into_child_node:

 VAR_26 = (INDEX_ALLOCATION*)(VAR_28 + ((VAR_17 <<
   VAR_19->itype.index.vcn_size_bits) & ~VAR_11));

 if ((u8*)VAR_26 < VAR_28 || (u8*)VAR_26 > VAR_28 + VAR_13) {
  FUNC_16(VAR_21, "Out of bounds check failed.  Corrupt inode "
    "0x%lx or driver bug.", VAR_19->mft_no);
  goto unm_err_out;
 }

 if (FUNC_24(!FUNC_18(VAR_26->magic))) {
  FUNC_16(VAR_21, "Index record with vcn 0x%llx is corrupt.  "
    "Corrupt inode 0x%lx.  Run chkdsk.",
    (long long)VAR_17, VAR_19->mft_no);
  goto unm_err_out;
 }
 if (FUNC_22(VAR_26->index_block_vcn) != VAR_17) {
  FUNC_16(VAR_21, "Actual VCN (0x%llx) of index buffer is "
    "different from expected VCN (0x%llx).  Inode "
    "0x%lx is corrupt or driver bug.",
    (unsigned long long)
    FUNC_22(VAR_26->index_block_vcn),
    (unsigned long long)VAR_17, VAR_19->mft_no);
  goto unm_err_out;
 }
 if (FUNC_7(VAR_26->index.allocated_size) + 0x18 !=
   VAR_19->itype.index.block_size) {
  FUNC_16(VAR_21, "Index buffer (VCN 0x%llx) of inode 0x%lx has "
    "a size (%u) differing from the index "
    "specified size (%u).  Inode is corrupt or "
    "driver bug.", (unsigned long long)VAR_17,
    VAR_19->mft_no,
    FUNC_7(VAR_26->index.allocated_size) + 0x18,
    VAR_19->itype.index.block_size);
  goto unm_err_out;
 }
 VAR_27 = (u8*)VAR_26 + VAR_19->itype.index.block_size;
 if (VAR_27 > VAR_28 + VAR_13) {
  FUNC_16(VAR_21, "Index buffer (VCN 0x%llx) of inode 0x%lx "
    "crosses page boundary.  Impossible!  Cannot "
    "access!  This is probably a bug in the "
    "driver.", (unsigned long long)VAR_17,
    VAR_19->mft_no);
  goto unm_err_out;
 }
 VAR_27 = (u8*)&VAR_26->index + FUNC_7(VAR_26->index.index_length);
 if (VAR_27 > (u8*)VAR_26 + VAR_19->itype.index.block_size) {
  FUNC_16(VAR_21, "Size of index buffer (VCN 0x%llx) of inode "
    "0x%lx exceeds maximum size.",
    (unsigned long long)VAR_17, VAR_19->mft_no);
  goto unm_err_out;
 }

 VAR_25 = (INDEX_ENTRY*)((u8*)&VAR_26->index +
   FUNC_7(VAR_26->index.entries_offset));





 for (;; VAR_25 = (INDEX_ENTRY*)((u8*)VAR_25 + FUNC_6(VAR_25->length))) {

  if ((u8*)VAR_25 < (u8*)VAR_26 || (u8*)VAR_25 +
    sizeof(INDEX_ENTRY_HEADER) > VAR_27 ||
    (u8*)VAR_25 + FUNC_6(VAR_25->length) > VAR_27) {
   FUNC_16(VAR_21, "Index entry out of bounds in inode "
     "0x%lx.", VAR_19->mft_no);
   goto unm_err_out;
  }




  if (VAR_25->flags & VAR_7)
   break;

  if ((u32)sizeof(INDEX_ENTRY_HEADER) +
    FUNC_6(VAR_25->key_length) >
    FUNC_6(VAR_25->data.vi.data_offset) ||
    (u32)FUNC_6(VAR_25->data.vi.data_offset) +
    FUNC_6(VAR_25->data.vi.data_length) >
    FUNC_6(VAR_25->length)) {
   FUNC_16(VAR_21, "Index entry out of bounds in inode "
     "0x%lx.", VAR_19->mft_no);
   goto unm_err_out;
  }

  if ((VAR_15 == FUNC_6(VAR_25->key_length)) && !FUNC_10(VAR_14,
    &VAR_25->key, VAR_15)) {
ia_done:
   VAR_16->is_in_root = 0;
   VAR_16->actx = ((void*)0);
   VAR_16->base_ni = ((void*)0);
   VAR_16->ia = VAR_26;
   VAR_16->page = VAR_31;
   goto done;
  }




  VAR_32 = FUNC_14(VAR_20, VAR_19->itype.index.collation_rule, VAR_14,
    VAR_15, &VAR_25->key, FUNC_6(VAR_25->key_length));





  if (VAR_32 == -1)
   break;




  if (!VAR_32)
   goto ia_done;

 }




 if (!(VAR_25->flags & VAR_8)) {
  FUNC_15("Entry not found.");
  VAR_33 = -VAR_4;
  goto ia_done;
 }
 if ((VAR_26->index.flags & VAR_10) == VAR_9) {
  FUNC_16(VAR_21, "Index entry with child node found in a leaf "
    "node in inode 0x%lx.", VAR_19->mft_no);
  goto unm_err_out;
 }

 VAR_18 = VAR_17;
 VAR_17 = FUNC_23((sle64*)((u8*)VAR_25 + FUNC_6(VAR_25->length) - 8));
 if (VAR_17 >= 0) {




  if (VAR_18 << VAR_20->cluster_size_bits >>
    VAR_12 == VAR_17 <<
    VAR_20->cluster_size_bits >>
    VAR_12)
   goto fast_descend_into_child_node;
  FUNC_25(VAR_31);
  FUNC_20(VAR_31);
  goto descend_into_child_node;
 }
 FUNC_16(VAR_21, "Negative child node vcn in inode 0x%lx.",
   VAR_19->mft_no);
unm_err_out:
 FUNC_25(VAR_31);
 FUNC_20(VAR_31);
err_out:
 if (!VAR_33)
  VAR_33 = -VAR_3;
 if (VAR_29)
  FUNC_13(VAR_29);
 if (VAR_23)
  FUNC_26(VAR_22);
 return VAR_33;
idx_err_out:
 FUNC_16(VAR_21, "Corrupt index.  Aborting lookup.");
 goto err_out;
}
