
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;

__attribute__((used)) static void *FUNC_3(struct pci_dev *VAR_1, int VAR_2)
{
 int VAR_3;
 u16 VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_2, &VAR_4);
 if (VAR_3)
  goto out;

 if (VAR_4 & VAR_0) {
  VAR_4 &= ~VAR_0;
  VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_4);
 }

out:
 return FUNC_0(VAR_3);
}
