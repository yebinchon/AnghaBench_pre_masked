
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {size_t vm_end; size_t vm_start; int vm_flags; struct usb_memory* vm_private_data; int * vm_ops; int vm_page_prot; } ;
struct usb_memory {size_t size; size_t vm_start; int vma_use_count; int memlist; void* mem; struct usb_dev_state* ps; int dma_handle; } ;
struct usb_dev_state {int lock; int memory_list; int dev; } ;
struct file {struct usb_dev_state* private_data; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct usb_memory*,int*) ;
 int FUNC_2 (struct usb_memory*) ;
 struct usb_memory* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (void*,int ,size_t) ;
 scalar_t__ FUNC_6 (struct vm_area_struct*,size_t,int,size_t,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 void* FUNC_9 (int ,size_t,int,int *) ;
 int VAR_9 ;
 int FUNC_10 (size_t) ;
 int FUNC_11 (size_t) ;
 int FUNC_12 (void*) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_10, struct vm_area_struct *VAR_11)
{
 struct usb_memory *VAR_12 = ((void*)0);
 struct usb_dev_state *VAR_13 = VAR_10->private_data;
 size_t VAR_14 = VAR_11->vm_end - VAR_11->vm_start;
 void *VAR_15;
 unsigned long VAR_16;
 dma_addr_t VAR_17;
 int VAR_18;

 VAR_18 = FUNC_11(VAR_14 + sizeof(struct usb_memory));
 if (VAR_18)
  goto error;

 VAR_12 = FUNC_3(sizeof(struct usb_memory), VAR_2);
 if (!VAR_12) {
  VAR_18 = -VAR_1;
  goto error_decrease_mem;
 }

 VAR_15 = FUNC_9(VAR_13->dev, VAR_14, VAR_3 | VAR_8,
   &VAR_17);
 if (!VAR_15) {
  VAR_18 = -VAR_1;
  goto error_free_usbm;
 }

 FUNC_5(VAR_15, 0, VAR_14);

 VAR_12->mem = VAR_15;
 VAR_12->dma_handle = VAR_17;
 VAR_12->size = VAR_14;
 VAR_12->ps = VAR_13;
 VAR_12->vm_start = VAR_11->vm_start;
 VAR_12->vma_use_count = 1;
 FUNC_0(&VAR_12->memlist);

 if (FUNC_6(VAR_11, VAR_11->vm_start,
   FUNC_12(VAR_12->mem) >> VAR_4,
   VAR_14, VAR_11->vm_page_prot) < 0) {
  FUNC_1(VAR_12, &VAR_12->vma_use_count);
  return -VAR_0;
 }

 VAR_11->vm_flags |= VAR_7;
 VAR_11->vm_flags |= (VAR_6 | VAR_5);
 VAR_11->vm_ops = &VAR_9;
 VAR_11->vm_private_data = VAR_12;

 FUNC_7(&VAR_13->lock, VAR_16);
 FUNC_4(&VAR_12->memlist, &VAR_13->memory_list);
 FUNC_8(&VAR_13->lock, VAR_16);

 return 0;

error_free_usbm:
 FUNC_2(VAR_12);
error_decrease_mem:
 FUNC_10(VAR_14 + sizeof(struct usb_memory));
error:
 return VAR_18;
}
