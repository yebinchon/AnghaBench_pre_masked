
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int tx_collisions; int tx_late_collisions; int tx_excessive_collisions; int tx_deferred; int tx_first_collisions; int tx_underflows; int tx_max_pkt_errs; int rcvd_pkts_dropped; int rx_overflows; int rx_crc_errs; int rx_other_errs; int rx_length_errs; int rx_align_errs; int rx_code_violations; } ;
struct et131x_adapter {TYPE_3__ stats; TYPE_2__* regs; } ;
struct TYPE_4__ {int carry_reg2; int carry_reg1; } ;
struct TYPE_5__ {TYPE_1__ macstat; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct et131x_adapter *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;




 VAR_3 = FUNC_0(&VAR_2->regs->macstat.carry_reg1);
 VAR_4 = FUNC_0(&VAR_2->regs->macstat.carry_reg2);

 FUNC_1(VAR_3, &VAR_2->regs->macstat.carry_reg1);
 FUNC_1(VAR_4, &VAR_2->regs->macstat.carry_reg2);







 if (VAR_3 & (1 << 14))
  VAR_2->stats.rx_code_violations += VAR_1;
 if (VAR_3 & (1 << 8))
  VAR_2->stats.rx_align_errs += VAR_0;
 if (VAR_3 & (1 << 7))
  VAR_2->stats.rx_length_errs += VAR_1;
 if (VAR_3 & (1 << 2))
  VAR_2->stats.rx_other_errs += VAR_1;
 if (VAR_3 & (1 << 6))
  VAR_2->stats.rx_crc_errs += VAR_1;
 if (VAR_3 & (1 << 3))
  VAR_2->stats.rx_overflows += VAR_1;
 if (VAR_3 & (1 << 0))
  VAR_2->stats.rcvd_pkts_dropped += VAR_1;
 if (VAR_4 & (1 << 16))
  VAR_2->stats.tx_max_pkt_errs += VAR_0;
 if (VAR_4 & (1 << 15))
  VAR_2->stats.tx_underflows += VAR_0;
 if (VAR_4 & (1 << 6))
  VAR_2->stats.tx_first_collisions += VAR_0;
 if (VAR_4 & (1 << 8))
  VAR_2->stats.tx_deferred += VAR_0;
 if (VAR_4 & (1 << 5))
  VAR_2->stats.tx_excessive_collisions += VAR_0;
 if (VAR_4 & (1 << 4))
  VAR_2->stats.tx_late_collisions += VAR_0;
 if (VAR_4 & (1 << 2))
  VAR_2->stats.tx_collisions += VAR_0;
}
