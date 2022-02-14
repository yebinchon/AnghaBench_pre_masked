
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int valid; } ;
struct tx_ts_record {int add_ba_req_in_progress; int add_ba_req_delayed; TYPE_1__ tx_pending_ba_record; } ;
struct timer_list {int dummy; } ;
struct TYPE_4__ {int timer; } ;


 struct tx_ts_record* FUNC_0 (int ,struct timer_list*,int ) ;
 struct tx_ts_record* VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_1(struct timer_list *VAR_2)
{
 struct tx_ts_record *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1.timer);

 VAR_3->add_ba_req_in_progress = 0;
 VAR_3->add_ba_req_delayed = 1;
 VAR_3->tx_pending_ba_record.valid = 0;
}
