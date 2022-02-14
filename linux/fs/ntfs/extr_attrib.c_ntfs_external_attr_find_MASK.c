
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_12__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int const ntfschar ;
struct TYPE_21__ {int sb; int upcase_len; int upcase; } ;
typedef TYPE_3__ ntfs_volume ;
struct TYPE_22__ {scalar_t__ mft_no; int attr_list_size; scalar_t__ seq_no; int * attr_list; TYPE_3__* vol; } ;
typedef TYPE_4__ ntfs_inode ;
struct TYPE_23__ {int is_first; TYPE_6__* base_attr; TYPE_12__* base_mrec; TYPE_4__* base_ntfs_ino; TYPE_4__* ntfs_ino; TYPE_12__* mrec; TYPE_6__* attr; TYPE_7__* al_entry; } ;
typedef TYPE_5__ ntfs_attr_search_ctx ;
typedef scalar_t__ VCN ;
struct TYPE_25__ {scalar_t__ const type; scalar_t__ name_length; int name_offset; scalar_t__ instance; int mft_reference; int lowest_vcn; int length; } ;
struct TYPE_19__ {scalar_t__ const value_length; int value_offset; } ;
struct TYPE_20__ {TYPE_1__ resident; } ;
struct TYPE_24__ {scalar_t__ const type; scalar_t__ const length; scalar_t__ instance; scalar_t__ name_length; TYPE_2__ data; int non_resident; int name_offset; } ;
struct TYPE_18__ {scalar_t__ const bytes_allocated; int attrs_offset; } ;
typedef int IGNORE_CASE_BOOL ;
typedef scalar_t__ ATTR_TYPE ;
typedef TYPE_6__ ATTR_RECORD ;
typedef TYPE_7__ ATTR_LIST_ENTRY ;


 scalar_t__ const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_12__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_12__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__ const) ;
 int FUNC_7 (int ) ;
 TYPE_12__* FUNC_8 (TYPE_4__*,int ,TYPE_4__**) ;
 int FUNC_9 (int *,int const*,scalar_t__ const) ;
 scalar_t__ FUNC_10 (int const*,scalar_t__,int const*,scalar_t__ const,int const,int ,int ) ;
 int FUNC_11 (scalar_t__ const,int const*,scalar_t__ const,int const,int const*,scalar_t__ const,TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (int const*,scalar_t__ const,int const*,scalar_t__,int,int const,int ,int ) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (int ,char*,scalar_t__,char const*,...) ;
 scalar_t__ const FUNC_16 (int ) ;
 int FUNC_17 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_18(const ATTR_TYPE VAR_6,
  const ntfschar *VAR_7, const u32 VAR_8,
  const IGNORE_CASE_BOOL VAR_9, const VCN VAR_10,
  const u8 *VAR_11, const u32 VAR_12, ntfs_attr_search_ctx *VAR_13)
{
 ntfs_inode *VAR_14, *VAR_15;
 ntfs_volume *VAR_16;
 ATTR_LIST_ENTRY *VAR_17, *VAR_18;
 u8 *VAR_19, *VAR_20;
 ATTR_RECORD *VAR_21;
 ntfschar *VAR_22;
 u32 VAR_23;
 int VAR_24 = 0;
 static const char *VAR_25 = " Unmount and run chkdsk.";

 VAR_15 = VAR_13->ntfs_ino;
 VAR_14 = VAR_13->base_ntfs_ino;
 FUNC_14("Entering for inode 0x%lx, type 0x%x.", VAR_15->mft_no, VAR_6);
 if (!VAR_14) {

  VAR_14 = VAR_13->base_ntfs_ino = VAR_13->ntfs_ino;
  VAR_13->base_mrec = VAR_13->mrec;
 }
 if (VAR_15 == VAR_14)
  VAR_13->base_attr = VAR_13->attr;
 if (VAR_6 == VAR_0)
  goto not_found;
 VAR_16 = VAR_14->vol;
 VAR_19 = VAR_14->attr_list;
 VAR_20 = VAR_19 + VAR_14->attr_list_size;
 if (!VAR_13->al_entry)
  VAR_13->al_entry = (ATTR_LIST_ENTRY*)VAR_19;




 if (VAR_13->is_first) {
  VAR_17 = VAR_13->al_entry;
  VAR_13->is_first = 0;
 } else
  VAR_17 = (ATTR_LIST_ENTRY*)((u8*)VAR_13->al_entry +
    FUNC_5(VAR_13->al_entry->length));
 for (;; VAR_17 = VAR_18) {

  if ((u8*)VAR_17 < VAR_14->attr_list ||
    (u8*)VAR_17 > VAR_20)
   break;
  VAR_13->al_entry = VAR_17;

  if ((u8*)VAR_17 == VAR_20)
   goto not_found;
  if (!VAR_17->length)
   break;
  if ((u8*)VAR_17 + 6 > VAR_20 || (u8*)VAR_17 +
    FUNC_5(VAR_17->length) > VAR_20)
   break;
  VAR_18 = (ATTR_LIST_ENTRY*)((u8*)VAR_17 +
    FUNC_5(VAR_17->length));
  if (FUNC_6(VAR_17->type) > FUNC_6(VAR_6))
   goto not_found;
  if (VAR_6 != VAR_17->type)
   continue;




  VAR_23 = VAR_17->name_length;
  VAR_22 = (ntfschar*)((u8*)VAR_17 + VAR_17->name_offset);
  if (!VAR_7) {
   if (VAR_23)
    goto not_found;
  } else if (!FUNC_10(VAR_22, VAR_23, VAR_7,
    VAR_8, VAR_9, VAR_16->upcase, VAR_16->upcase_len)) {
   register int VAR_26;

   VAR_26 = FUNC_13(VAR_7, VAR_8, VAR_22,
     VAR_23, 1, VAR_5,
     VAR_16->upcase, VAR_16->upcase_len);




   if (VAR_26 == -1)
    goto not_found;

   if (VAR_26)
    continue;
   VAR_26 = FUNC_13(VAR_7, VAR_8, VAR_22,
     VAR_23, 1, VAR_1,
     VAR_16->upcase, VAR_16->upcase_len);
   if (VAR_26 == -1)
    goto not_found;
   if (VAR_26)
    continue;
  }






  if (VAR_10 && (u8*)VAR_18 >= VAR_19 &&
    (u8*)VAR_18 + 6 < VAR_20 &&
    (u8*)VAR_18 + FUNC_5(
     VAR_18->length) <= VAR_20 &&
    FUNC_16(VAR_18->lowest_vcn) <=
     VAR_10 &&
    VAR_18->type == VAR_17->type &&
    VAR_18->name_length == VAR_23 &&
    FUNC_10((ntfschar*)((u8*)
     VAR_18 +
     VAR_18->name_offset),
     VAR_18->name_length,
     VAR_22, VAR_23, VAR_1,
     VAR_16->upcase, VAR_16->upcase_len))
   continue;
  if (FUNC_1(VAR_17->mft_reference) == VAR_15->mft_no) {
   if (FUNC_2(VAR_17->mft_reference) != VAR_15->seq_no) {
    FUNC_15(VAR_16->sb, "Found stale mft "
      "reference in attribute list "
      "of base inode 0x%lx.%s",
      VAR_14->mft_no, VAR_25);
    VAR_24 = -VAR_2;
    break;
   }
  } else {

   if (VAR_15 != VAR_14)
    FUNC_17(VAR_15);

   if (FUNC_1(VAR_17->mft_reference) ==
     VAR_14->mft_no) {
    VAR_15 = VAR_13->ntfs_ino = VAR_14;
    VAR_13->mrec = VAR_13->base_mrec;
   } else {

    VAR_13->mrec = FUNC_8(VAR_14,
      FUNC_7(
      VAR_17->mft_reference), &VAR_15);
    if (FUNC_0(VAR_13->mrec)) {
     FUNC_15(VAR_16->sb, "Failed to map "
       "extent mft record "
       "0x%lx of base inode "
       "0x%lx.%s",
       FUNC_1(VAR_17->
       mft_reference),
       VAR_14->mft_no, VAR_25);
     VAR_24 = FUNC_4(VAR_13->mrec);
     if (VAR_24 == -VAR_3)
      VAR_24 = -VAR_2;

     VAR_15 = ((void*)0);
     break;
    }
    VAR_13->ntfs_ino = VAR_15;
   }
   VAR_13->attr = (ATTR_RECORD*)((u8*)VAR_13->mrec +
     FUNC_5(VAR_13->mrec->attrs_offset));
  }
  VAR_21 = VAR_13->attr;




do_next_attr_loop:
  if ((u8*)VAR_21 < (u8*)VAR_13->mrec || (u8*)VAR_21 > (u8*)VAR_13->mrec +
    FUNC_6(VAR_13->mrec->bytes_allocated))
   break;
  if (VAR_21->type == VAR_0)
   break;
  if (!VAR_21->length)
   break;
  if (VAR_17->instance != VAR_21->instance)
   goto do_next_attr;





  if (VAR_17->type != VAR_21->type)
   break;
  if (!FUNC_10((ntfschar*)((u8*)VAR_21 +
    FUNC_5(VAR_21->name_offset)), VAR_21->name_length,
    VAR_22, VAR_23, VAR_1,
    VAR_16->upcase, VAR_16->upcase_len))
   break;
  VAR_13->attr = VAR_21;




  if (!VAR_11 || (!VAR_21->non_resident && FUNC_6(
    VAR_21->data.resident.value_length) == VAR_12 &&
    !FUNC_9((u8*)VAR_21 +
    FUNC_5(VAR_21->data.resident.value_offset),
    VAR_11, VAR_12))) {
   FUNC_14("Done, found.");
   return 0;
  }
do_next_attr:

  VAR_21 = (ATTR_RECORD*)((u8*)VAR_21 + FUNC_6(VAR_21->length));
  goto do_next_attr_loop;
 }
 if (!VAR_24) {
  FUNC_15(VAR_16->sb, "Base inode 0x%lx contains corrupt "
    "attribute list attribute.%s", VAR_14->mft_no,
    VAR_25);
  VAR_24 = -VAR_2;
 }
 if (VAR_15 != VAR_14) {
  if (VAR_15)
   FUNC_17(VAR_15);
  VAR_13->ntfs_ino = VAR_14;
  VAR_13->mrec = VAR_13->base_mrec;
  VAR_13->attr = VAR_13->base_attr;
 }
 if (VAR_24 != -VAR_4)
  FUNC_3(VAR_16);
 return VAR_24;
not_found:




 if (VAR_6 == VAR_0) {
  FUNC_12(VAR_13);
  return FUNC_11(VAR_0, VAR_7, VAR_8, VAR_9, VAR_11, VAR_12,
    VAR_13);
 }
 if (VAR_15 != VAR_14)
  FUNC_17(VAR_15);
 VAR_13->mrec = VAR_13->base_mrec;
 VAR_13->attr = (ATTR_RECORD*)((u8*)VAR_13->mrec +
   FUNC_5(VAR_13->mrec->attrs_offset));
 VAR_13->is_first = 1;
 VAR_13->ntfs_ino = VAR_14;
 VAR_13->base_ntfs_ino = ((void*)0);
 VAR_13->base_mrec = ((void*)0);
 VAR_13->base_attr = ((void*)0);







 do {
  VAR_24 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_9, VAR_11, VAR_12,
    VAR_13);
 } while (!VAR_24);
 FUNC_14("Done, not found.");
 return VAR_24;
}
