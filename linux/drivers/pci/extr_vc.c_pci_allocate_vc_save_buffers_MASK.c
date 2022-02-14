
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_3__ {int name; int id; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct pci_dev*,int ,int) ;
 int FUNC_2 (struct pci_dev*,char*,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int,int *,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_5(struct pci_dev *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  int VAR_3, VAR_4 = FUNC_3(VAR_1, VAR_0[VAR_2].id);

  if (!VAR_4)
   continue;

  VAR_3 = FUNC_4(VAR_1, VAR_4, ((void*)0), 0);
  if (FUNC_1(VAR_1, VAR_0[VAR_2].id, VAR_3))
   FUNC_2(VAR_1, "unable to preallocate %s save buffer\n",
    VAR_0[VAR_2].name);
 }
}
