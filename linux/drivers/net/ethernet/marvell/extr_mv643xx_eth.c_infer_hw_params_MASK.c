
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv643xx_eth_shared_private {int extended_rx_coal_limit; int tx_bw_control; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mv643xx_eth_shared_private *VAR_6)
{





 FUNC_1(0x02000000, VAR_6->base + 0x0400 + VAR_0);
 if (FUNC_0(VAR_6->base + 0x0400 + VAR_0) & 0x02000000)
  VAR_6->extended_rx_coal_limit = 1;
 else
  VAR_6->extended_rx_coal_limit = 0;






 FUNC_1(1, VAR_6->base + 0x0400 + VAR_4);
 if (FUNC_0(VAR_6->base + 0x0400 + VAR_4) & 1) {
  VAR_6->tx_bw_control = VAR_2;
 } else {
  FUNC_1(7, VAR_6->base + 0x0400 + VAR_5);
  if (FUNC_0(VAR_6->base + 0x0400 + VAR_5) & 7)
   VAR_6->tx_bw_control = VAR_3;
  else
   VAR_6->tx_bw_control = VAR_1;
 }
}
