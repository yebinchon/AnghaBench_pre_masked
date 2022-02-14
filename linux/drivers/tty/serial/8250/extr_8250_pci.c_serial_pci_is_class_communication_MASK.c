
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct pci_dev *VAR_4)
{




 if ((((VAR_4->class >> 8) != VAR_3) &&
      ((VAR_4->class >> 8) != VAR_2) &&
      ((VAR_4->class >> 8) != VAR_1)) ||
     (VAR_4->class & 0xff) > 6)
  return -VAR_0;

 return 0;
}
