
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*,int *) ;

__attribute__((used)) static bool FUNC_1(struct pci_dev *VAR_0)
{
 u8 VAR_1;

 if (!FUNC_0(&VAR_0->dev, "IMR_VALID", &VAR_1))
  return !!VAR_1;

 return 1;
}
