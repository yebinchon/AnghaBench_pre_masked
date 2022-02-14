
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_6__ {int device_created; int irq_requested; int vector; } ;
struct TYPE_5__ {int msix_enabled; int class_added; int cdev_added; int requested_regions; int enabled_device; int * dev; int * regs; int * kernel_mapped_shm; TYPE_1__* layout; scalar_t__ major; int cdev; int class; int * regions; TYPE_3__* msix_entries; TYPE_3__* regions_data; } ;
struct TYPE_4__ {int region_count; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int *) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (int ,int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_12(struct pci_dev *VAR_1)
{
 int VAR_2;




 if (!VAR_1 || !VAR_0.dev)
  return;
 FUNC_3(&VAR_1->dev, "remove_device\n");
 if (VAR_0.regions_data) {
  for (VAR_2 = 0; VAR_2 < VAR_0.layout->region_count; ++VAR_2) {
   if (VAR_0.regions_data[VAR_2].device_created) {
    FUNC_4(VAR_0.class,
            FUNC_0(VAR_0.major, VAR_2));
    VAR_0.regions_data[VAR_2].device_created = 0;
   }
   if (VAR_0.regions_data[VAR_2].irq_requested)
    FUNC_5(VAR_0.msix_entries[VAR_2].vector, ((void*)0));
   VAR_0.regions_data[VAR_2].irq_requested = 0;
  }
  FUNC_6(VAR_0.regions_data);
  VAR_0.regions_data = ((void*)0);
 }
 if (VAR_0.msix_enabled) {
  FUNC_8(VAR_1);
  VAR_0.msix_enabled = 0;
 }
 FUNC_6(VAR_0.msix_entries);
 VAR_0.msix_entries = ((void*)0);
 VAR_0.regions = ((void*)0);
 if (VAR_0.class_added) {
  FUNC_2(VAR_0.class);
  VAR_0.class_added = 0;
 }
 if (VAR_0.cdev_added) {
  FUNC_1(&VAR_0.cdev);
  VAR_0.cdev_added = 0;
 }
 if (VAR_0.major && VAR_0.layout) {
  FUNC_11(FUNC_0(VAR_0.major, 0),
      VAR_0.layout->region_count);
  VAR_0.major = 0;
 }
 VAR_0.layout = ((void*)0);
 if (VAR_0.kernel_mapped_shm) {
  FUNC_9(VAR_1, VAR_0.kernel_mapped_shm);
  VAR_0.kernel_mapped_shm = ((void*)0);
 }
 if (VAR_0.regs) {
  FUNC_9(VAR_1, VAR_0.regs);
  VAR_0.regs = ((void*)0);
 }
 if (VAR_0.requested_regions) {
  FUNC_10(VAR_1);
  VAR_0.requested_regions = 0;
 }
 if (VAR_0.enabled_device) {
  FUNC_7(VAR_1);
  VAR_0.enabled_device = 0;
 }

 VAR_0.dev = ((void*)0);
}
