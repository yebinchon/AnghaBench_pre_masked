
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; struct fb_info* vm_private_data; int * vm_ops; } ;
struct fb_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0(struct fb_info *VAR_5, struct vm_area_struct *VAR_6)
{
 VAR_6->vm_ops = &VAR_4;
 VAR_6->vm_flags |= VAR_2 | VAR_1;
 if (!(VAR_5->flags & VAR_0))
  VAR_6->vm_flags |= VAR_3;
 VAR_6->vm_private_data = VAR_5;
 return 0;
}
