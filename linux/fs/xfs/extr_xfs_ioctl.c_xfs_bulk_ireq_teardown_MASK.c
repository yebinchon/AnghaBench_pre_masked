
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_ibulk {int ocount; int startino; } ;
struct xfs_bulk_ireq {int ocount; int ino; } ;



__attribute__((used)) static void
FUNC_0(
 struct xfs_bulk_ireq *VAR_0,
 struct xfs_ibulk *VAR_1)
{
 VAR_0->ino = VAR_1->startino;
 VAR_0->ocount = VAR_1->ocount;
}
