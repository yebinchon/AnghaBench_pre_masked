
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inumbers_chunk {struct xfs_ibulk* breq; int formatter; } ;
struct xfs_ibulk {scalar_t__ ocount; int icount; int flags; int startino; int mp; } ;
typedef int inumbers_fmt_pf ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int ,int ,int ,int ,struct xfs_inumbers_chunk*) ;
 int VAR_0 ;

int
FUNC_2(
 struct xfs_ibulk *VAR_1,
 inumbers_fmt_pf VAR_2)
{
 struct xfs_inumbers_chunk VAR_3 = {
  .formatter = VAR_2,
  .breq = VAR_1,
 };
 int VAR_4 = 0;

 if (FUNC_0(VAR_1->mp, VAR_1->startino))
  return 0;

 VAR_4 = FUNC_1(VAR_1->mp, ((void*)0), VAR_1->startino, VAR_1->flags,
   VAR_0, VAR_1->icount, &VAR_3);
 if (VAR_1->ocount > 0)
  VAR_4 = 0;

 return VAR_4;
}
