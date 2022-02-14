
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int,char*) ;
 int FUNC_6 (struct pci_dev*,int) ;

__attribute__((used)) static unsigned long FUNC_7(struct pci_dev *VAR_2,
            unsigned long VAR_3)
{





 if (VAR_3 != VAR_0)
  return VAR_3;
 if (FUNC_3(VAR_2) < 0)
  return VAR_3;
 if (FUNC_5(VAR_2, 2, "adv_pci_dio") == 0) {





  unsigned long VAR_4 = FUNC_6(VAR_2, 2) + 53;

  FUNC_1(0x05, VAR_4);
  if ((FUNC_0(VAR_4) & 0x07) == 0x02) {
   FUNC_1(0x02, VAR_4);
   if ((FUNC_0(VAR_4) & 0x07) == 0x05)
    VAR_3 = VAR_1;
  }
  FUNC_4(VAR_2, 2);
 }
 FUNC_2(VAR_2);
 return VAR_3;
}
