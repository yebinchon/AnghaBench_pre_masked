
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fhci_hcd {int * usb_irq_stat; } ;



void FUNC_0(struct fhci_hcd *VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_1 == -1) {
  VAR_0->usb_irq_stat[12]++;
  return;
 }

 for (VAR_2 = 0; VAR_2 < 12; ++VAR_2) {
  if (VAR_1 & (1 << VAR_2))
   VAR_0->usb_irq_stat[VAR_2]++;
 }
}
