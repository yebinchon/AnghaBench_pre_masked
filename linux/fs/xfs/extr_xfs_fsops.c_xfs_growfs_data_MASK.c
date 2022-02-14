
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int sb_imax_pct; int sb_dblocks; } ;
struct xfs_mount {int m_growlock; int m_generation; TYPE_1__ m_sb; } ;
struct xfs_growfs_data {int imaxpct; int newblocks; } ;
struct TYPE_4__ {scalar_t__ maxicount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct xfs_mount*) ;
 scalar_t__ FUNC_1 (struct xfs_mount*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xfs_mount*,struct xfs_growfs_data*) ;
 int FUNC_7 (struct xfs_mount*,int) ;
 int FUNC_8 (struct xfs_mount*) ;

int
FUNC_9(
 struct xfs_mount *VAR_3,
 struct xfs_growfs_data *VAR_4)
{
 int VAR_5 = 0;

 if (!FUNC_2(VAR_0))
  return -VAR_1;
 if (!FUNC_4(&VAR_3->m_growlock))
  return -VAR_2;


 if (VAR_4->imaxpct != VAR_3->m_sb.sb_imax_pct) {
  VAR_5 = FUNC_7(VAR_3, VAR_4->imaxpct);
  if (VAR_5)
   goto out_error;
 }

 if (VAR_4->newblocks != VAR_3->m_sb.sb_dblocks) {
  VAR_5 = FUNC_6(VAR_3, VAR_4);
  if (VAR_5)
   goto out_error;
 }


 if (VAR_3->m_sb.sb_imax_pct) {
  uint64_t VAR_6 = VAR_3->m_sb.sb_dblocks * VAR_3->m_sb.sb_imax_pct;
  FUNC_3(VAR_6, 100);
  FUNC_0(VAR_3)->maxicount = FUNC_1(VAR_3, VAR_6);
 } else
  FUNC_0(VAR_3)->maxicount = 0;


 VAR_5 = FUNC_8(VAR_3);

out_error:





 VAR_3->m_generation++;
 FUNC_5(&VAR_3->m_growlock);
 return VAR_5;
}
