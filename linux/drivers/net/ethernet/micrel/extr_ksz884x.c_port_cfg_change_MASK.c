
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ksz_port_info {int duplex; } ;
struct ksz_port {int dummy; } ;
struct ksz_hw {int features; int overrides; scalar_t__ io; int tx_cfg; scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct ksz_hw *VAR_4, struct ksz_port *VAR_5,
 struct ksz_port_info *VAR_6, u16 VAR_7)
{
 if ((VAR_4->features & VAR_1) &&
   !(VAR_4->overrides & VAR_3)) {
  u32 VAR_8 = VAR_4->tx_cfg;


  if (1 == VAR_6->duplex)
   VAR_4->tx_cfg &= ~VAR_0;
  if (VAR_4->enabled && VAR_8 != VAR_4->tx_cfg)
   FUNC_0(VAR_4->tx_cfg, VAR_4->io + VAR_2);
 }
}
