
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {unsigned int d3_delay; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1)
{
 unsigned int VAR_2 = VAR_1->d3_delay;

 if (VAR_2 < VAR_0)
  VAR_2 = VAR_0;

 if (VAR_2)
  FUNC_0(VAR_2);
}
