
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_fsblock_t ;
typedef int xfs_extlen_t ;
struct xfs_trans {int t_flags; } ;
struct TYPE_2__ {int li_flags; } ;
struct xfs_cud_log_item {TYPE_1__ cud_item; } ;
struct xfs_btree_cur {int dummy; } ;
typedef enum xfs_refcount_intent_type { ____Placeholder_xfs_refcount_intent_type } xfs_refcount_intent_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct xfs_trans*,int,int ,int ,int *,int *,struct xfs_btree_cur**) ;

__attribute__((used)) static int
FUNC_2(
 struct xfs_trans *VAR_2,
 struct xfs_cud_log_item *VAR_3,
 enum xfs_refcount_intent_type VAR_4,
 xfs_fsblock_t VAR_5,
 xfs_extlen_t VAR_6,
 xfs_fsblock_t *VAR_7,
 xfs_extlen_t *VAR_8,
 struct xfs_btree_cur **VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_1(VAR_2, VAR_4, VAR_5,
   VAR_6, VAR_7, VAR_8, VAR_9);
 VAR_2->t_flags |= VAR_1;
 FUNC_0(VAR_0, &VAR_3->cud_item.li_flags);

 return VAR_10;
}
