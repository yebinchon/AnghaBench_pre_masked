
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct omapfb2_mem_region* vm_private_data; } ;
struct omapfb2_mem_region {int map_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct omapfb2_mem_region*) ;
 int FUNC_2 (struct omapfb2_mem_region*) ;

__attribute__((used)) static void FUNC_3(struct vm_area_struct *VAR_0)
{
 struct omapfb2_mem_region *VAR_1 = VAR_0->vm_private_data;

 FUNC_1(VAR_1);
 FUNC_0(&VAR_1->map_count);
 FUNC_2(VAR_1);
}
