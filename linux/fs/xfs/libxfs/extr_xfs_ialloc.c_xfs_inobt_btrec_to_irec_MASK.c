
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ir_freecount; } ;
struct TYPE_5__ {void* ir_freecount; int ir_count; int ir_holemask; } ;
struct TYPE_7__ {TYPE_2__ f; TYPE_1__ sp; } ;
struct TYPE_8__ {int ir_free; TYPE_3__ ir_u; int ir_startino; } ;
union xfs_btree_rec {TYPE_4__ inobt; } ;
struct xfs_mount {int m_sb; } ;
struct xfs_inobt_rec_incore {int ir_free; void* ir_freecount; int ir_count; int ir_holemask; void* ir_startino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;

void
FUNC_4(
 struct xfs_mount *VAR_2,
 union xfs_btree_rec *VAR_3,
 struct xfs_inobt_rec_incore *VAR_4)
{
 VAR_4->ir_startino = FUNC_1(VAR_3->inobt.ir_startino);
 if (FUNC_3(&VAR_2->m_sb)) {
  VAR_4->ir_holemask = FUNC_0(VAR_3->inobt.ir_u.sp.ir_holemask);
  VAR_4->ir_count = VAR_3->inobt.ir_u.sp.ir_count;
  VAR_4->ir_freecount = VAR_3->inobt.ir_u.sp.ir_freecount;
 } else {




  VAR_4->ir_holemask = VAR_0;
  VAR_4->ir_count = VAR_1;
  VAR_4->ir_freecount =
    FUNC_1(VAR_3->inobt.ir_u.f.ir_freecount);
 }
 VAR_4->ir_free = FUNC_2(VAR_3->inobt.ir_free);
}
