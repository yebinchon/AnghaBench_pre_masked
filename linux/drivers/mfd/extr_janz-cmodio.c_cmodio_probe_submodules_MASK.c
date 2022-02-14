
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; int dev; } ;
struct cmodio_device {int cells; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct cmodio_device*,char*,unsigned int,int) ;
 int FUNC_1 (int *,char*,int,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int ,unsigned int,int *,int ,int *) ;
 char** VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(struct cmodio_device *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;
 unsigned int VAR_5 = 0;
 char *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = VAR_1[VAR_7];
  if (!FUNC_4(VAR_6, "") || !FUNC_4(VAR_6, "empty"))
   continue;

  FUNC_1(&VAR_3->pdev->dev, "MODULbus %d: name %s\n", VAR_7, VAR_6);
  FUNC_0(VAR_3, VAR_6, VAR_5, VAR_7);
  VAR_5++;
 }


 if (VAR_5 == 0) {
  FUNC_2(&VAR_3->pdev->dev, "no MODULbus modules specified, "
       "please set the ``modules'' kernel "
       "parameter according to your "
       "hardware configuration\n");
  return -VAR_0;
 }

 return FUNC_3(&VAR_4->dev, 0, VAR_3->cells,
          VAR_5, ((void*)0), VAR_4->irq, ((void*)0));
}
