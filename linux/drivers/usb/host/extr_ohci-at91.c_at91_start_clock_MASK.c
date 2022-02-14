
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohci_at91_priv {int clocked; int fclk; int iclk; int hclk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct ohci_at91_priv *VAR_0)
{
 if (VAR_0->clocked)
  return;

 FUNC_1(VAR_0->fclk, 48000000);
 FUNC_0(VAR_0->hclk);
 FUNC_0(VAR_0->iclk);
 FUNC_0(VAR_0->fclk);
 VAR_0->clocked = 1;
}
