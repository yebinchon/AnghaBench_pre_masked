
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_scrub {int mp; struct xchk_fscounters* buf; } ;
struct xfs_inode {int dummy; } ;
struct xchk_fscounters {int icount_max; int icount_min; } ;


 int VAR_0 ;
 struct xchk_fscounters* FUNC_0 (int,int ) ;
 int FUNC_1 (struct xfs_scrub*) ;
 int FUNC_2 (struct xfs_scrub*) ;
 int FUNC_3 (struct xfs_scrub*,int ) ;
 int FUNC_4 (int ,int *,int *) ;

int
FUNC_5(
 struct xfs_scrub *VAR_1,
 struct xfs_inode *VAR_2)
{
 struct xchk_fscounters *VAR_3;
 int VAR_4;

 VAR_1->buf = FUNC_0(sizeof(struct xchk_fscounters), 0);
 if (!VAR_1->buf)
  return -VAR_0;
 VAR_3 = VAR_1->buf;

 FUNC_4(VAR_1->mp, &VAR_3->icount_min, &VAR_3->icount_max);


 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4)
  return VAR_4;






 FUNC_2(VAR_1);

 return FUNC_3(VAR_1, 0);
}
