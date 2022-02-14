
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,char*,int,char*) ;
 int FUNC_2 (struct pci_dev*,int ,int *) ;
 int FUNC_3 (struct pci_dev*,char*,int,char*) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5 = 1;
 u32 VAR_6;
 FUNC_2(VAR_2, VAR_1, &VAR_6);
 while (VAR_6 == ~0) {
  if (VAR_5 > VAR_4) {
   FUNC_3(VAR_2, "not ready %dms after %s; giving up\n",
     VAR_5 - 1, VAR_3);
   return -VAR_0;
  }

  if (VAR_5 > 1000)
   FUNC_1(VAR_2, "not ready %dms after %s; waiting\n",
     VAR_5 - 1, VAR_3);

  FUNC_0(VAR_5);
  VAR_5 *= 2;
  FUNC_2(VAR_2, VAR_1, &VAR_6);
 }

 if (VAR_5 > 1000)
  FUNC_1(VAR_2, "ready %dms after %s\n", VAR_5 - 1,
    VAR_3);

 return 0;
}
