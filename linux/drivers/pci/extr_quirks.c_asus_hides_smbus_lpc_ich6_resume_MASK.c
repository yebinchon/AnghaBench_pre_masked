
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct pci_dev*,char*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_2)
{
 if (FUNC_1(!VAR_0 || !VAR_1))
  return;

 FUNC_0(VAR_1);
 VAR_1 = ((void*)0);
 FUNC_2(VAR_2, "Enabled ICH6/i801 SMBus device\n");
}
