
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {struct file* vm_file; } ;
struct file {TYPE_1__* f_op; struct file* private_data; } ;
struct cred {int dummy; } ;
struct TYPE_4__ {int i_sb; } ;
struct TYPE_3__ {int mmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct file*,struct vm_area_struct*) ;
 TYPE_2__* FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*) ;
 struct file* FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 struct cred* FUNC_6 (int ) ;
 int FUNC_7 (struct cred const*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct file *VAR_4 = VAR_2->private_data;
 const struct cred *VAR_5;
 int VAR_6;

 if (!VAR_4->f_op->mmap)
  return -VAR_1;

 if (FUNC_0(VAR_2 != VAR_3->vm_file))
  return -VAR_0;

 VAR_3->vm_file = FUNC_4(VAR_4);

 VAR_5 = FUNC_6(FUNC_2(VAR_2)->i_sb);
 VAR_6 = FUNC_1(VAR_3->vm_file, VAR_3);
 FUNC_7(VAR_5);

 if (VAR_6) {

  FUNC_3(VAR_4);
 } else {

  FUNC_3(VAR_2);
 }

 FUNC_5(VAR_2);

 return VAR_6;
}
