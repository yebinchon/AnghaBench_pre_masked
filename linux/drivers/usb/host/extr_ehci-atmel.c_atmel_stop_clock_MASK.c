
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_ehci_priv {int clocked; int uclk; int iclk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct atmel_ehci_priv *VAR_0)
{
 if (!VAR_0->clocked)
  return;

 FUNC_0(VAR_0->iclk);
 FUNC_0(VAR_0->uclk);
 VAR_0->clocked = 0;
}
