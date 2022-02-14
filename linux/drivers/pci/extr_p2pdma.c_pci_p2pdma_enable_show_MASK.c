
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (char*,char*,...) ;

ssize_t FUNC_2(char *VAR_0, struct pci_dev *VAR_1,
          bool VAR_2)
{
 if (!VAR_2)
  return FUNC_1(VAR_0, "0\n");

 if (!VAR_1)
  return FUNC_1(VAR_0, "1\n");

 return FUNC_1(VAR_0, "%s\n", FUNC_0(VAR_1));
}
