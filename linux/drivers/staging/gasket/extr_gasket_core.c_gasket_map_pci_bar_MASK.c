
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct gasket_internal_desc {struct gasket_driver_desc* driver_desc; } ;
struct gasket_driver_desc {TYPE_1__* bar_descriptions; } ;
struct TYPE_7__ {int name; } ;
struct gasket_dev {TYPE_3__* bar_data; TYPE_4__* pci_dev; int dev; TYPE_2__ dev_info; struct gasket_internal_desc* internal_desc; } ;
struct TYPE_9__ {int dev; int * resource; } ;
struct TYPE_8__ {scalar_t__ length_bytes; scalar_t__ phys_base; int virt_base; } ;
struct TYPE_6__ {scalar_t__ size; scalar_t__ type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_10(struct gasket_dev *VAR_3, int VAR_4)
{
 struct gasket_internal_desc *VAR_5 = VAR_3->internal_desc;
 const struct gasket_driver_desc *VAR_6 =
  VAR_5->driver_desc;
 ulong VAR_7 = VAR_6->bar_descriptions[VAR_4].size;
 int VAR_8;

 if (VAR_7 == 0)
  return 0;

 if (VAR_6->bar_descriptions[VAR_4].type != VAR_2) {

  return 0;
 }





 VAR_3->bar_data[VAR_4].phys_base =
  (ulong)FUNC_7(VAR_3->pci_dev, VAR_4);
 if (!VAR_3->bar_data[VAR_4].phys_base) {
  FUNC_1(VAR_3->dev, "Cannot get BAR%u base address\n",
   VAR_4);
  return -VAR_0;
 }

 VAR_3->bar_data[VAR_4].length_bytes =
  (ulong)FUNC_6(VAR_3->pci_dev, VAR_4);
 if (VAR_3->bar_data[VAR_4].length_bytes < VAR_7) {
  FUNC_1(VAR_3->dev,
   "PCI BAR %u space is too small: %lu; expected >= %lu\n",
   VAR_4, VAR_3->bar_data[VAR_4].length_bytes,
   VAR_7);
  return -VAR_1;
 }

 if (!FUNC_9(VAR_3->bar_data[VAR_4].phys_base,
    VAR_3->bar_data[VAR_4].length_bytes,
    VAR_3->dev_info.name)) {
  FUNC_1(VAR_3->dev,
   "Cannot get BAR %d memory region %p\n",
   VAR_4, &VAR_3->pci_dev->resource[VAR_4]);
  return -VAR_0;
 }

 VAR_3->bar_data[VAR_4].virt_base =
  FUNC_4(VAR_3->bar_data[VAR_4].phys_base,
    VAR_3->bar_data[VAR_4].length_bytes);
 if (!VAR_3->bar_data[VAR_4].virt_base) {
  FUNC_1(VAR_3->dev,
   "Cannot remap BAR %d memory region %p\n",
   VAR_4, &VAR_3->pci_dev->resource[VAR_4]);
  VAR_8 = -VAR_1;
  goto fail;
 }

 FUNC_3(&VAR_3->pci_dev->dev, FUNC_0(64));
 FUNC_2(&VAR_3->pci_dev->dev, FUNC_0(64));

 return 0;

fail:
 FUNC_5(VAR_3->bar_data[VAR_4].virt_base);
 FUNC_8(VAR_3->bar_data[VAR_4].phys_base,
      VAR_3->bar_data[VAR_4].length_bytes);
 return VAR_8;
}
