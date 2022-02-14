
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int highest_queued_prio; int tx_pkts_queued; TYPE_1__* tid_tbl_ptr; } ;
struct mwifiex_private {TYPE_2__ wmm; } ;
struct TYPE_3__ {int ra_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mwifiex_private*,int *) ;

__attribute__((used)) static void FUNC_2(struct mwifiex_private *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_1(VAR_2, &VAR_2->wmm.tid_tbl_ptr[VAR_3].
               ra_list);

 FUNC_0(&VAR_2->wmm.tx_pkts_queued, 0);
 FUNC_0(&VAR_2->wmm.highest_queued_prio, VAR_0);
}
