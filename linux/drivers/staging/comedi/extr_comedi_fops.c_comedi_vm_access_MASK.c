
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_pgoff; unsigned long vm_end; struct comedi_buf_map* vm_private_data; } ;
struct comedi_buf_map {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct comedi_buf_map*,unsigned long,void*,int,int) ;

__attribute__((used)) static int FUNC_1(struct vm_area_struct *VAR_2, unsigned long VAR_3,
       void *VAR_4, int VAR_5, int VAR_6)
{
 struct comedi_buf_map *VAR_7 = VAR_2->vm_private_data;
 unsigned long VAR_8 =
     VAR_3 - VAR_2->vm_start + (VAR_2->vm_pgoff << VAR_1);

 if (VAR_5 < 0)
  return -VAR_0;
 if (VAR_5 > VAR_2->vm_end - VAR_3)
  VAR_5 = VAR_2->vm_end - VAR_3;
 return FUNC_0(VAR_7, VAR_8, VAR_4, VAR_5, VAR_6);
}
