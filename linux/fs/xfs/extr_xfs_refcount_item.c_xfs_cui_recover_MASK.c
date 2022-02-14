
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xfs_fsblock_t ;
typedef scalar_t__ xfs_extlen_t ;
struct xfs_trans {struct xfs_mount* t_mountp; } ;
struct xfs_phys_extent {scalar_t__ pe_startblock; int pe_flags; scalar_t__ pe_len; } ;
struct TYPE_4__ {scalar_t__ sb_dblocks; scalar_t__ sb_agblocks; } ;
struct xfs_mount {int m_refc_maxlevels; TYPE_1__ m_sb; } ;
struct TYPE_5__ {int cui_nextents; struct xfs_phys_extent* cui_extents; } ;
struct xfs_cui_log_item {int cui_flags; TYPE_2__ cui_format; } ;
struct xfs_cud_log_item {int dummy; } ;
struct xfs_btree_cur {int dummy; } ;
struct xfs_bmbt_irec {scalar_t__ br_blockcount; scalar_t__ br_startblock; } ;
typedef enum xfs_refcount_intent_type { ____Placeholder_xfs_refcount_intent_type } xfs_refcount_intent_type ;
struct TYPE_6__ {int tr_itruncate; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (struct xfs_mount*) ;
 scalar_t__ FUNC_2 (struct xfs_mount*,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct xfs_mount*,scalar_t__) ;


 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct xfs_cui_log_item*) ;
 int FUNC_7 (struct xfs_trans*,struct xfs_trans*) ;
 int FUNC_8 (struct xfs_trans*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct xfs_trans*,struct xfs_bmbt_irec*) ;
 int FUNC_10 (struct xfs_trans*,struct xfs_btree_cur*,int) ;
 int FUNC_11 (struct xfs_trans*,scalar_t__,scalar_t__) ;
 int FUNC_12 (struct xfs_trans*,struct xfs_bmbt_irec*) ;
 int FUNC_13 (struct xfs_mount*,int *,int,int ,int ,struct xfs_trans**) ;
 int FUNC_14 (struct xfs_trans*) ;
 int FUNC_15 (struct xfs_trans*) ;
 struct xfs_cud_log_item* FUNC_16 (struct xfs_trans*,struct xfs_cui_log_item*) ;
 int FUNC_17 (struct xfs_trans*,struct xfs_cud_log_item*,int,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,struct xfs_btree_cur**) ;

int
FUNC_18(
 struct xfs_trans *VAR_6,
 struct xfs_cui_log_item *VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;
 unsigned int VAR_10;
 struct xfs_phys_extent *VAR_11;
 xfs_fsblock_t VAR_12;
 bool VAR_13;
 struct xfs_cud_log_item *VAR_14;
 struct xfs_trans *VAR_15;
 struct xfs_btree_cur *VAR_16 = ((void*)0);
 enum xfs_refcount_intent_type VAR_17;
 xfs_fsblock_t VAR_18;
 xfs_extlen_t VAR_19;
 struct xfs_bmbt_irec VAR_20;
 bool VAR_21 = 0;
 struct xfs_mount *VAR_22 = VAR_6->t_mountp;

 FUNC_0(!FUNC_5(VAR_2, &VAR_7->cui_flags));






 for (VAR_8 = 0; VAR_8 < VAR_7->cui_format.cui_nextents; VAR_8++) {
  VAR_11 = &VAR_7->cui_format.cui_extents[VAR_8];
  VAR_12 = FUNC_2(VAR_22,
       FUNC_3(VAR_22, VAR_11->pe_startblock));
  switch (VAR_11->pe_flags & VAR_4) {
  case 128:
  case 130:
  case 131:
  case 129:
   VAR_13 = 1;
   break;
  default:
   VAR_13 = 0;
   break;
  }
  if (!VAR_13 || VAR_12 == 0 ||
      VAR_11->pe_len == 0 ||
      VAR_12 >= VAR_22->m_sb.sb_dblocks ||
      VAR_11->pe_len >= VAR_22->m_sb.sb_agblocks ||
      (VAR_11->pe_flags & ~VAR_3)) {




   FUNC_4(VAR_2, &VAR_7->cui_flags);
   FUNC_6(VAR_7);
   return -VAR_1;
  }
 }
 VAR_9 = FUNC_13(VAR_22, &FUNC_1(VAR_22)->tr_itruncate,
   VAR_22->m_refc_maxlevels * 2, 0, VAR_5, &VAR_15);
 if (VAR_9)
  return VAR_9;





 FUNC_7(VAR_15, VAR_6);
 VAR_14 = FUNC_16(VAR_15, VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_7->cui_format.cui_nextents; VAR_8++) {
  VAR_11 = &VAR_7->cui_format.cui_extents[VAR_8];
  VAR_10 = VAR_11->pe_flags & VAR_4;
  switch (VAR_10) {
  case 128:
  case 130:
  case 131:
  case 129:
   VAR_17 = VAR_10;
   break;
  default:
   VAR_9 = -VAR_0;
   goto abort_error;
  }
  if (VAR_21) {
   VAR_18 = VAR_11->pe_startblock;
   VAR_19 = VAR_11->pe_len;
  } else
   VAR_9 = FUNC_17(VAR_15, VAR_14,
    VAR_17, VAR_11->pe_startblock, VAR_11->pe_len,
    &VAR_18, &VAR_19, &VAR_16);
  if (VAR_9)
   goto abort_error;


  if (VAR_19 > 0) {
   VAR_20.br_startblock = VAR_18;
   VAR_20.br_blockcount = VAR_19;
   switch (VAR_17) {
   case 128:
    FUNC_12(VAR_15, &VAR_20);
    break;
   case 130:
    FUNC_9(VAR_15, &VAR_20);
    break;
   case 131:
    FUNC_8(VAR_15,
      VAR_20.br_startblock,
      VAR_20.br_blockcount);
    break;
   case 129:
    FUNC_11(VAR_15,
      VAR_20.br_startblock,
      VAR_20.br_blockcount);
    break;
   default:
    FUNC_0(0);
   }
   VAR_21 = 1;
  }
 }

 FUNC_10(VAR_15, VAR_16, VAR_9);
 FUNC_4(VAR_2, &VAR_7->cui_flags);
 FUNC_7(VAR_6, VAR_15);
 VAR_9 = FUNC_15(VAR_15);
 return VAR_9;

abort_error:
 FUNC_10(VAR_15, VAR_16, VAR_9);
 FUNC_7(VAR_6, VAR_15);
 FUNC_14(VAR_15);
 return VAR_9;
}
