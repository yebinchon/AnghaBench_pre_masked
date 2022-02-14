
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int tx_pause_frames; int rx_pause_frames; } ;
struct TYPE_4__ {TYPE_1__ macb; } ;
struct macb {scalar_t__ (* macb_reg_readl ) (struct macb*,int) ;TYPE_2__ hw_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct macb*,int) ;

__attribute__((used)) static void FUNC_2(struct macb *VAR_2)
{
 u32 *VAR_3 = &VAR_2->hw_stats.macb.rx_pause_frames;
 u32 *VAR_4 = &VAR_2->hw_stats.macb.tx_pause_frames + 1;
 int VAR_5 = VAR_0;

 FUNC_0((unsigned long)(VAR_4 - VAR_3 - 1) != (VAR_1 - VAR_0) / 4);

 for (; VAR_3 < VAR_4; VAR_3++, VAR_5 += 4)
  *VAR_3 += VAR_2->macb_reg_readl(VAR_2, VAR_5);
}
