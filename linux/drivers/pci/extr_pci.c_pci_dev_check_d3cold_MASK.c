
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; int d3cold_allowed; scalar_t__ no_d3cold; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_1, void *VAR_2)
{
 bool *VAR_3 = VAR_2;

 if (
     VAR_1->no_d3cold || !VAR_1->d3cold_allowed ||


     (FUNC_0(&VAR_1->dev) &&
      !FUNC_1(VAR_1, VAR_0)) ||


     !FUNC_2(VAR_1))

  *VAR_3 = 0;

 return !*VAR_3;
}
