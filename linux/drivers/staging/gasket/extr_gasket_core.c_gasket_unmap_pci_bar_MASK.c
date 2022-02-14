
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct gasket_internal_desc {struct gasket_driver_desc* driver_desc; } ;
struct gasket_driver_desc {TYPE_1__* bar_descriptions; } ;
struct gasket_dev {int pci_dev; int dev; TYPE_2__* bar_data; struct gasket_internal_desc* internal_desc; } ;
struct TYPE_4__ {int * virt_base; } ;
struct TYPE_3__ {scalar_t__ size; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct gasket_dev *VAR_1, int VAR_2)
{
 ulong VAR_3, VAR_4;
 struct gasket_internal_desc *VAR_5 = VAR_1->internal_desc;
 const struct gasket_driver_desc *VAR_6 =
  VAR_5->driver_desc;

 if (VAR_6->bar_descriptions[VAR_2].size == 0 ||
     !VAR_1->bar_data[VAR_2].virt_base)
  return;

 if (VAR_6->bar_descriptions[VAR_2].type != VAR_0)
  return;

 FUNC_1(VAR_1->bar_data[VAR_2].virt_base);
 VAR_1->bar_data[VAR_2].virt_base = ((void*)0);

 VAR_3 = FUNC_3(VAR_1->pci_dev, VAR_2);
 if (!VAR_3) {
  FUNC_0(VAR_1->dev, "cannot get PCI BAR%u base address\n",
   VAR_2);
  return;
 }

 VAR_4 = FUNC_2(VAR_1->pci_dev, VAR_2);
 FUNC_4(VAR_3, VAR_4);
}
