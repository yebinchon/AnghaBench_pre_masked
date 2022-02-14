
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct imgu_device {int lock; int mmu; int base; int css; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct imgu_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct imgu_device*) ;
 int FUNC_5 (int *) ;
 struct imgu_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 struct imgu_device *VAR_1 = FUNC_6(VAR_0);

 FUNC_7(&VAR_0->dev);
 FUNC_8(&VAR_0->dev);

 FUNC_4(VAR_1);
 FUNC_0(&VAR_1->css);
 FUNC_1(&VAR_0->dev, VAR_1->base);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1->mmu);
 FUNC_5(&VAR_1->lock);
}
