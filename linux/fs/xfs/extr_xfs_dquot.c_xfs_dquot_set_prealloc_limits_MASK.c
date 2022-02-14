
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int d_blk_softlimit; int d_blk_hardlimit; } ;
struct xfs_dquot {int q_prealloc_hi_wmark; int q_prealloc_lo_wmark; int* q_low_space; TYPE_1__ q_core; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;

void
FUNC_2(struct xfs_dquot *VAR_3)
{
 uint64_t VAR_4;

 VAR_3->q_prealloc_hi_wmark = FUNC_0(VAR_3->q_core.d_blk_hardlimit);
 VAR_3->q_prealloc_lo_wmark = FUNC_0(VAR_3->q_core.d_blk_softlimit);
 if (!VAR_3->q_prealloc_lo_wmark) {
  VAR_3->q_prealloc_lo_wmark = VAR_3->q_prealloc_hi_wmark;
  FUNC_1(VAR_3->q_prealloc_lo_wmark, 100);
  VAR_3->q_prealloc_lo_wmark *= 95;
 }

 VAR_4 = VAR_3->q_prealloc_hi_wmark;

 FUNC_1(VAR_4, 100);
 VAR_3->q_low_space[VAR_0] = VAR_4;
 VAR_3->q_low_space[VAR_1] = VAR_4 * 3;
 VAR_3->q_low_space[VAR_2] = VAR_4 * 5;
}
