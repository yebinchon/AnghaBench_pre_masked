
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_ibulk {scalar_t__ ocount; int icount; int flags; int startino; int mp; } ;
struct xfs_bulkstat {int dummy; } ;
struct xfs_bstat_chunk {int buf; struct xfs_ibulk* breq; int formatter; } ;
typedef int bulkstat_one_fmt_pf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *,int ,int ,int ,int ,struct xfs_bstat_chunk*) ;

int
FUNC_4(
 struct xfs_ibulk *VAR_3,
 bulkstat_one_fmt_pf VAR_4)
{
 struct xfs_bstat_chunk VAR_5 = {
  .formatter = VAR_4,
  .breq = VAR_3,
 };
 int VAR_6;

 if (FUNC_2(VAR_3->mp, VAR_3->startino))
  return 0;

 VAR_5.buf = FUNC_1(sizeof(struct xfs_bulkstat),
   VAR_1);
 if (!VAR_5.buf)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_3->mp, ((void*)0), VAR_3->startino, VAR_3->flags,
   VAR_2, VAR_3->icount, &VAR_5);

 FUNC_0(VAR_5.buf);
 if (VAR_3->ocount > 0)
  VAR_6 = 0;

 return VAR_6;
}
