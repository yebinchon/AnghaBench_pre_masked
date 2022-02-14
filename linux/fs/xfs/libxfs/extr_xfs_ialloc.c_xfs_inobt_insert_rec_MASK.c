
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_inofree_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int ir_free; int ir_freecount; int ir_count; int ir_holemask; } ;
struct TYPE_4__ {TYPE_1__ i; } ;
struct xfs_btree_cur {TYPE_2__ bc_rec; } ;
typedef int int32_t ;


 int FUNC_0 (struct xfs_btree_cur*,int*) ;

int
FUNC_1(
 struct xfs_btree_cur *VAR_0,
 uint16_t VAR_1,
 uint8_t VAR_2,
 int32_t VAR_3,
 xfs_inofree_t VAR_4,
 int *VAR_5)
{
 VAR_0->bc_rec.i.ir_holemask = VAR_1;
 VAR_0->bc_rec.i.ir_count = VAR_2;
 VAR_0->bc_rec.i.ir_freecount = VAR_3;
 VAR_0->bc_rec.i.ir_free = VAR_4;
 return FUNC_0(VAR_0, VAR_5);
}
