
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flexcop_pci {int init_state; int * dma; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct flexcop_pci *VAR_1)
{
 if (VAR_1->init_state & VAR_0) {
  FUNC_0(&VAR_1->dma[0]);
  FUNC_0(&VAR_1->dma[1]);
 }
 VAR_1->init_state &= ~VAR_0;
}
