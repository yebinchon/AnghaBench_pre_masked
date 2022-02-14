
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d_blk_hardlimit; } ;
struct xfs_dquot {scalar_t__ q_res_bcount; scalar_t__* q_low_space; TYPE_1__ q_core; } ;
typedef scalar_t__ int64_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct xfs_dquot *VAR_1)
{
 int64_t VAR_2;

 VAR_2 = FUNC_0(VAR_1->q_core.d_blk_hardlimit) - VAR_1->q_res_bcount;
 if (VAR_2 < VAR_1->q_low_space[VAR_0])
  return 1;

 return 0;
}
