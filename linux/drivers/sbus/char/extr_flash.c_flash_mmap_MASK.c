
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; unsigned long vm_pgoff; unsigned long vm_end; unsigned long vm_start; int vm_page_prot; } ;
struct file {int dummy; } ;
struct TYPE_2__ {unsigned long read_base; unsigned long write_base; unsigned long read_size; unsigned long write_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_8, struct vm_area_struct *VAR_9)
{
 unsigned long VAR_10;
 unsigned long VAR_11;

 FUNC_2(&VAR_7);
 if (VAR_6.read_base == VAR_6.write_base) {
  VAR_10 = VAR_6.read_base;
  VAR_11 = VAR_6.read_size;
 } else {
  if ((VAR_9->vm_flags & VAR_4) &&
      (VAR_9->vm_flags & VAR_5)) {
   FUNC_3(&VAR_7);
   return -VAR_1;
  }
  if (VAR_9->vm_flags & VAR_4) {
   VAR_10 = VAR_6.read_base;
   VAR_11 = VAR_6.read_size;
  } else if (VAR_9->vm_flags & VAR_5) {
   VAR_10 = VAR_6.write_base;
   VAR_11 = VAR_6.write_size;
  } else {
   FUNC_3(&VAR_7);
   return -VAR_2;
  }
 }
 FUNC_3(&VAR_7);

 if ((VAR_9->vm_pgoff << VAR_3) > VAR_11)
  return -VAR_2;
 VAR_10 = VAR_9->vm_pgoff + (VAR_10 >> VAR_3);

 if (VAR_9->vm_end - (VAR_9->vm_start + (VAR_9->vm_pgoff << VAR_3)) > VAR_11)
  VAR_11 = VAR_9->vm_end - (VAR_9->vm_start + (VAR_9->vm_pgoff << VAR_3));

 VAR_9->vm_page_prot = FUNC_1(VAR_9->vm_page_prot);

 if (FUNC_0(VAR_9, VAR_9->vm_start, VAR_10, VAR_11, VAR_9->vm_page_prot))
  return -VAR_0;

 return 0;
}
