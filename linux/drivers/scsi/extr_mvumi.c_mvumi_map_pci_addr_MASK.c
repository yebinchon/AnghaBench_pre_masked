
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,void*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct pci_dev*,void**) ;
 void* FUNC_3 (struct pci_dev*,int,int ) ;
 int FUNC_4 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_3, void **VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (FUNC_4(VAR_3, VAR_5) & VAR_1) {
   VAR_4[VAR_5] = FUNC_3(VAR_3, VAR_5, 0);
   if (!VAR_4[VAR_5]) {
    FUNC_1(&VAR_3->dev, "failed to map Bar[%d]\n",
         VAR_5);
    FUNC_2(VAR_3, VAR_4);
    return -VAR_0;
   }
  } else
   VAR_4[VAR_5] = ((void*)0);

  FUNC_0(&VAR_3->dev, "Bar %d : %p.\n", VAR_5, VAR_4[VAR_5]);
 }

 return 0;
}
