
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* m_quotainfo; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_8__ {int d_id; void* d_rtbtimer; scalar_t__ d_rtb_hardlimit; scalar_t__ d_rtbcount; scalar_t__ d_rtb_softlimit; scalar_t__ d_rtbwarns; void* d_itimer; scalar_t__ d_ino_hardlimit; scalar_t__ d_icount; scalar_t__ d_ino_softlimit; scalar_t__ d_iwarns; void* d_btimer; scalar_t__ d_blk_hardlimit; scalar_t__ d_bcount; scalar_t__ d_blk_softlimit; scalar_t__ d_bwarns; } ;
typedef TYPE_3__ xfs_disk_dquot_t ;
struct TYPE_6__ {scalar_t__ qi_rtbtimelimit; scalar_t__ qi_itimelimit; scalar_t__ qi_btimelimit; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 () ;

void
FUNC_4(
 xfs_mount_t *VAR_0,
 xfs_disk_dquot_t *VAR_1)
{
 FUNC_0(VAR_1->d_id);
 if (!VAR_1->d_btimer) {
  if ((VAR_1->d_blk_softlimit &&
       (FUNC_1(VAR_1->d_bcount) >
        FUNC_1(VAR_1->d_blk_softlimit))) ||
      (VAR_1->d_blk_hardlimit &&
       (FUNC_1(VAR_1->d_bcount) >
        FUNC_1(VAR_1->d_blk_hardlimit)))) {
   VAR_1->d_btimer = FUNC_2(FUNC_3() +
     VAR_0->m_quotainfo->qi_btimelimit);
  } else {
   VAR_1->d_bwarns = 0;
  }
 } else {
  if ((!VAR_1->d_blk_softlimit ||
       (FUNC_1(VAR_1->d_bcount) <=
        FUNC_1(VAR_1->d_blk_softlimit))) &&
      (!VAR_1->d_blk_hardlimit ||
      (FUNC_1(VAR_1->d_bcount) <=
       FUNC_1(VAR_1->d_blk_hardlimit)))) {
   VAR_1->d_btimer = 0;
  }
 }

 if (!VAR_1->d_itimer) {
  if ((VAR_1->d_ino_softlimit &&
       (FUNC_1(VAR_1->d_icount) >
        FUNC_1(VAR_1->d_ino_softlimit))) ||
      (VAR_1->d_ino_hardlimit &&
       (FUNC_1(VAR_1->d_icount) >
        FUNC_1(VAR_1->d_ino_hardlimit)))) {
   VAR_1->d_itimer = FUNC_2(FUNC_3() +
     VAR_0->m_quotainfo->qi_itimelimit);
  } else {
   VAR_1->d_iwarns = 0;
  }
 } else {
  if ((!VAR_1->d_ino_softlimit ||
       (FUNC_1(VAR_1->d_icount) <=
        FUNC_1(VAR_1->d_ino_softlimit))) &&
      (!VAR_1->d_ino_hardlimit ||
       (FUNC_1(VAR_1->d_icount) <=
        FUNC_1(VAR_1->d_ino_hardlimit)))) {
   VAR_1->d_itimer = 0;
  }
 }

 if (!VAR_1->d_rtbtimer) {
  if ((VAR_1->d_rtb_softlimit &&
       (FUNC_1(VAR_1->d_rtbcount) >
        FUNC_1(VAR_1->d_rtb_softlimit))) ||
      (VAR_1->d_rtb_hardlimit &&
       (FUNC_1(VAR_1->d_rtbcount) >
        FUNC_1(VAR_1->d_rtb_hardlimit)))) {
   VAR_1->d_rtbtimer = FUNC_2(FUNC_3() +
     VAR_0->m_quotainfo->qi_rtbtimelimit);
  } else {
   VAR_1->d_rtbwarns = 0;
  }
 } else {
  if ((!VAR_1->d_rtb_softlimit ||
       (FUNC_1(VAR_1->d_rtbcount) <=
        FUNC_1(VAR_1->d_rtb_softlimit))) &&
      (!VAR_1->d_rtb_hardlimit ||
       (FUNC_1(VAR_1->d_rtbcount) <=
        FUNC_1(VAR_1->d_rtb_hardlimit)))) {
   VAR_1->d_rtbtimer = 0;
  }
 }
}
