
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct gasket_mappable_region {scalar_t__ length_bytes; } ;
struct gasket_dev {int dummy; } ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_1 (struct gasket_mappable_region const*,scalar_t__,scalar_t__,struct gasket_mappable_region*,scalar_t__*) ;
 int FUNC_2 (struct gasket_dev const*,struct vm_area_struct*,scalar_t__*) ;
 int FUNC_3 (struct vm_area_struct*,scalar_t__,int) ;

int FUNC_4(const struct gasket_dev *VAR_1,
      struct vm_area_struct *VAR_2,
      const struct gasket_mappable_region *VAR_3)
{
 ulong VAR_4;
 ulong VAR_5;
 struct gasket_mappable_region VAR_6;
 int VAR_7;

 if (VAR_3->length_bytes == 0)
  return 0;

 VAR_7 = FUNC_2(VAR_1, VAR_2, &VAR_4);
 if (VAR_7)
  return VAR_7;

 if (!FUNC_1(VAR_3, VAR_4,
      VAR_2->vm_end - VAR_2->vm_start,
      &VAR_6, &VAR_5))
  return 1;







 FUNC_3(VAR_2, VAR_2->vm_start + VAR_5,
       FUNC_0(VAR_6.length_bytes, VAR_0) *
       VAR_0);
 return 0;
}
