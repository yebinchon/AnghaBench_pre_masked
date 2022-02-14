
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ksz_hw {int features; int dev_count; int rx_cfg; scalar_t__ io; scalar_t__ ksz_switch; } ;
struct dev_info {int dev_rcv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct dev_info *VAR_7, struct ksz_hw *VAR_8)
{
 if (VAR_8->ksz_switch) {
  u32 VAR_9;

  VAR_9 = FUNC_0(VAR_8->io + VAR_1);
  if (VAR_8->features & VAR_2)
   VAR_9 |= VAR_3;
  else
   VAR_9 &= ~VAR_3;
  FUNC_1(VAR_9, VAR_8->io + VAR_1);
 }
 if (VAR_8->features & VAR_2) {
  VAR_8->rx_cfg |= VAR_0;
  VAR_7->dev_rcv = VAR_5;
 } else {
  VAR_8->rx_cfg &= ~VAR_0;
  if (VAR_8->dev_count > 1)
   VAR_7->dev_rcv = VAR_6;
  else
   VAR_7->dev_rcv = VAR_4;
 }
}
