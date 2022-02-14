
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct pci_dev*,int ) ;

__attribute__((used)) static inline int FUNC_3(struct pci_dev *VAR_1, void *VAR_2)
{
 FUNC_0(&VAR_1->dev);
 FUNC_2(VAR_1, VAR_0);
 FUNC_1(&VAR_1->dev);

 return 0;
}
