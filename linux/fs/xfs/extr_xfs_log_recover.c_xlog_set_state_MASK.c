
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_daddr_t ;
struct xlog_rec_header {int h_lsn; int h_tail_lsn; int h_cycle; } ;
struct TYPE_4__ {int grant; } ;
struct TYPE_3__ {int grant; } ;
struct xlog {int l_curr_block; int l_curr_cycle; TYPE_2__ l_write_head; TYPE_1__ l_reserve_head; int l_last_sync_lsn; int l_tail_lsn; scalar_t__ l_prev_block; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_5(
 struct xlog *VAR_0,
 xfs_daddr_t VAR_1,
 struct xlog_rec_header *VAR_2,
 xfs_daddr_t VAR_3,
 bool VAR_4)
{
 VAR_0->l_prev_block = VAR_3;
 VAR_0->l_curr_block = (int)VAR_1;
 VAR_0->l_curr_cycle = FUNC_2(VAR_2->h_cycle);
 if (VAR_4)
  VAR_0->l_curr_cycle++;
 FUNC_1(&VAR_0->l_tail_lsn, FUNC_3(VAR_2->h_tail_lsn));
 FUNC_1(&VAR_0->l_last_sync_lsn, FUNC_3(VAR_2->h_lsn));
 FUNC_4(&VAR_0->l_reserve_head.grant, VAR_0->l_curr_cycle,
     FUNC_0(VAR_0->l_curr_block));
 FUNC_4(&VAR_0->l_write_head.grant, VAR_0->l_curr_cycle,
     FUNC_0(VAR_0->l_curr_block));
}
