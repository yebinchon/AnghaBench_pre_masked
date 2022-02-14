
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qc_dqblk {int d_fieldmask; int d_rt_spc_warns; int d_rt_spc_timer; void* d_rt_space; void* d_rt_spc_softlimit; void* d_rt_spc_hardlimit; int d_spc_warns; int d_ino_warns; int d_spc_timer; int d_ino_timer; int d_ino_count; void* d_space; int d_ino_softlimit; int d_ino_hardlimit; void* d_spc_softlimit; void* d_spc_hardlimit; } ;
struct fs_disk_quota {int d_fieldmask; int d_rtbwarns; int d_rtbtimer; int d_rtbcount; int d_rtb_softlimit; int d_rtb_hardlimit; int d_bwarns; int d_iwarns; int d_btimer; int d_itimer; int d_icount; int d_bcount; int d_ino_softlimit; int d_ino_hardlimit; int d_blk_softlimit; int d_blk_hardlimit; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct qc_dqblk *VAR_30, struct fs_disk_quota *VAR_31)
{
 VAR_30->d_spc_hardlimit = FUNC_0(VAR_31->d_blk_hardlimit);
 VAR_30->d_spc_softlimit = FUNC_0(VAR_31->d_blk_softlimit);
 VAR_30->d_ino_hardlimit = VAR_31->d_ino_hardlimit;
 VAR_30->d_ino_softlimit = VAR_31->d_ino_softlimit;
 VAR_30->d_space = FUNC_0(VAR_31->d_bcount);
 VAR_30->d_ino_count = VAR_31->d_icount;
 VAR_30->d_ino_timer = VAR_31->d_itimer;
 VAR_30->d_spc_timer = VAR_31->d_btimer;
 VAR_30->d_ino_warns = VAR_31->d_iwarns;
 VAR_30->d_spc_warns = VAR_31->d_bwarns;
 VAR_30->d_rt_spc_hardlimit = FUNC_0(VAR_31->d_rtb_hardlimit);
 VAR_30->d_rt_spc_softlimit = FUNC_0(VAR_31->d_rtb_softlimit);
 VAR_30->d_rt_space = FUNC_0(VAR_31->d_rtbcount);
 VAR_30->d_rt_spc_timer = VAR_31->d_rtbtimer;
 VAR_30->d_rt_spc_warns = VAR_31->d_rtbwarns;
 VAR_30->d_fieldmask = 0;
 if (VAR_31->d_fieldmask & VAR_7)
  VAR_30->d_fieldmask |= VAR_17;
 if (VAR_31->d_fieldmask & VAR_6)
  VAR_30->d_fieldmask |= VAR_16;
 if (VAR_31->d_fieldmask & VAR_2)
  VAR_30->d_fieldmask |= VAR_27;
 if (VAR_31->d_fieldmask & VAR_1)
  VAR_30->d_fieldmask |= VAR_26;
 if (VAR_31->d_fieldmask & VAR_12)
  VAR_30->d_fieldmask |= VAR_22;
 if (VAR_31->d_fieldmask & VAR_11)
  VAR_30->d_fieldmask |= VAR_21;
 if (VAR_31->d_fieldmask & VAR_3)
  VAR_30->d_fieldmask |= VAR_28;
 if (VAR_31->d_fieldmask & VAR_8)
  VAR_30->d_fieldmask |= VAR_18;
 if (VAR_31->d_fieldmask & VAR_13)
  VAR_30->d_fieldmask |= VAR_23;
 if (VAR_31->d_fieldmask & VAR_4)
  VAR_30->d_fieldmask |= VAR_29;
 if (VAR_31->d_fieldmask & VAR_9)
  VAR_30->d_fieldmask |= VAR_19;
 if (VAR_31->d_fieldmask & VAR_14)
  VAR_30->d_fieldmask |= VAR_24;
 if (VAR_31->d_fieldmask & VAR_0)
  VAR_30->d_fieldmask |= VAR_25;
 if (VAR_31->d_fieldmask & VAR_5)
  VAR_30->d_fieldmask |= VAR_15;
 if (VAR_31->d_fieldmask & VAR_10)
  VAR_30->d_fieldmask |= VAR_20;
}
