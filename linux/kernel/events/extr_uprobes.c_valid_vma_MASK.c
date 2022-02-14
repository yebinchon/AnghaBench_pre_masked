
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_flags_t ;
struct vm_area_struct {int vm_flags; scalar_t__ vm_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct vm_area_struct *VAR_4, bool VAR_5)
{
 vm_flags_t VAR_6 = VAR_0 | VAR_1 | VAR_2;

 if (VAR_5)
  VAR_6 |= VAR_3;

 return VAR_4->vm_file && (VAR_4->vm_flags & VAR_6) == VAR_1;
}
