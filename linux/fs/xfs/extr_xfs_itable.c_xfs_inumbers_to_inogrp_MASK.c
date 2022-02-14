
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inumbers {int xi_allocmask; int xi_alloccount; int xi_startino; } ;
struct xfs_inogrp {int xi_allocmask; int xi_alloccount; int xi_startino; } ;


 int FUNC_0 (struct xfs_inogrp*,int ,int) ;

void
FUNC_1(
 struct xfs_inogrp *VAR_0,
 const struct xfs_inumbers *VAR_1)
{

 FUNC_0(VAR_0, 0, sizeof(struct xfs_inogrp));
 VAR_0->xi_startino = VAR_1->xi_startino;
 VAR_0->xi_alloccount = VAR_1->xi_alloccount;
 VAR_0->xi_allocmask = VAR_1->xi_allocmask;
}
