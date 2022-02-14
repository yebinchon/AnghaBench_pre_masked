
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int dummy; } ;
struct super_block {int dummy; } ;
struct qc_info {int i_fieldmask; int i_rt_spc_warnlimit; int i_spc_warnlimit; int i_ino_warnlimit; int i_rt_spc_timelimit; int i_ino_timelimit; int i_spc_timelimit; } ;
struct qc_dqblk {int d_fieldmask; int d_rt_spc_warns; int d_spc_warns; int d_ino_warns; int d_rt_spc_timer; int d_ino_timer; int d_spc_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xfs_mount*) ;
 int FUNC_1 (struct xfs_mount*) ;
 struct xfs_mount* FUNC_2 (struct super_block*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct xfs_mount*,int ,int ,struct qc_dqblk*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(
 struct super_block *VAR_5,
 int VAR_6,
 struct qc_info *VAR_7)
{
 struct xfs_mount *VAR_8 = FUNC_2(VAR_5);
 struct qc_dqblk VAR_9;

 if (FUNC_3(VAR_5))
  return -VAR_2;
 if (!FUNC_1(VAR_8))
  return -VAR_1;
 if (!FUNC_0(VAR_8))
  return -VAR_3;
 if (VAR_7->i_fieldmask & ~VAR_4)
  return -VAR_0;
 if ((VAR_7->i_fieldmask & VAR_4) == 0)
  return 0;

 VAR_9.d_fieldmask = VAR_7->i_fieldmask;
 VAR_9.d_spc_timer = VAR_7->i_spc_timelimit;
 VAR_9.d_ino_timer = VAR_7->i_ino_timelimit;
 VAR_9.d_rt_spc_timer = VAR_7->i_rt_spc_timelimit;
 VAR_9.d_ino_warns = VAR_7->i_ino_warnlimit;
 VAR_9.d_spc_warns = VAR_7->i_spc_warnlimit;
 VAR_9.d_rt_spc_warns = VAR_7->i_rt_spc_warnlimit;

 return FUNC_4(VAR_8, 0, FUNC_5(VAR_6), &VAR_9);
}
