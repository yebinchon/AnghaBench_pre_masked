
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
typedef int u64 ;
struct vm_area_struct {int dummy; } ;
struct ocxl_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ocxl_context*,int) ;
 int FUNC_1 (struct ocxl_context*,int) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,int) ;

__attribute__((used)) static vm_fault_t FUNC_3(struct vm_area_struct *VAR_2, unsigned long VAR_3,
  u64 VAR_4, struct ocxl_context *VAR_5)
{
 u64 VAR_6;
 int VAR_7 = FUNC_1(VAR_5, VAR_4);

 VAR_6 = FUNC_0(VAR_5, VAR_7);
 if (!VAR_6)
  return VAR_1;

 return FUNC_2(VAR_2, VAR_3, VAR_6 >> VAR_0);
}
