
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mv643xx_eth_private {int t_clk; TYPE_1__* shared; } ;
struct TYPE_2__ {scalar_t__ extended_rx_coal_limit; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct mv643xx_eth_private*,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct mv643xx_eth_private *VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_1, VAR_0);
 u64 VAR_3;

 if (VAR_1->shared->extended_rx_coal_limit)
  VAR_3 = ((VAR_2 & 0x02000000) >> 10) | ((VAR_2 & 0x003fff80) >> 7);
 else
  VAR_3 = (VAR_2 & 0x003fff00) >> 8;

 VAR_3 *= 64000000;
 VAR_3 += VAR_1->t_clk / 2;
 FUNC_0(VAR_3, VAR_1->t_clk);

 return (unsigned int)VAR_3;
}
