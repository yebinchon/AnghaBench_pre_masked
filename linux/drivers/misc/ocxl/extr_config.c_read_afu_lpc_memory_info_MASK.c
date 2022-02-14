
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned long long u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ocxl_fn_config {int dummy; } ;
struct ocxl_afu_config {unsigned long long lpc_mem_offset; int lpc_mem_size; int special_purpose_mem_offset; int special_purpose_mem_size; } ;


 unsigned long long FUNC_0 (unsigned long long,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct pci_dev*,struct ocxl_fn_config*,scalar_t__,unsigned long long*) ;
 int FUNC_2 (struct pci_dev*,struct ocxl_fn_config*,int*,int*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_3,
    struct ocxl_fn_config *VAR_4,
    struct ocxl_afu_config *VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 u16 VAR_8;
 u16 VAR_9;
 u64 VAR_10 = 0;
 u64 VAR_11 = 0;

 VAR_5->lpc_mem_offset = 0;
 VAR_5->lpc_mem_size = 0;
 VAR_5->special_purpose_mem_offset = 0;
 VAR_5->special_purpose_mem_size = 0;
 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_0, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_7 = FUNC_0(VAR_7, 0, 7);
 if (!VAR_7)
  return 0;
 VAR_10 = 1ull << VAR_7;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_1, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_5->lpc_mem_offset = VAR_7;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_1 + 4, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_5->lpc_mem_offset |= (u64) VAR_7 << 32;

 VAR_6 = FUNC_2(VAR_3, VAR_4, &VAR_9, &VAR_8);
 if (VAR_6)
  return VAR_6;

 if (VAR_8 >= 0x0101) {
  VAR_6 = FUNC_1(VAR_3, VAR_4,
    VAR_2, &VAR_7);
  if (VAR_6)
   return VAR_6;
  VAR_11 = VAR_7;

  VAR_6 = FUNC_1(VAR_3, VAR_4,
    VAR_2 + 4, &VAR_7);
  if (VAR_6)
   return VAR_6;
  VAR_11 |= (u64) VAR_7 << 32;
 } else {
  VAR_11 = VAR_10;
 }
 VAR_5->lpc_mem_size = VAR_11;

 if (VAR_11 < VAR_10) {
  VAR_5->special_purpose_mem_offset =
   VAR_5->lpc_mem_offset + VAR_11;
  VAR_5->special_purpose_mem_size =
   VAR_10 - VAR_11;
 }
 return 0;
}
