
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_trans_res {int tr_logcount; int tr_logres; int member_0; } ;
struct TYPE_2__ {int sb_logsunit; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct xfs_mount*,int) ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct xfs_mount*,int ) ;
 int FUNC_4 (struct xfs_mount*,struct xfs_trans_res*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

int
FUNC_6(
 struct xfs_mount *VAR_2)
{
 struct xfs_trans_res VAR_3 = {0};
 int VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;

 FUNC_4(VAR_2, &VAR_3);

 VAR_4 = FUNC_3(VAR_2, VAR_3.tr_logres);
 if (VAR_3.tr_logcount > 1)
  VAR_4 *= VAR_3.tr_logcount;

 if (FUNC_5(&VAR_2->m_sb) && VAR_2->m_sb.sb_logsunit > 1)
  VAR_6 = FUNC_0(VAR_2->m_sb.sb_logsunit);
 if (VAR_6) {
  VAR_5 = FUNC_2(FUNC_0(VAR_4), VAR_6) +
         2 * VAR_6;
 } else
  VAR_5 = FUNC_0(VAR_4) + 2 * VAR_0;
 VAR_5 *= VAR_1;

 return FUNC_1(VAR_2, VAR_5);
}
