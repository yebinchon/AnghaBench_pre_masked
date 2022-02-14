
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qc_dqblk {int d_fieldmask; int d_ino_timer; int d_spc_timer; int d_ino_count; int d_ino_softlimit; int d_ino_hardlimit; int d_space; void* d_spc_softlimit; void* d_spc_hardlimit; } ;
struct if_dqblk {int dqb_valid; int dqb_itime; int dqb_btime; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; int dqb_curspace; int dqb_bsoftlimit; int dqb_bhardlimit; } ;


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
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct qc_dqblk *VAR_14, struct if_dqblk *VAR_15)
{
 VAR_14->d_spc_hardlimit = FUNC_0(VAR_15->dqb_bhardlimit);
 VAR_14->d_spc_softlimit = FUNC_0(VAR_15->dqb_bsoftlimit);
 VAR_14->d_space = VAR_15->dqb_curspace;
 VAR_14->d_ino_hardlimit = VAR_15->dqb_ihardlimit;
 VAR_14->d_ino_softlimit = VAR_15->dqb_isoftlimit;
 VAR_14->d_ino_count = VAR_15->dqb_curinodes;
 VAR_14->d_spc_timer = VAR_15->dqb_btime;
 VAR_14->d_ino_timer = VAR_15->dqb_itime;

 VAR_14->d_fieldmask = 0;
 if (VAR_15->dqb_valid & VAR_8)
  VAR_14->d_fieldmask |= VAR_6 | VAR_5;
 if (VAR_15->dqb_valid & VAR_13)
  VAR_14->d_fieldmask |= VAR_4;
 if (VAR_15->dqb_valid & VAR_10)
  VAR_14->d_fieldmask |= VAR_2 | VAR_1;
 if (VAR_15->dqb_valid & VAR_11)
  VAR_14->d_fieldmask |= VAR_0;
 if (VAR_15->dqb_valid & VAR_9)
  VAR_14->d_fieldmask |= VAR_7;
 if (VAR_15->dqb_valid & VAR_12)
  VAR_14->d_fieldmask |= VAR_3;
}
