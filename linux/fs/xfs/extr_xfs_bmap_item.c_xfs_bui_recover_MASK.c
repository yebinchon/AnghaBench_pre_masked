
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ xfs_fsblock_t ;
typedef scalar_t__ xfs_filblks_t ;
typedef int xfs_exntst_t ;
struct xfs_trans {struct xfs_mount* t_mountp; } ;
struct TYPE_6__ {scalar_t__ sb_dblocks; scalar_t__ sb_agblocks; } ;
struct xfs_mount {TYPE_2__ m_sb; } ;
struct xfs_map_extent {int me_flags; scalar_t__ me_len; int me_startoff; int me_startblock; int me_owner; } ;
struct xfs_inode {int dummy; } ;
struct TYPE_5__ {scalar_t__ bui_nextents; struct xfs_map_extent* bui_extents; } ;
struct xfs_bui_log_item {int bui_flags; TYPE_1__ bui_format; } ;
struct xfs_bud_log_item {int dummy; } ;
struct xfs_bmbt_irec {int br_state; int br_startoff; scalar_t__ br_blockcount; int br_startblock; } ;
typedef enum xfs_bmap_intent_type { ____Placeholder_xfs_bmap_intent_type } xfs_bmap_intent_type ;
struct TYPE_8__ {int tr_itruncate; } ;
struct TYPE_7__ {scalar_t__ i_nlink; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (struct xfs_mount*) ;
 TYPE_3__* FUNC_2 (struct xfs_inode*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct xfs_mount*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct xfs_mount*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct xfs_mount*,int ) ;
 int VAR_12 ;
 int FUNC_6 (struct xfs_mount*,int ) ;
 int VAR_13 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct xfs_trans*,struct xfs_inode*,struct xfs_bmbt_irec*) ;
 int FUNC_10 (struct xfs_bui_log_item*) ;
 int FUNC_11 (struct xfs_trans*,struct xfs_trans*) ;
 int FUNC_12 (struct xfs_inode*,int ) ;
 int FUNC_13 (struct xfs_mount*,struct xfs_trans*,int ,int ,int ,struct xfs_inode**) ;
 int FUNC_14 (struct xfs_inode*) ;
 int FUNC_15 (struct xfs_inode*,int ) ;
 int FUNC_16 (struct xfs_mount*,int *,int ,int ,int ,struct xfs_trans**) ;
 int FUNC_17 (struct xfs_trans*) ;
 int FUNC_18 (struct xfs_trans*) ;
 struct xfs_bud_log_item* FUNC_19 (struct xfs_trans*,struct xfs_bui_log_item*) ;
 int FUNC_20 (struct xfs_trans*,struct xfs_inode*,int ) ;
 int FUNC_21 (struct xfs_trans*,struct xfs_bud_log_item*,int,struct xfs_inode*,int,int ,int ,scalar_t__*,int ) ;

int
FUNC_22(
 struct xfs_trans *VAR_14,
 struct xfs_bui_log_item *VAR_15)
{
 int VAR_16 = 0;
 unsigned int VAR_17;
 struct xfs_map_extent *VAR_18;
 xfs_fsblock_t VAR_19;
 xfs_fsblock_t VAR_20;
 xfs_filblks_t VAR_21;
 bool VAR_22;
 struct xfs_bud_log_item *VAR_23;
 enum xfs_bmap_intent_type VAR_24;
 int VAR_25;
 xfs_exntst_t VAR_26;
 struct xfs_trans *VAR_27;
 struct xfs_inode *VAR_28 = ((void*)0);
 struct xfs_bmbt_irec VAR_29;
 struct xfs_mount *VAR_30 = VAR_14->t_mountp;

 FUNC_0(!FUNC_8(VAR_8, &VAR_15->bui_flags));


 if (VAR_15->bui_format.bui_nextents != VAR_7) {
  FUNC_7(VAR_8, &VAR_15->bui_flags);
  FUNC_10(VAR_15);
  return -VAR_1;
 }





 VAR_18 = &VAR_15->bui_format.bui_extents[0];
 VAR_19 = FUNC_3(VAR_30,
      FUNC_5(VAR_30, VAR_18->me_startblock));
 VAR_20 = FUNC_3(VAR_30, FUNC_5(VAR_30,
   FUNC_6(VAR_30, VAR_18->me_owner)));
 switch (VAR_18->me_flags & VAR_5) {
 case 129:
 case 128:
  VAR_22 = 1;
  break;
 default:
  VAR_22 = 0;
  break;
 }
 if (!VAR_22 || VAR_19 == 0 ||
     VAR_18->me_len == 0 ||
     VAR_20 == 0 ||
     VAR_19 >= VAR_30->m_sb.sb_dblocks ||
     VAR_18->me_len >= VAR_30->m_sb.sb_agblocks ||
     VAR_20 >= VAR_30->m_sb.sb_dblocks ||
     (VAR_18->me_flags & ~VAR_4)) {




  FUNC_7(VAR_8, &VAR_15->bui_flags);
  FUNC_10(VAR_15);
  return -VAR_1;
 }

 VAR_16 = FUNC_16(VAR_30, &FUNC_1(VAR_30)->tr_itruncate,
   FUNC_4(VAR_30, VAR_9), 0, 0, &VAR_27);
 if (VAR_16)
  return VAR_16;





 FUNC_11(VAR_27, VAR_14);
 VAR_23 = FUNC_19(VAR_27, VAR_15);


 VAR_16 = FUNC_13(VAR_30, VAR_27, VAR_18->me_owner, 0, VAR_12, &VAR_28);
 if (VAR_16)
  goto err_inode;

 if (FUNC_2(VAR_28)->i_nlink == 0)
  FUNC_12(VAR_28, VAR_13);


 VAR_26 = (VAR_18->me_flags & VAR_6) ?
   VAR_11 : VAR_10;
 VAR_25 = (VAR_18->me_flags & VAR_3) ?
   VAR_2 : VAR_9;
 VAR_17 = VAR_18->me_flags & VAR_5;
 switch (VAR_17) {
 case 129:
 case 128:
  VAR_24 = VAR_17;
  break;
 default:
  VAR_16 = -VAR_0;
  goto err_inode;
 }
 FUNC_20(VAR_27, VAR_28, 0);

 VAR_21 = VAR_18->me_len;
 VAR_16 = FUNC_21(VAR_27, VAR_23, VAR_24, VAR_28, VAR_25,
   VAR_18->me_startoff, VAR_18->me_startblock, &VAR_21, VAR_26);
 if (VAR_16)
  goto err_inode;

 if (VAR_21 > 0) {
  FUNC_0(VAR_24 == 128);
  VAR_29.br_startblock = VAR_18->me_startblock;
  VAR_29.br_blockcount = VAR_21;
  VAR_29.br_startoff = VAR_18->me_startoff;
  VAR_29.br_state = VAR_26;
  FUNC_9(VAR_27, VAR_28, &VAR_29);
 }

 FUNC_7(VAR_8, &VAR_15->bui_flags);
 FUNC_11(VAR_14, VAR_27);
 VAR_16 = FUNC_18(VAR_27);
 FUNC_15(VAR_28, VAR_12);
 FUNC_14(VAR_28);

 return VAR_16;

err_inode:
 FUNC_11(VAR_14, VAR_27);
 FUNC_17(VAR_27);
 if (VAR_28) {
  FUNC_15(VAR_28, VAR_12);
  FUNC_14(VAR_28);
 }
 return VAR_16;
}
