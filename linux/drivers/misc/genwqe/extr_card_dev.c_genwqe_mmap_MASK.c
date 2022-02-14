
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int * vm_ops; struct genwqe_file* vm_private_data; int vm_page_prot; } ;
struct genwqe_file {struct genwqe_dev* cd; } ;
struct genwqe_dev {int dummy; } ;
struct file {scalar_t__ private_data; } ;
struct dma_mapping {unsigned long size; int dma_addr; int * k_vaddr; int nr_pages; void* u_vaddr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct genwqe_file*,struct dma_mapping*) ;
 int * FUNC_2 (struct genwqe_dev*,unsigned long,int *) ;
 int FUNC_3 (struct genwqe_dev*,unsigned long,int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct dma_mapping*,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (unsigned long) ;
 int FUNC_7 (struct dma_mapping*) ;
 struct dma_mapping* FUNC_8 (int,int ) ;
 int FUNC_9 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 unsigned long FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_10, struct vm_area_struct *VAR_11)
{
 int VAR_12;
 unsigned long VAR_13, VAR_14 = VAR_11->vm_end - VAR_11->vm_start;
 struct genwqe_file *VAR_15 = (struct genwqe_file *)VAR_10->private_data;
 struct genwqe_dev *VAR_16 = VAR_15->cd;
 struct dma_mapping *VAR_17;

 if (VAR_14 == 0)
  return -VAR_2;

 if (FUNC_6(VAR_14) > VAR_6)
  return -VAR_3;

 VAR_17 = FUNC_8(sizeof(struct dma_mapping), VAR_5);
 if (VAR_17 == ((void*)0))
  return -VAR_3;

 FUNC_5(VAR_17, VAR_4);
 VAR_17->u_vaddr = (void *)VAR_11->vm_start;
 VAR_17->size = VAR_14;
 VAR_17->nr_pages = FUNC_0(VAR_14, VAR_8);
 VAR_17->k_vaddr = FUNC_2(VAR_16, VAR_14,
           &VAR_17->dma_addr);
 if (VAR_17->k_vaddr == ((void*)0)) {
  VAR_12 = -VAR_3;
  goto free_dma_map;
 }

 if (FUNC_4(VAR_0) && (VAR_14 > sizeof(dma_addr_t)))
  *(dma_addr_t *)VAR_17->k_vaddr = VAR_17->dma_addr;

 VAR_13 = FUNC_10(VAR_17->k_vaddr) >> VAR_7;
 VAR_12 = FUNC_9(VAR_11,
        VAR_11->vm_start,
        VAR_13,
        VAR_14,
        VAR_11->vm_page_prot);
 if (VAR_12 != 0) {
  VAR_12 = -VAR_1;
  goto free_dma_mem;
 }

 VAR_11->vm_private_data = VAR_15;
 VAR_11->vm_ops = &VAR_9;
 FUNC_1(VAR_15, VAR_17);

 return 0;

 free_dma_mem:
 FUNC_3(VAR_16, VAR_17->size,
    VAR_17->k_vaddr,
    VAR_17->dma_addr);
 free_dma_map:
 FUNC_7(VAR_17);
 return VAR_12;
}
