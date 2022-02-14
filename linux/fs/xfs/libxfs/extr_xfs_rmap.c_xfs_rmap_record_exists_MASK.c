
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_extlen_t ;
typedef scalar_t__ xfs_agblock_t ;
typedef scalar_t__ uint64_t ;
struct xfs_rmap_irec {scalar_t__ rm_owner; scalar_t__ rm_startblock; scalar_t__ rm_blockcount; } ;
struct xfs_owner_info {int dummy; } ;
struct xfs_btree_cur {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct xfs_owner_info const*,scalar_t__*,scalar_t__*,unsigned int*) ;
 int FUNC_3 (struct xfs_btree_cur*,struct xfs_rmap_irec*,int*) ;
 int FUNC_4 (struct xfs_btree_cur*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,unsigned int,int*) ;

int
FUNC_5(
 struct xfs_btree_cur *VAR_1,
 xfs_agblock_t VAR_2,
 xfs_extlen_t VAR_3,
 const struct xfs_owner_info *VAR_4,
 bool *VAR_5)
{
 uint64_t VAR_6;
 uint64_t VAR_7;
 unsigned int VAR_8;
 int VAR_9;
 struct xfs_rmap_irec VAR_10;
 int VAR_11;

 FUNC_2(VAR_4, &VAR_6, &VAR_7, &VAR_8);
 FUNC_0(FUNC_1(VAR_6) ||
        (VAR_8 & VAR_0));

 VAR_11 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_6, VAR_7, VAR_8,
   &VAR_9);
 if (VAR_11)
  return VAR_11;
 if (!VAR_9) {
  *VAR_5 = 0;
  return 0;
 }

 VAR_11 = FUNC_3(VAR_1, &VAR_10, &VAR_9);
 if (VAR_11)
  return VAR_11;
 if (!VAR_9) {
  *VAR_5 = 0;
  return 0;
 }

 *VAR_5 = (VAR_10.rm_owner == VAR_6 && VAR_10.rm_startblock <= VAR_2 &&
       VAR_10.rm_startblock + VAR_10.rm_blockcount >= VAR_2 + VAR_3);
 return 0;
}
