
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct sis_sync_cmd_params {int* mailbox; } ;
struct sis_base_struct {int error_buffer_num_elements; int error_buffer_element_length; int error_buffer_paddr_high; int error_buffer_paddr_low; int revision; } ;
struct pqi_ctrl_info {void* max_io_slots; TYPE_1__* pci_dev; scalar_t__ error_buffer_dma_handle; } ;
typedef int params ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 struct sis_base_struct* FUNC_0 (void*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,struct sis_base_struct*,int,int ) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,int,int ) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (scalar_t__,int ) ;
 void* FUNC_6 (unsigned long) ;
 int FUNC_7 (struct sis_sync_cmd_params*,int ,int) ;
 int FUNC_8 (void*,int *) ;
 int FUNC_9 (struct pqi_ctrl_info*,int ,struct sis_sync_cmd_params*) ;
 void* FUNC_10 (unsigned long) ;

int FUNC_11(struct pqi_ctrl_info *VAR_7)
{
 int VAR_8;
 void *VAR_9;
 struct sis_base_struct *VAR_10;
 struct sis_sync_cmd_params VAR_11;
 unsigned long VAR_12;
 dma_addr_t VAR_13;

 VAR_9 = FUNC_5(sizeof(*VAR_10)
  + VAR_4 - 1, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_0(VAR_9,
  VAR_4);
 VAR_12 = (unsigned long)VAR_7->error_buffer_dma_handle;

 FUNC_8(VAR_5, &VAR_10->revision);
 FUNC_8(FUNC_6(VAR_12),
  &VAR_10->error_buffer_paddr_low);
 FUNC_8(FUNC_10(VAR_12),
  &VAR_10->error_buffer_paddr_high);
 FUNC_8(VAR_3,
  &VAR_10->error_buffer_element_length);
 FUNC_8(VAR_7->max_io_slots,
  &VAR_10->error_buffer_num_elements);

 VAR_13 = FUNC_1(&VAR_7->pci_dev->dev, VAR_10,
  sizeof(*VAR_10), VAR_0);
 if (FUNC_2(&VAR_7->pci_dev->dev, VAR_13)) {
  VAR_8 = -VAR_1;
  goto out;
 }

 FUNC_7(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.mailbox[1] = FUNC_6((u64)VAR_13);
 VAR_11.mailbox[2] = FUNC_10((u64)VAR_13);
 VAR_11.mailbox[3] = sizeof(*VAR_10);

 VAR_8 = FUNC_9(VAR_7, VAR_6,
  &VAR_11);

 FUNC_3(&VAR_7->pci_dev->dev, VAR_13,
   sizeof(*VAR_10), VAR_0);
out:
 FUNC_4(VAR_9);

 return VAR_8;
}
