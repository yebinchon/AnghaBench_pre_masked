
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int * vm_ops; int vm_flags; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; } ;
struct TYPE_4__ {scalar_t__ name; } ;
struct TYPE_5__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, struct vm_area_struct *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_3(FUNC_1(VAR_4));
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_0,
       "orangefs_file_mmap: called on %s\n",
       (VAR_4 ?
   (char *)VAR_4->f_path.dentry->d_name.name :
   (char *)"Unknown"));


 VAR_5->vm_flags |= VAR_2;
 VAR_5->vm_flags &= ~VAR_1;

 FUNC_0(VAR_4);
 VAR_5->vm_ops = &VAR_3;
 return 0;
}
