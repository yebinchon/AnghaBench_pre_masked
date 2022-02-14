
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xfs_agblock_t ;
struct TYPE_7__ {scalar_t__ rc_blockcount; int rc_startblock; } ;
struct TYPE_8__ {TYPE_3__ rc; } ;
struct TYPE_5__ {int agno; } ;
struct TYPE_6__ {TYPE_1__ a; } ;
struct xfs_btree_cur {TYPE_4__ bc_rec; TYPE_2__ bc_private; int bc_mp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct xfs_btree_cur*,int ,int*) ;

int
FUNC_2(
 struct xfs_btree_cur *VAR_1,
 xfs_agblock_t VAR_2,
 int *VAR_3)
{
 FUNC_0(VAR_1->bc_mp, VAR_1->bc_private.a.agno, VAR_2,
   VAR_0);
 VAR_1->bc_rec.rc.rc_startblock = VAR_2;
 VAR_1->bc_rec.rc.rc_blockcount = 0;
 return FUNC_1(VAR_1, VAR_0, VAR_3);
}
