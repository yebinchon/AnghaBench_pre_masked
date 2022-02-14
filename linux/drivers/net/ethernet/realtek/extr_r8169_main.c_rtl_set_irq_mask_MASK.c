
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int irq_mask; scalar_t__ mac_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct rtl8169_private *VAR_7)
{
 VAR_7->irq_mask = VAR_1 | VAR_0;

 if (VAR_7->mac_version <= VAR_2)
  VAR_7->irq_mask |= VAR_6 | VAR_5 | VAR_4;
 else if (VAR_7->mac_version == VAR_3)

  VAR_7->irq_mask |= VAR_4;
 else
  VAR_7->irq_mask |= VAR_5;
}
