
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct rio_mport_mapping* vm_private_data; } ;
struct rio_mport_mapping {int ref; int phys_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int *) ;

__attribute__((used)) static void FUNC_2(struct vm_area_struct *VAR_1)
{
 struct rio_mport_mapping *VAR_2 = VAR_1->vm_private_data;

 FUNC_1(VAR_0, "%pad", &VAR_2->phys_addr);
 FUNC_0(&VAR_2->ref);
}
