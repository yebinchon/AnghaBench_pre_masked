
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ xfs_agblock_t ;
typedef scalar_t__ uint64_t ;
struct xfs_rmap_irec {int rm_flags; int rm_offset; int rm_owner; int rm_blockcount; int rm_startblock; } ;
struct TYPE_7__ {unsigned int rm_flags; scalar_t__ rm_blockcount; scalar_t__ rm_offset; scalar_t__ rm_owner; scalar_t__ rm_startblock; } ;
struct xfs_find_left_neighbor_info {int* stat; TYPE_3__ high; struct xfs_rmap_irec* irec; } ;
struct TYPE_5__ {int agno; } ;
struct TYPE_6__ {TYPE_1__ a; } ;
struct xfs_btree_cur {TYPE_2__ bc_private; int bc_mp; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__,int ,scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct xfs_btree_cur*,TYPE_3__*,TYPE_3__*,int ,struct xfs_find_left_neighbor_info*) ;

int
FUNC_4(
 struct xfs_btree_cur *VAR_3,
 xfs_agblock_t VAR_4,
 uint64_t VAR_5,
 uint64_t VAR_6,
 unsigned int VAR_7,
 struct xfs_rmap_irec *VAR_8,
 int *VAR_9)
{
 struct xfs_find_left_neighbor_info VAR_10;
 int VAR_11;

 *VAR_9 = 0;
 if (VAR_4 == 0)
  return 0;
 VAR_10.high.rm_startblock = VAR_4 - 1;
 VAR_10.high.rm_owner = VAR_5;
 if (!FUNC_0(VAR_5) &&
     !(VAR_7 & VAR_1)) {
  if (VAR_6 == 0)
   return 0;
  VAR_10.high.rm_offset = VAR_6 - 1;
 } else
  VAR_10.high.rm_offset = 0;
 VAR_10.high.rm_flags = VAR_7;
 VAR_10.high.rm_blockcount = 0;
 VAR_10.irec = VAR_8;
 VAR_10.stat = VAR_9;

 FUNC_1(VAR_3->bc_mp,
   VAR_3->bc_private.a.agno, VAR_4, 0, VAR_5, VAR_6, VAR_7);

 VAR_11 = FUNC_3(VAR_3, &VAR_10.high, &VAR_10.high,
   VAR_2, &VAR_10);
 if (VAR_11 == -VAR_0)
  VAR_11 = 0;
 if (*VAR_9)
  FUNC_2(VAR_3->bc_mp,
    VAR_3->bc_private.a.agno, VAR_8->rm_startblock,
    VAR_8->rm_blockcount, VAR_8->rm_owner,
    VAR_8->rm_offset, VAR_8->rm_flags);
 return VAR_11;
}
