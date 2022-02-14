
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int last_hibern8_exit_tstamp; scalar_t__ hibern8_exit_cnt; } ;
struct ufs_hba {scalar_t__ req_abort_count; TYPE_1__ ufs_stats; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ufs_hba *VAR_0)
{
 VAR_0->ufs_stats.hibern8_exit_cnt = 0;
 VAR_0->ufs_stats.last_hibern8_exit_tstamp = FUNC_0(0, 0);
 VAR_0->req_abort_count = 0;
}
