
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmci_host {int cclk; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct mmci_host *VAR_0)
{







 if (VAR_0->cclk < 25000000)
  FUNC_1(30);
 else
  FUNC_0(120);
}
