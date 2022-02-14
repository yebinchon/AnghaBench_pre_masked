
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rm_offset; int rm_owner; int rm_blockcount; int rm_startblock; } ;
union xfs_btree_rec {TYPE_1__ rmap; } ;
struct xfs_rmap_irec {int rm_owner; void* rm_blockcount; void* rm_startblock; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct xfs_rmap_irec*) ;

int
FUNC_3(
 union xfs_btree_rec *VAR_0,
 struct xfs_rmap_irec *VAR_1)
{
 VAR_1->rm_startblock = FUNC_0(VAR_0->rmap.rm_startblock);
 VAR_1->rm_blockcount = FUNC_0(VAR_0->rmap.rm_blockcount);
 VAR_1->rm_owner = FUNC_1(VAR_0->rmap.rm_owner);
 return FUNC_2(FUNC_1(VAR_0->rmap.rm_offset),
   VAR_1);
}
