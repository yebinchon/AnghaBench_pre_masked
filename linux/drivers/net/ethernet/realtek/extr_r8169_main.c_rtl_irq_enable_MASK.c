
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int irq_enabled; int irq_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl8169_private*,int ,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ,int ) ;
 scalar_t__ FUNC_2 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_3(struct rtl8169_private *VAR_2)
{
 VAR_2->irq_enabled = 1;
 if (FUNC_2(VAR_2))
  FUNC_1(VAR_2, VAR_1, VAR_2->irq_mask);
 else
  FUNC_0(VAR_2, VAR_0, VAR_2->irq_mask);
}
