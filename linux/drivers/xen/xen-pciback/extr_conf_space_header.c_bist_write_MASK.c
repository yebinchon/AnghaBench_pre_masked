
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_1, int VAR_2, u8 VAR_3, void *VAR_4)
{
 u8 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_5);
 if (VAR_6)
  goto out;

 if ((VAR_5 & ~VAR_0) == (VAR_3 & ~VAR_0)
     || VAR_3 == VAR_0)
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);

out:
 return VAR_6;
}
