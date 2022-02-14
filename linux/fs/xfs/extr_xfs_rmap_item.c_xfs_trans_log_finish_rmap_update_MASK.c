
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_fsblock_t ;
typedef int xfs_fileoff_t ;
typedef int xfs_filblks_t ;
typedef int xfs_exntst_t ;
typedef int uint64_t ;
struct xfs_trans {int t_flags; } ;
struct TYPE_2__ {int li_flags; } ;
struct xfs_rud_log_item {TYPE_1__ rud_item; } ;
struct xfs_btree_cur {int dummy; } ;
typedef enum xfs_rmap_intent_type { ____Placeholder_xfs_rmap_intent_type } xfs_rmap_intent_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct xfs_trans*,int,int ,int,int ,int ,int ,int ,struct xfs_btree_cur**) ;

__attribute__((used)) static int
FUNC_2(
 struct xfs_trans *VAR_2,
 struct xfs_rud_log_item *VAR_3,
 enum xfs_rmap_intent_type VAR_4,
 uint64_t VAR_5,
 int VAR_6,
 xfs_fileoff_t VAR_7,
 xfs_fsblock_t VAR_8,
 xfs_filblks_t VAR_9,
 xfs_exntst_t VAR_10,
 struct xfs_btree_cur **VAR_11)
{
 int VAR_12;

 VAR_12 = FUNC_1(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7,
   VAR_8, VAR_9, VAR_10, VAR_11);
 VAR_2->t_flags |= VAR_1;
 FUNC_0(VAR_0, &VAR_3->rud_item.li_flags);

 return VAR_12;
}
