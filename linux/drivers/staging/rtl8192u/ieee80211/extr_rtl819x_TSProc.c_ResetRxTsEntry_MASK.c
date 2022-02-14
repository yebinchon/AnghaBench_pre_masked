
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_ts_record {int rx_indicate_seq; int rx_timeout_indicate_seq; int rx_admitted_ba_record; int ts_common_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rx_ts_record *VAR_0)
{
 FUNC_1(&VAR_0->ts_common_info);
 VAR_0->rx_indicate_seq = 0xffff;
 VAR_0->rx_timeout_indicate_seq = 0xffff;
 FUNC_0(&VAR_0->rx_admitted_ba_record);
}
