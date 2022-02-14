
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_start; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct fb_info *VAR_4, struct vm_area_struct *VAR_5)
{



 VAR_5->vm_flags |= VAR_2 | VAR_1;
 VAR_5->vm_start = VAR_3;

 return 0;



}
