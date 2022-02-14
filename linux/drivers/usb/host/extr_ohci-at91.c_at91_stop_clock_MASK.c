
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohci_at91_priv {int clocked; int hclk; int iclk; int fclk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ohci_at91_priv *VAR_0)
{
 if (!VAR_0->clocked)
  return;

 FUNC_0(VAR_0->fclk);
 FUNC_0(VAR_0->iclk);
 FUNC_0(VAR_0->hclk);
 VAR_0->clocked = 0;
}
