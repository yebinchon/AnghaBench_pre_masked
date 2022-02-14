
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int * vm_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct vm_area_struct *VAR_3)
{
 VAR_3->vm_flags |= VAR_1 | VAR_0;
 VAR_3->vm_ops = &VAR_2;
 return 0;
}
