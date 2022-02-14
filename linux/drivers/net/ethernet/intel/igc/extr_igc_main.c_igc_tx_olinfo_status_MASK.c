
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int olinfo_status; } ;
union igc_adv_tx_desc {TYPE_1__ read; } ;
typedef int u32 ;
struct igc_ring {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct igc_ring *VAR_5,
     union igc_adv_tx_desc *VAR_6,
     u32 VAR_7, unsigned int VAR_8)
{
 u32 VAR_9 = VAR_8 << VAR_0;


 VAR_9 |= (VAR_7 & VAR_3) *
     ((VAR_2 << 8) /
     VAR_3);


 VAR_9 |= (VAR_7 & VAR_4) *
     (((VAR_1 << 8)) /
     VAR_4);

 VAR_6->read.olinfo_status = FUNC_0(VAR_9);
}
