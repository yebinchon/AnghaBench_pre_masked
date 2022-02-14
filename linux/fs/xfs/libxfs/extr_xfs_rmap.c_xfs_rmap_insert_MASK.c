
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xfs_extlen_t ;
typedef int xfs_agblock_t ;
typedef void* uint64_t ;
struct TYPE_7__ {int agno; } ;
struct TYPE_8__ {TYPE_3__ a; } ;
struct TYPE_5__ {unsigned int rm_flags; void* rm_offset; void* rm_owner; int rm_blockcount; int rm_startblock; } ;
struct TYPE_6__ {TYPE_1__ r; } ;
struct xfs_btree_cur {TYPE_4__ bc_private; int bc_mp; TYPE_2__ bc_rec; } ;


 int FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ,void*,void*,unsigned int) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (struct xfs_btree_cur*,int*) ;
 int FUNC_4 (struct xfs_btree_cur*,int ,int ,void*,void*,unsigned int,int*) ;

int
FUNC_5(
 struct xfs_btree_cur *VAR_2,
 xfs_agblock_t VAR_3,
 xfs_extlen_t VAR_4,
 uint64_t VAR_5,
 uint64_t VAR_6,
 unsigned int VAR_7)
{
 int VAR_8;
 int VAR_9;

 FUNC_1(VAR_2->bc_mp, VAR_2->bc_private.a.agno, VAR_3,
   VAR_4, VAR_5, VAR_6, VAR_7);

 VAR_9 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, &VAR_8);
 if (VAR_9)
  goto done;
 FUNC_0(VAR_2->bc_mp, VAR_8 == 0, VAR_1);

 VAR_2->bc_rec.r.rm_startblock = VAR_3;
 VAR_2->bc_rec.r.rm_blockcount = VAR_4;
 VAR_2->bc_rec.r.rm_owner = VAR_5;
 VAR_2->bc_rec.r.rm_offset = VAR_6;
 VAR_2->bc_rec.r.rm_flags = VAR_7;
 VAR_9 = FUNC_3(VAR_2, &VAR_8);
 if (VAR_9)
  goto done;
 FUNC_0(VAR_2->bc_mp, VAR_8 == 1, VAR_1);
done:
 if (VAR_9)
  FUNC_2(VAR_2->bc_mp,
    VAR_2->bc_private.a.agno, VAR_9, VAR_0);
 return VAR_9;
}
