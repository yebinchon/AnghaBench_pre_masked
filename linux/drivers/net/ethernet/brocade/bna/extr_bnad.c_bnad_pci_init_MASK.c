
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct bnad {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static int
FUNC_7(struct bnad *VAR_1,
       struct pci_dev *VAR_2, bool *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_5(VAR_2, VAR_0);
 if (VAR_4)
  goto disable_device;
 if (!FUNC_1(&VAR_2->dev, FUNC_0(64))) {
  *VAR_3 = 1;
 } else {
  VAR_4 = FUNC_1(&VAR_2->dev, FUNC_0(32));
  if (VAR_4)
   goto release_regions;
  *VAR_3 = 0;
 }
 FUNC_6(VAR_2);
 return 0;

release_regions:
 FUNC_4(VAR_2);
disable_device:
 FUNC_2(VAR_2);

 return VAR_4;
}
