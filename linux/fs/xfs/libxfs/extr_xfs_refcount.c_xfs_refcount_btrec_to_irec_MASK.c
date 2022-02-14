
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rc_refcount; int rc_blockcount; int rc_startblock; } ;
union xfs_btree_rec {TYPE_1__ refc; } ;
struct xfs_refcount_irec {void* rc_refcount; void* rc_blockcount; void* rc_startblock; } ;


 void* FUNC_0 (int ) ;

void
FUNC_1(
 union xfs_btree_rec *VAR_0,
 struct xfs_refcount_irec *VAR_1)
{
 VAR_1->rc_startblock = FUNC_0(VAR_0->refc.rc_startblock);
 VAR_1->rc_blockcount = FUNC_0(VAR_0->refc.rc_blockcount);
 VAR_1->rc_refcount = FUNC_0(VAR_0->refc.rc_refcount);
}
