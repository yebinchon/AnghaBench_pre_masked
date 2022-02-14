
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int dummy; } ;
struct xchk_ag {int agno; scalar_t__ pag; } ;


 scalar_t__ FUNC_0 (struct xfs_mount*,int ) ;

void
FUNC_1(
 struct xfs_mount *VAR_0,
 struct xchk_ag *VAR_1)
{
 if (!VAR_1->pag)
  VAR_1->pag = FUNC_0(VAR_0, VAR_1->agno);
}
