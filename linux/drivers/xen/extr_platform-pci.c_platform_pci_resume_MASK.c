
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_2)
{
 int VAR_3;

 if (VAR_1)
  return 0;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3) {
  FUNC_0(&VAR_2->dev, "platform_pci_resume failure!\n");
  return VAR_3;
 }
 return 0;
}
