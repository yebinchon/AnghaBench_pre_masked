
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qc_info {int i_fieldmask; int i_rt_spc_warnlimit; int i_spc_warnlimit; int i_ino_warnlimit; int i_rt_spc_timelimit; int i_ino_timelimit; int i_spc_timelimit; } ;
struct fs_disk_quota {int d_fieldmask; int d_rtbwarns; int d_bwarns; int d_iwarns; int d_rtbtimer; int d_itimer; int d_btimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct qc_info*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct qc_info *VAR_12,
           struct fs_disk_quota *VAR_13)
{
 FUNC_0(VAR_12, 0, sizeof(*VAR_12));
 VAR_12->i_spc_timelimit = VAR_13->d_btimer;
 VAR_12->i_ino_timelimit = VAR_13->d_itimer;
 VAR_12->i_rt_spc_timelimit = VAR_13->d_rtbtimer;
 VAR_12->i_ino_warnlimit = VAR_13->d_iwarns;
 VAR_12->i_spc_warnlimit = VAR_13->d_bwarns;
 VAR_12->i_rt_spc_warnlimit = VAR_13->d_rtbwarns;
 if (VAR_13->d_fieldmask & VAR_1)
  VAR_12->i_fieldmask |= VAR_11;
 if (VAR_13->d_fieldmask & VAR_3)
  VAR_12->i_fieldmask |= VAR_7;
 if (VAR_13->d_fieldmask & VAR_5)
  VAR_12->i_fieldmask |= VAR_9;
 if (VAR_13->d_fieldmask & VAR_0)
  VAR_12->i_fieldmask |= VAR_10;
 if (VAR_13->d_fieldmask & VAR_2)
  VAR_12->i_fieldmask |= VAR_6;
 if (VAR_13->d_fieldmask & VAR_4)
  VAR_12->i_fieldmask |= VAR_8;
}
