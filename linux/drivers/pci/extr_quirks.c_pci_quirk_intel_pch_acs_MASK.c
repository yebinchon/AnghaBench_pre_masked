
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_3, u16 VAR_4)
{
 u16 VAR_5 = VAR_3->dev_flags & VAR_2 ?
      VAR_1 : 0;

 if (!FUNC_0(VAR_3))
  return -VAR_0;

 return VAR_4 & ~VAR_5 ? 0 : 1;
}
