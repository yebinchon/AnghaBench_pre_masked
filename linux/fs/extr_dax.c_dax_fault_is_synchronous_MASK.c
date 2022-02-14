
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct iomap {int flags; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(unsigned long VAR_3,
  struct vm_area_struct *VAR_4, struct iomap *VAR_5)
{
 return (VAR_3 & VAR_1) && (VAR_4->vm_flags & VAR_2)
  && (VAR_5->flags & VAR_0);
}
