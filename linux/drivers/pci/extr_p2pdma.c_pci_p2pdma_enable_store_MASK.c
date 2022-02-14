
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int *,int *,char const*) ;
 int FUNC_1 (char const) ;
 int VAR_1 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,char*,char const*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (char*,int,char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*,int*) ;
 struct pci_dev* FUNC_8 (struct device*) ;

int FUNC_9(const char *VAR_2, struct pci_dev **VAR_3,
       bool *VAR_4)
{
 struct device *VAR_5;

 VAR_5 = FUNC_0(&VAR_1, ((void*)0), VAR_2);
 if (VAR_5) {
  *VAR_4 = 1;
  *VAR_3 = FUNC_8(VAR_5);

  if (!FUNC_4(*VAR_3)) {
   FUNC_3(*VAR_3,
    "PCI device has no peer-to-peer memory: %s\n",
    VAR_2);
   FUNC_2(*VAR_3);
   return -VAR_0;
  }

  return 0;
 } else if ((VAR_2[0] == '0' || VAR_2[0] == '1') && !FUNC_1(VAR_2[1])) {






 } else if (!FUNC_7(VAR_2, VAR_4)) {
  return 0;
 }

 FUNC_5("No such PCI device: %.*s\n", (int)FUNC_6(VAR_2, "\n"), VAR_2);
 return -VAR_0;
}
