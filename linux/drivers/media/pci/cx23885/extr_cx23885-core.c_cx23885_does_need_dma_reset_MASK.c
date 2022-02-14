
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_3__ {int dev; int vendor; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static bool FUNC_3(void)
{
 int VAR_2;
 struct pci_dev *VAR_3 = ((void*)0);

 if (VAR_1 == 0)
  return 0;
 else if (VAR_1 == 2)
  return 1;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_3 = FUNC_2(VAR_0[VAR_2].vendor,
          VAR_0[VAR_2].dev, ((void*)0));
  if (VAR_3) {
   FUNC_1(VAR_3);
   return 1;
  }
 }
 return 0;
}
