
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int,int,int ) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct pci_dev*,int*,int) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_4, int *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_5[VAR_8] = -1;






 if ((VAR_6 & VAR_2) && FUNC_2())
  goto legacy_irq;


 if (FUNC_3(VAR_4, VAR_5, VAR_6) == 0)
  return 0;

legacy_irq:

 VAR_7 = FUNC_0(VAR_4, 1, 1, VAR_3);
 if (VAR_7 < 0)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_5[VAR_8] = FUNC_1(VAR_4, 0);

 return 0;
}
