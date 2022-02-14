
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx88_core {int pci_irqmask; } ;
struct cx88_audio_dev {struct cx88_core* core; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cx88_audio_dev*) ;
 int FUNC_2 (struct cx88_core*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int,char*,int,int,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_4, void *VAR_5)
{
 struct cx88_audio_dev *VAR_6 = VAR_5;
 struct cx88_core *VAR_7 = VAR_6->core;
 u32 VAR_8;
 int VAR_9, VAR_10 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_8 = FUNC_4(VAR_2) &
   (VAR_7->pci_irqmask | VAR_3);
  if (VAR_8 == 0)
   goto out;
  FUNC_6(3, "cx8801_irq loop %d/%d, status %x\n",
   VAR_9, VAR_0, VAR_8);
  VAR_10 = 1;
  FUNC_5(VAR_2, VAR_8);

  if (VAR_8 & VAR_7->pci_irqmask)
   FUNC_2(VAR_7, VAR_8);
  if (VAR_8 & VAR_3)
   FUNC_1(VAR_6);
 }

 if (VAR_9 == VAR_0) {
  FUNC_7("IRQ loop detected, disabling interrupts\n");
  FUNC_3(VAR_1, VAR_3);
 }

 out:
 return FUNC_0(VAR_10);
}
