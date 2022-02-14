
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_extlen_t ;
typedef int xfs_agblock_t ;
typedef void* uint64_t ;
struct TYPE_4__ {unsigned int rm_flags; void* rm_offset; void* rm_owner; int rm_blockcount; int rm_startblock; } ;
struct TYPE_3__ {TYPE_2__ r; } ;
struct xfs_btree_cur {TYPE_1__ bc_rec; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_btree_cur*,int ,int*) ;

int
FUNC_1(
 struct xfs_btree_cur *VAR_1,
 xfs_agblock_t VAR_2,
 xfs_extlen_t VAR_3,
 uint64_t VAR_4,
 uint64_t VAR_5,
 unsigned int VAR_6,
 int *VAR_7)
{
 VAR_1->bc_rec.r.rm_startblock = VAR_2;
 VAR_1->bc_rec.r.rm_blockcount = VAR_3;
 VAR_1->bc_rec.r.rm_owner = VAR_4;
 VAR_1->bc_rec.r.rm_offset = VAR_5;
 VAR_1->bc_rec.r.rm_flags = VAR_6;
 return FUNC_0(VAR_1, VAR_0, VAR_7);
}
