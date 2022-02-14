
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (int ,unsigned long,unsigned long,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(
            struct vm_area_struct *VAR_2,
            unsigned long VAR_3,
            unsigned long VAR_4)
{
 return FUNC_0(VAR_2->vm_mm, VAR_3, VAR_4 << VAR_0,
       VAR_1, ((void*)0)) != 0;
}
