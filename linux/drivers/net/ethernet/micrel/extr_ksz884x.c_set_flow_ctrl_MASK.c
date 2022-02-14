
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ksz_hw {scalar_t__ io; int tx_cfg; int rx_cfg; scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ksz_hw *VAR_4, int VAR_5, int VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 VAR_7 = VAR_4->rx_cfg;
 VAR_8 = VAR_4->tx_cfg;
 if (VAR_5)
  VAR_4->rx_cfg |= VAR_0;
 else
  VAR_4->rx_cfg &= ~VAR_0;
 if (VAR_6)
  VAR_4->tx_cfg |= VAR_1;
 else
  VAR_4->tx_cfg &= ~VAR_1;
 if (VAR_4->enabled) {
  if (VAR_7 != VAR_4->rx_cfg)
   FUNC_0(VAR_4->rx_cfg, VAR_4->io + VAR_2);
  if (VAR_8 != VAR_4->tx_cfg)
   FUNC_0(VAR_4->tx_cfg, VAR_4->io + VAR_3);
 }
}
