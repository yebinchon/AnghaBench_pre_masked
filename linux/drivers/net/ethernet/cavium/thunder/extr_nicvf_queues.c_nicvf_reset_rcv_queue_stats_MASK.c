
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_stat_mask; int tx_stat_mask; int rq_stat_mask; int sq_stat_mask; int msg; } ;
union nic_mbx {TYPE_1__ reset_stat; } ;
struct nicvf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static void FUNC_1(struct nicvf *VAR_1)
{
 union nic_mbx VAR_2 = {};


 VAR_2.reset_stat.msg = VAR_0;
 VAR_2.reset_stat.rx_stat_mask = 0x3FFF;
 VAR_2.reset_stat.tx_stat_mask = 0x1F;
 VAR_2.reset_stat.rq_stat_mask = 0xFFFF;
 VAR_2.reset_stat.sq_stat_mask = 0xFFFF;
 FUNC_0(VAR_1, &VAR_2);
}
