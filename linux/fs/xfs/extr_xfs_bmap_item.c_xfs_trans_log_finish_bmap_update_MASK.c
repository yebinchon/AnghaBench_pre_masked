
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_fsblock_t ;
typedef int xfs_fileoff_t ;
typedef int xfs_filblks_t ;
typedef int xfs_exntst_t ;
struct xfs_trans {int t_flags; } ;
struct xfs_inode {int dummy; } ;
struct TYPE_2__ {int li_flags; } ;
struct xfs_bud_log_item {TYPE_1__ bud_item; } ;
typedef enum xfs_bmap_intent_type { ____Placeholder_xfs_bmap_intent_type } xfs_bmap_intent_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct xfs_trans*,struct xfs_inode*,int,int,int ,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_2(
 struct xfs_trans *VAR_2,
 struct xfs_bud_log_item *VAR_3,
 enum xfs_bmap_intent_type VAR_4,
 struct xfs_inode *VAR_5,
 int VAR_6,
 xfs_fileoff_t VAR_7,
 xfs_fsblock_t VAR_8,
 xfs_filblks_t *VAR_9,
 xfs_exntst_t VAR_10)
{
 int VAR_11;

 VAR_11 = FUNC_1(VAR_2, VAR_5, VAR_4, VAR_6, VAR_7,
   VAR_8, VAR_9, VAR_10);
 VAR_2->t_flags |= VAR_1;
 FUNC_0(VAR_0, &VAR_3->bud_item.li_flags);

 return VAR_11;
}
