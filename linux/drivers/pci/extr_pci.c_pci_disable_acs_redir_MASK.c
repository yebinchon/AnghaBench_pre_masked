
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,char const*,char const**) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,char*) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_5 (struct pci_dev*,char*) ;
 int FUNC_6 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_6)
{
 int VAR_7 = 0;
 const char *VAR_8;
 int VAR_9;
 u16 VAR_10;

 if (!VAR_5)
  return;

 VAR_8 = VAR_5;
 while (*VAR_8) {
  VAR_7 = FUNC_1(VAR_6, VAR_8, &VAR_8);
  if (VAR_7 < 0) {
   FUNC_7("PCI: Can't parse disable_acs_redir parameter: %s\n",
         VAR_5);

   break;
  } else if (VAR_7 == 1) {

   break;
  }

  if (*VAR_8 != ';' && *VAR_8 != ',') {

   break;
  }
  VAR_8++;
 }

 if (VAR_7 != 1)
  return;

 if (!FUNC_0(VAR_6))
  return;

 VAR_9 = FUNC_2(VAR_6, VAR_4);
 if (!VAR_9) {
  FUNC_5(VAR_6, "cannot disable ACS redirect for this hardware as it does not have ACS capabilities\n");
  return;
 }

 FUNC_4(VAR_6, VAR_9 + VAR_1, &VAR_10);


 VAR_10 &= ~(VAR_3 | VAR_0 | VAR_2);

 FUNC_6(VAR_6, VAR_9 + VAR_1, VAR_10);

 FUNC_3(VAR_6, "disabled ACS redirect\n");
}
