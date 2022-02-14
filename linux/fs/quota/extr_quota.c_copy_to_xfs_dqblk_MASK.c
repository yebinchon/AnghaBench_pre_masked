
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qc_dqblk {int d_rt_spc_warns; int d_rt_spc_timer; int d_rt_space; int d_rt_spc_softlimit; int d_rt_spc_hardlimit; int d_spc_warns; int d_ino_warns; int d_spc_timer; int d_ino_timer; int d_ino_count; int d_space; int d_ino_softlimit; int d_ino_hardlimit; int d_spc_softlimit; int d_spc_hardlimit; } ;
struct fs_disk_quota {int d_rtbwarns; int d_rtbtimer; void* d_rtbcount; void* d_rtb_softlimit; void* d_rtb_hardlimit; int d_bwarns; int d_iwarns; int d_btimer; int d_itimer; int d_icount; void* d_bcount; int d_ino_softlimit; int d_ino_hardlimit; void* d_blk_softlimit; void* d_blk_hardlimit; int d_flags; int d_id; int d_version; } ;
typedef int qid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fs_disk_quota*,int ,int) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct fs_disk_quota *VAR_6, struct qc_dqblk *VAR_7,
         int VAR_8, qid_t VAR_9)
{
 FUNC_0(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->d_version = VAR_0;
 VAR_6->d_id = VAR_9;
 if (VAR_8 == VAR_5)
  VAR_6->d_flags = VAR_3;
 else if (VAR_8 == VAR_4)
  VAR_6->d_flags = VAR_2;
 else
  VAR_6->d_flags = VAR_1;
 VAR_6->d_blk_hardlimit = FUNC_1(VAR_7->d_spc_hardlimit);
 VAR_6->d_blk_softlimit = FUNC_1(VAR_7->d_spc_softlimit);
 VAR_6->d_ino_hardlimit = VAR_7->d_ino_hardlimit;
 VAR_6->d_ino_softlimit = VAR_7->d_ino_softlimit;
 VAR_6->d_bcount = FUNC_1(VAR_7->d_space);
 VAR_6->d_icount = VAR_7->d_ino_count;
 VAR_6->d_itimer = VAR_7->d_ino_timer;
 VAR_6->d_btimer = VAR_7->d_spc_timer;
 VAR_6->d_iwarns = VAR_7->d_ino_warns;
 VAR_6->d_bwarns = VAR_7->d_spc_warns;
 VAR_6->d_rtb_hardlimit = FUNC_1(VAR_7->d_rt_spc_hardlimit);
 VAR_6->d_rtb_softlimit = FUNC_1(VAR_7->d_rt_spc_softlimit);
 VAR_6->d_rtbcount = FUNC_1(VAR_7->d_rt_space);
 VAR_6->d_rtbtimer = VAR_7->d_rt_spc_timer;
 VAR_6->d_rtbwarns = VAR_7->d_rt_spc_warns;
}
