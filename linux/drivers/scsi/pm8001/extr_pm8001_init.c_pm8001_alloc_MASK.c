
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* region; } ;
struct pm8001_hba_info {int flags; int tags_num; TYPE_5__* ccb_info; TYPE_4__ memoryMap; TYPE_5__* devices; int pdev; int tags; TYPE_2__* port; TYPE_1__* chip; int bitmap_lock; int lock; } ;
struct pm8001_device {int dummy; } ;
struct pm8001_ccb_info {int dummy; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct TYPE_10__ {int id; int device_id; int ccb_tag; int * device; int * task; scalar_t__ ccb_dma_handle; scalar_t__ running_req; int dev_type; } ;
struct TYPE_8__ {int num_elements; int element_size; int total_len; int alignment; int phys_addr; TYPE_5__* virt_ptr; int phys_addr_lo; int phys_addr_hi; } ;
struct TYPE_7__ {int list; scalar_t__ port_state; scalar_t__ port_attached; scalar_t__ wide_port_phymap; } ;
struct TYPE_6__ {int n_phy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int FUNC_2 (struct pm8001_hba_info*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_5__**,int *,int *,int *,int,int) ;
 int FUNC_5 (struct pm8001_hba_info*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct pm8001_hba_info*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct pm8001_hba_info *VAR_22,
   const struct pci_device_id *VAR_23)
{
 int VAR_24;
 FUNC_8(&VAR_22->lock);
 FUNC_8(&VAR_22->bitmap_lock);
 FUNC_2(VAR_22,
  FUNC_6("pm8001_alloc: PHY:%x\n",
    VAR_22->chip->n_phy));
 for (VAR_24 = 0; VAR_24 < VAR_22->chip->n_phy; VAR_24++) {
  FUNC_5(VAR_22, VAR_24);
  VAR_22->port[VAR_24].wide_port_phymap = 0;
  VAR_22->port[VAR_24].port_attached = 0;
  VAR_22->port[VAR_24].port_state = 0;
  FUNC_0(&VAR_22->port[VAR_24].list);
 }

 VAR_22->tags = FUNC_3(VAR_14, VAR_6);
 if (!VAR_22->tags)
  goto err_out;

 VAR_22->memoryMap.region[VAR_0].num_elements = 1;
 VAR_22->memoryMap.region[VAR_0].element_size = VAR_13;
 VAR_22->memoryMap.region[VAR_0].total_len = VAR_13;
 VAR_22->memoryMap.region[VAR_0].alignment = 32;


 VAR_22->memoryMap.region[VAR_8].num_elements = 1;
 VAR_22->memoryMap.region[VAR_8].element_size = VAR_13;
 VAR_22->memoryMap.region[VAR_8].total_len = VAR_13;
 VAR_22->memoryMap.region[VAR_8].alignment = 32;

 for (VAR_24 = 0; VAR_24 < VAR_16; VAR_24++) {

  VAR_22->memoryMap.region[VAR_2+VAR_24].num_elements = 1;
  VAR_22->memoryMap.region[VAR_2+VAR_24].element_size = 4;
  VAR_22->memoryMap.region[VAR_2+VAR_24].total_len = 4;
  VAR_22->memoryMap.region[VAR_2+VAR_24].alignment = 4;

  if ((VAR_23->driver_data) != VAR_21) {

   VAR_22->memoryMap.region[VAR_7+VAR_24].num_elements =
      VAR_18;
   VAR_22->memoryMap.region[VAR_7+VAR_24].element_size = 128;
   VAR_22->memoryMap.region[VAR_7+VAR_24].total_len =
      VAR_18 * 128;
   VAR_22->memoryMap.region[VAR_7+VAR_24].alignment = 128;
  } else {
   VAR_22->memoryMap.region[VAR_7+VAR_24].num_elements =
      VAR_18;
   VAR_22->memoryMap.region[VAR_7+VAR_24].element_size = 64;
   VAR_22->memoryMap.region[VAR_7+VAR_24].total_len =
      VAR_18 * 64;
   VAR_22->memoryMap.region[VAR_7+VAR_24].alignment = 64;
  }
 }

 for (VAR_24 = 0; VAR_24 < VAR_17; VAR_24++) {

  VAR_22->memoryMap.region[VAR_11+VAR_24].num_elements = 1;
  VAR_22->memoryMap.region[VAR_11+VAR_24].element_size = 4;
  VAR_22->memoryMap.region[VAR_11+VAR_24].total_len = 4;
  VAR_22->memoryMap.region[VAR_11+VAR_24].alignment = 4;

  if (VAR_23->driver_data != VAR_21) {

   VAR_22->memoryMap.region[VAR_10+VAR_24].num_elements =
      VAR_18;
   VAR_22->memoryMap.region[VAR_10+VAR_24].element_size = 128;
   VAR_22->memoryMap.region[VAR_10+VAR_24].total_len =
      VAR_18 * 128;
   VAR_22->memoryMap.region[VAR_10+VAR_24].alignment = 128;
  } else {

   VAR_22->memoryMap.region[VAR_10+VAR_24].num_elements =
      VAR_18;
   VAR_22->memoryMap.region[VAR_10+VAR_24].element_size = 64;
   VAR_22->memoryMap.region[VAR_10+VAR_24].total_len =
      VAR_18 * 64;
   VAR_22->memoryMap.region[VAR_10+VAR_24].alignment = 64;
  }

 }

 VAR_22->memoryMap.region[VAR_9].num_elements = 1;
 VAR_22->memoryMap.region[VAR_9].element_size = 4096;
 VAR_22->memoryMap.region[VAR_9].total_len = 4096;

 VAR_22->memoryMap.region[VAR_3].num_elements = 1;
 VAR_22->memoryMap.region[VAR_3].element_size = VAR_15 *
  sizeof(struct pm8001_device);
 VAR_22->memoryMap.region[VAR_3].total_len = VAR_15 *
  sizeof(struct pm8001_device);


 VAR_22->memoryMap.region[VAR_1].num_elements = 1;
 VAR_22->memoryMap.region[VAR_1].element_size = VAR_14 *
  sizeof(struct pm8001_ccb_info);
 VAR_22->memoryMap.region[VAR_1].total_len = VAR_14 *
  sizeof(struct pm8001_ccb_info);


 VAR_22->memoryMap.region[VAR_5].total_len = 4096;

 VAR_22->memoryMap.region[VAR_4].num_elements = 1;
 VAR_22->memoryMap.region[VAR_4].total_len = 0x10000;
 VAR_22->memoryMap.region[VAR_4].element_size = 0x10000;
 VAR_22->memoryMap.region[VAR_4].alignment = 0x10000;
 for (VAR_24 = 0; VAR_24 < VAR_20; VAR_24++) {
  if (FUNC_4(VAR_22->pdev,
   &VAR_22->memoryMap.region[VAR_24].virt_ptr,
   &VAR_22->memoryMap.region[VAR_24].phys_addr,
   &VAR_22->memoryMap.region[VAR_24].phys_addr_hi,
   &VAR_22->memoryMap.region[VAR_24].phys_addr_lo,
   VAR_22->memoryMap.region[VAR_24].total_len,
   VAR_22->memoryMap.region[VAR_24].alignment) != 0) {
    FUNC_1(VAR_22,
     FUNC_6("Mem%d alloc failed\n",
     VAR_24));
    goto err_out;
  }
 }

 VAR_22->devices = VAR_22->memoryMap.region[VAR_3].virt_ptr;
 for (VAR_24 = 0; VAR_24 < VAR_15; VAR_24++) {
  VAR_22->devices[VAR_24].dev_type = VAR_19;
  VAR_22->devices[VAR_24].id = VAR_24;
  VAR_22->devices[VAR_24].device_id = VAR_15;
  VAR_22->devices[VAR_24].running_req = 0;
 }
 VAR_22->ccb_info = VAR_22->memoryMap.region[VAR_1].virt_ptr;
 for (VAR_24 = 0; VAR_24 < VAR_14; VAR_24++) {
  VAR_22->ccb_info[VAR_24].ccb_dma_handle =
   VAR_22->memoryMap.region[VAR_1].phys_addr +
   VAR_24 * sizeof(struct pm8001_ccb_info);
  VAR_22->ccb_info[VAR_24].task = ((void*)0);
  VAR_22->ccb_info[VAR_24].ccb_tag = 0xffffffff;
  VAR_22->ccb_info[VAR_24].device = ((void*)0);
  ++VAR_22->tags_num;
 }
 VAR_22->flags = VAR_12;

 FUNC_7(VAR_22);
 return 0;
err_out:
 return 1;
}
