
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_1)
{
 int VAR_2 = 0;

 FUNC_2(VAR_1);

 if (VAR_0) {
  if (FUNC_1(&VAR_1->dev, FUNC_0(64)))
   VAR_2 = FUNC_1(&VAR_1->dev, FUNC_0(32));
 } else
  VAR_2 = FUNC_1(&VAR_1->dev, FUNC_0(32));

 return VAR_2;
}
