
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xfs_fsblock_t ;
typedef int xfs_exntst_t ;
struct xfs_trans {int dummy; } ;
struct TYPE_5__ {int rui_nextents; struct xfs_map_extent* rui_extents; } ;
struct xfs_rui_log_item {int rui_flags; TYPE_2__ rui_format; } ;
struct xfs_rud_log_item {int dummy; } ;
struct TYPE_4__ {scalar_t__ sb_dblocks; scalar_t__ sb_agblocks; } ;
struct xfs_mount {int m_rmap_maxlevels; TYPE_1__ m_sb; } ;
struct xfs_map_extent {int me_flags; scalar_t__ me_len; int me_startblock; int me_startoff; int me_owner; } ;
struct xfs_btree_cur {int dummy; } ;
typedef enum xfs_rmap_intent_type { ____Placeholder_xfs_rmap_intent_type } xfs_rmap_intent_type ;
struct TYPE_6__ {int tr_itruncate; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (struct xfs_mount*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct xfs_mount*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct xfs_mount*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;


 int VAR_10 ;



 int VAR_11 ;


 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct xfs_trans*,struct xfs_btree_cur*,int) ;
 int FUNC_7 (struct xfs_rui_log_item*) ;
 int FUNC_8 (struct xfs_mount*,int *,int ,int ,int ,struct xfs_trans**) ;
 int FUNC_9 (struct xfs_trans*) ;
 int FUNC_10 (struct xfs_trans*) ;
 struct xfs_rud_log_item* FUNC_11 (struct xfs_trans*,struct xfs_rui_log_item*) ;
 int FUNC_12 (struct xfs_trans*,struct xfs_rud_log_item*,int,int ,int,int ,int ,scalar_t__,int ,struct xfs_btree_cur**) ;

int
FUNC_13(
 struct xfs_mount *VAR_20,
 struct xfs_rui_log_item *VAR_21)
{
 int VAR_22;
 int VAR_23 = 0;
 struct xfs_map_extent *VAR_24;
 xfs_fsblock_t VAR_25;
 bool VAR_26;
 struct xfs_rud_log_item *VAR_27;
 enum xfs_rmap_intent_type VAR_28;
 int VAR_29;
 xfs_exntst_t VAR_30;
 struct xfs_trans *VAR_31;
 struct xfs_btree_cur *VAR_32 = ((void*)0);

 FUNC_0(!FUNC_5(VAR_18, &VAR_21->rui_flags));






 for (VAR_22 = 0; VAR_22 < VAR_21->rui_format.rui_nextents; VAR_22++) {
  VAR_24 = &VAR_21->rui_format.rui_extents[VAR_22];
  VAR_25 = FUNC_2(VAR_20,
       FUNC_3(VAR_20, VAR_24->me_startblock));
  switch (VAR_24->me_flags & VAR_11) {
  case 131:
  case 130:
  case 129:
  case 128:
  case 134:
  case 133:
  case 135:
  case 132:
   VAR_26 = 1;
   break;
  default:
   VAR_26 = 0;
   break;
  }
  if (!VAR_26 || VAR_25 == 0 ||
      VAR_24->me_len == 0 ||
      VAR_25 >= VAR_20->m_sb.sb_dblocks ||
      VAR_24->me_len >= VAR_20->m_sb.sb_agblocks ||
      (VAR_24->me_flags & ~VAR_10)) {




   FUNC_4(VAR_18, &VAR_21->rui_flags);
   FUNC_7(VAR_21);
   return -VAR_1;
  }
 }

 VAR_23 = FUNC_8(VAR_20, &FUNC_1(VAR_20)->tr_itruncate,
   VAR_20->m_rmap_maxlevels, 0, VAR_19, &VAR_31);
 if (VAR_23)
  return VAR_23;
 VAR_27 = FUNC_11(VAR_31, VAR_21);

 for (VAR_22 = 0; VAR_22 < VAR_21->rui_format.rui_nextents; VAR_22++) {
  VAR_24 = &VAR_21->rui_format.rui_extents[VAR_22];
  VAR_30 = (VAR_24->me_flags & VAR_12) ?
    VAR_5 : VAR_4;
  VAR_29 = (VAR_24->me_flags & VAR_9) ?
    VAR_2 : VAR_3;
  switch (VAR_24->me_flags & VAR_11) {
  case 131:
   VAR_28 = VAR_14;
   break;
  case 130:
   VAR_28 = VAR_15;
   break;
  case 129:
   VAR_28 = VAR_16;
   break;
  case 128:
   VAR_28 = VAR_17;
   break;
  case 134:
   VAR_28 = VAR_7;
   break;
  case 133:
   VAR_28 = VAR_8;
   break;
  case 135:
   VAR_28 = VAR_6;
   break;
  case 132:
   VAR_28 = VAR_13;
   break;
  default:
   VAR_23 = -VAR_0;
   goto abort_error;
  }
  VAR_23 = FUNC_12(VAR_31, VAR_27, VAR_28,
    VAR_24->me_owner, VAR_29,
    VAR_24->me_startoff, VAR_24->me_startblock,
    VAR_24->me_len, VAR_30, &VAR_32);
  if (VAR_23)
   goto abort_error;

 }

 FUNC_6(VAR_31, VAR_32, VAR_23);
 FUNC_4(VAR_18, &VAR_21->rui_flags);
 VAR_23 = FUNC_10(VAR_31);
 return VAR_23;

abort_error:
 FUNC_6(VAR_31, VAR_32, VAR_23);
 FUNC_9(VAR_31);
 return VAR_23;
}
