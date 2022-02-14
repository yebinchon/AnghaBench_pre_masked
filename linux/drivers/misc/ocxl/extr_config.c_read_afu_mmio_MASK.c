
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef void* u32 ;
struct pci_dev {int dummy; } ;
struct ocxl_fn_config {int dummy; } ;
struct ocxl_afu_config {int global_mmio_bar; int global_mmio_offset; int pp_mmio_bar; int pp_mmio_offset; void* pp_mmio_stride; void* global_mmio_size; } ;


 int FUNC_0 (void*,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct pci_dev*,struct ocxl_fn_config*,scalar_t__,void**) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_4, struct ocxl_fn_config *VAR_5,
   struct ocxl_afu_config *VAR_6)
{
 int VAR_7;
 u32 VAR_8;




 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_0, &VAR_8);
 if (VAR_7)
  return VAR_7;
 VAR_6->global_mmio_bar = FUNC_0(VAR_8, 0, 2);
 VAR_6->global_mmio_offset = FUNC_0(VAR_8, 16, 31) << 16;

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_0 + 4, &VAR_8);
 if (VAR_7)
  return VAR_7;
 VAR_6->global_mmio_offset += (u64) VAR_8 << 32;

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_1, &VAR_8);
 if (VAR_7)
  return VAR_7;
 VAR_6->global_mmio_size = VAR_8;




 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_2, &VAR_8);
 if (VAR_7)
  return VAR_7;
 VAR_6->pp_mmio_bar = FUNC_0(VAR_8, 0, 2);
 VAR_6->pp_mmio_offset = FUNC_0(VAR_8, 16, 31) << 16;

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_2 + 4, &VAR_8);
 if (VAR_7)
  return VAR_7;
 VAR_6->pp_mmio_offset += (u64) VAR_8 << 32;

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_3, &VAR_8);
 if (VAR_7)
  return VAR_7;
 VAR_6->pp_mmio_stride = VAR_8;

 return 0;
}
