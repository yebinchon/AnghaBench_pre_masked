
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx88_core {int pci_irqmask; } ;
struct cx8800_dev {struct cx88_core* core; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cx8800_dev*) ;
 int FUNC_2 (struct cx88_core*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct cx8800_dev *VAR_5 = VAR_4;
 struct cx88_core *VAR_6 = VAR_5->core;
 u32 VAR_7;
 int VAR_8, VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {
  VAR_7 = FUNC_3(VAR_1) &
   (VAR_6->pci_irqmask | VAR_2);
  if (VAR_7 == 0)
   goto out;
  FUNC_4(VAR_1, VAR_7);
  VAR_9 = 1;

  if (VAR_7 & VAR_6->pci_irqmask)
   FUNC_2(VAR_6, VAR_7);
  if (VAR_7 & VAR_2)
   FUNC_1(VAR_5);
 }
 if (VAR_8 == 10) {
  FUNC_5("irq loop -- clearing mask\n");
  FUNC_4(VAR_0, 0);
 }

 out:
 return FUNC_0(VAR_9);
}
