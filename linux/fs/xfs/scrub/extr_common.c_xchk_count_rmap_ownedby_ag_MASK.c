
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_filblks_t ;
struct xfs_scrub {int dummy; } ;
struct xfs_owner_info {int dummy; } ;
struct xfs_btree_cur {int dummy; } ;
struct xchk_rmap_ownedby_info {scalar_t__* blocks; struct xfs_owner_info const* oinfo; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_btree_cur*,int ,struct xchk_rmap_ownedby_info*) ;

int
FUNC_1(
 struct xfs_scrub *VAR_1,
 struct xfs_btree_cur *VAR_2,
 const struct xfs_owner_info *VAR_3,
 xfs_filblks_t *VAR_4)
{
 struct xchk_rmap_ownedby_info VAR_5 = {
  .oinfo = VAR_3,
  .blocks = VAR_4,
 };

 *VAR_4 = 0;
 return FUNC_0(VAR_2, VAR_0,
   &VAR_5);
}
