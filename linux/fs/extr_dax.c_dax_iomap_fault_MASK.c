
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {int dummy; } ;
struct iomap_ops {int dummy; } ;
typedef int pfn_t ;
typedef enum page_entry_size { ____Placeholder_page_entry_size } page_entry_size ;




 int VAR_0 ;
 int FUNC_0 (struct vm_fault*,int *,struct iomap_ops const*) ;
 int FUNC_1 (struct vm_fault*,int *,int*,struct iomap_ops const*) ;

vm_fault_t FUNC_2(struct vm_fault *VAR_1, enum page_entry_size VAR_2,
      pfn_t *VAR_3, int *VAR_4, const struct iomap_ops *VAR_5)
{
 switch (VAR_2) {
 case 128:
  return FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5);
 case 129:
  return FUNC_0(VAR_1, VAR_3, VAR_5);
 default:
  return VAR_0;
 }
}
