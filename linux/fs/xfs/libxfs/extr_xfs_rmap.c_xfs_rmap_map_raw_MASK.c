
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_rmap_irec {int rm_flags; int rm_blockcount; int rm_startblock; int rm_owner; int rm_offset; } ;
struct xfs_owner_info {int oi_flags; int oi_offset; int oi_owner; } ;
struct xfs_btree_cur {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct xfs_btree_cur*,int ,int ,int,struct xfs_owner_info*) ;
 int FUNC_2 (struct xfs_btree_cur*,int ,int ,int,struct xfs_owner_info*) ;

int
FUNC_3(
 struct xfs_btree_cur *VAR_5,
 struct xfs_rmap_irec *VAR_6)
{
 struct xfs_owner_info VAR_7;

 VAR_7.oi_owner = VAR_6->rm_owner;
 VAR_7.oi_offset = VAR_6->rm_offset;
 VAR_7.oi_flags = 0;
 if (VAR_6->rm_flags & VAR_2)
  VAR_7.oi_flags |= VAR_0;
 if (VAR_6->rm_flags & VAR_3)
  VAR_7.oi_flags |= VAR_1;

 if (VAR_6->rm_flags || FUNC_0(VAR_6->rm_owner))
  return FUNC_1(VAR_5, VAR_6->rm_startblock,
    VAR_6->rm_blockcount,
    VAR_6->rm_flags & VAR_4,
    &VAR_7);

 return FUNC_2(VAR_5, VAR_6->rm_startblock,
   VAR_6->rm_blockcount,
   VAR_6->rm_flags & VAR_4,
   &VAR_7);
}
