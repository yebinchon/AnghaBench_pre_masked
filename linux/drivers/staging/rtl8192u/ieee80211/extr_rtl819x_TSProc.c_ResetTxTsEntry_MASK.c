
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ts_record {int add_ba_req_in_progress; int add_ba_req_delayed; int using_ba; int tx_pending_ba_record; int tx_admitted_ba_record; scalar_t__ tx_cur_seq; int ts_common_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tx_ts_record *VAR_0)
{
 FUNC_1(&VAR_0->ts_common_info);
 VAR_0->tx_cur_seq = 0;
 VAR_0->add_ba_req_in_progress = 0;
 VAR_0->add_ba_req_delayed = 0;
 VAR_0->using_ba = 0;
 FUNC_0(&VAR_0->tx_admitted_ba_record);
 FUNC_0(&VAR_0->tx_pending_ba_record);
}
