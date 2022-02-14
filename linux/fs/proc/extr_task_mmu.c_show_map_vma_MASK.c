
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_flags_t ;
struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; TYPE_2__* vm_ops; scalar_t__ vm_pgoff; struct file* vm_file; int vm_flags; struct mm_struct* vm_mm; } ;
struct seq_file {int dummy; } ;
struct mm_struct {unsigned long brk; unsigned long start_brk; } ;
struct inode {unsigned long i_ino; TYPE_1__* i_sb; } ;
struct file {int dummy; } ;
typedef unsigned long long loff_t ;
typedef int dev_t ;
struct TYPE_4__ {char* (* name ) (struct vm_area_struct*) ;} ;
struct TYPE_3__ {int s_dev; } ;


 unsigned long long VAR_0 ;
 char* FUNC_0 (struct vm_area_struct*) ;
 struct inode* FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*) ;
 int FUNC_3 (struct seq_file*,struct file*,char*) ;
 int FUNC_4 (struct seq_file*,char) ;
 int FUNC_5 (struct seq_file*,char) ;
 int FUNC_6 (struct seq_file*,char const*) ;
 int FUNC_7 (struct seq_file*,unsigned long,unsigned long,int ,unsigned long long,int ,unsigned long) ;
 char* FUNC_8 (struct vm_area_struct*) ;

__attribute__((used)) static void
FUNC_9(struct seq_file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct mm_struct *VAR_3 = VAR_2->vm_mm;
 struct file *VAR_4 = VAR_2->vm_file;
 vm_flags_t VAR_5 = VAR_2->vm_flags;
 unsigned long VAR_6 = 0;
 unsigned long long VAR_7 = 0;
 unsigned long VAR_8, VAR_9;
 dev_t VAR_10 = 0;
 const char *VAR_11 = ((void*)0);

 if (VAR_4) {
  struct inode *VAR_12 = FUNC_1(VAR_2->vm_file);
  VAR_10 = VAR_12->i_sb->s_dev;
  VAR_6 = VAR_12->i_ino;
  VAR_7 = ((loff_t)VAR_2->vm_pgoff) << VAR_0;
 }

 VAR_8 = VAR_2->vm_start;
 VAR_9 = VAR_2->vm_end;
 FUNC_7(VAR_1, VAR_8, VAR_9, VAR_5, VAR_7, VAR_10, VAR_6);





 if (VAR_4) {
  FUNC_4(VAR_1, ' ');
  FUNC_3(VAR_1, VAR_4, "\n");
  goto done;
 }

 if (VAR_2->vm_ops && VAR_2->vm_ops->name) {
  VAR_11 = VAR_2->vm_ops->name(VAR_2);
  if (VAR_11)
   goto done;
 }

 VAR_11 = FUNC_0(VAR_2);
 if (!VAR_11) {
  if (!VAR_3) {
   VAR_11 = "[vdso]";
   goto done;
  }

  if (VAR_2->vm_start <= VAR_3->brk &&
      VAR_2->vm_end >= VAR_3->start_brk) {
   VAR_11 = "[heap]";
   goto done;
  }

  if (FUNC_2(VAR_2))
   VAR_11 = "[stack]";
 }

done:
 if (VAR_11) {
  FUNC_4(VAR_1, ' ');
  FUNC_6(VAR_1, VAR_11);
 }
 FUNC_5(VAR_1, '\n');
}
