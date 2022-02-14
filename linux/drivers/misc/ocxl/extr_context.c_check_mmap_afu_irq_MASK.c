
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_pgoff; int vm_flags; } ;
struct ocxl_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ocxl_context*,int) ;
 int FUNC_1 (struct ocxl_context*,int) ;
 int FUNC_2 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_3(struct ocxl_context *VAR_7,
   struct vm_area_struct *VAR_8)
{
 int VAR_9 = FUNC_1(VAR_7, VAR_8->vm_pgoff << VAR_1);


 if (FUNC_2(VAR_8) != 1)
  return -VAR_0;


 if (!FUNC_0(VAR_7, VAR_9))
  return -VAR_0;







 if ((VAR_8->vm_flags & VAR_5) || (VAR_8->vm_flags & VAR_2) ||
  !(VAR_8->vm_flags & VAR_6))
  return -VAR_0;
 VAR_8->vm_flags &= ~(VAR_4 | VAR_3);
 return 0;
}
