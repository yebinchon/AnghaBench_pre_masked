
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef void* u64 ;
struct be_aic_obj {int jiffies; void* tx_reqs_prev; void* rx_pkts_prev; } ;



__attribute__((used)) static void FUNC_0(struct be_aic_obj *VAR_0, u64 VAR_1, u64 VAR_2,
     ulong VAR_3)
{
 VAR_0->rx_pkts_prev = VAR_1;
 VAR_0->tx_reqs_prev = VAR_2;
 VAR_0->jiffies = VAR_3;
}
