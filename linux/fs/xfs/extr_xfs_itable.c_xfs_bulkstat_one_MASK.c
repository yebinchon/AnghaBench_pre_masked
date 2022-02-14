
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_ibulk {int icount; int startino; int mp; } ;
struct xfs_bulkstat {int dummy; } ;
struct xfs_bstat_chunk {int buf; struct xfs_ibulk* breq; int formatter; } ;
typedef int bulkstat_one_fmt_pf ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int *,int ,struct xfs_bstat_chunk*) ;

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

 FUNC_0(VAR_3->icount == 1);

 VAR_5.buf = FUNC_2(sizeof(struct xfs_bulkstat),
   VAR_2);
 if (!VAR_5.buf)
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_3->mp, ((void*)0), VAR_3->startino, &VAR_5);

 FUNC_1(VAR_5.buf);





 if (VAR_6 == -VAR_0)
  VAR_6 = 0;

 return VAR_6;
}
