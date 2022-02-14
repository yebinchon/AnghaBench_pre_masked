
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; int vm_end; int vm_start; scalar_t__ vm_pgoff; struct file* vm_file; struct mm_struct* vm_mm; } ;
struct seq_file {int dummy; } ;
struct mm_struct {int dummy; } ;
struct inode {unsigned long i_ino; TYPE_1__* i_sb; } ;
struct file {int dummy; } ;
typedef unsigned long long loff_t ;
typedef int dev_t ;
struct TYPE_2__ {int s_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_2 (struct file*) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (struct seq_file*,struct file*,char*) ;
 int FUNC_5 (struct seq_file*,char) ;
 int FUNC_6 (struct seq_file*,char*,int ,int ,char,char,char,char,unsigned long long,int ,int ,unsigned long) ;
 int FUNC_7 (struct seq_file*,char) ;
 int FUNC_8 (struct seq_file*,char*) ;
 int FUNC_9 (struct seq_file*,int) ;

__attribute__((used)) static int FUNC_10(struct seq_file *VAR_6, struct vm_area_struct *VAR_7)
{
 struct mm_struct *VAR_8 = VAR_7->vm_mm;
 unsigned long VAR_9 = 0;
 struct file *VAR_10;
 dev_t VAR_11 = 0;
 int VAR_12;
 unsigned long long VAR_13 = 0;

 VAR_12 = VAR_7->vm_flags;
 VAR_10 = VAR_7->vm_file;

 if (VAR_10) {
  struct inode *VAR_14 = FUNC_2(VAR_7->vm_file);
  VAR_11 = VAR_14->i_sb->s_dev;
  VAR_9 = VAR_14->i_ino;
  VAR_13 = (loff_t)VAR_7->vm_pgoff << VAR_0;
 }

 FUNC_9(VAR_6, 25 + sizeof(void *) * 6 - 1);
 FUNC_6(VAR_6,
     "%08lx-%08lx %c%c%c%c %08llx %02x:%02x %lu ",
     VAR_7->vm_start,
     VAR_7->vm_end,
     VAR_12 & VAR_3 ? 'r' : '-',
     VAR_12 & VAR_5 ? 'w' : '-',
     VAR_12 & VAR_1 ? 'x' : '-',
     VAR_12 & VAR_2 ? VAR_12 & VAR_4 ? 'S' : 's' : 'p',
     VAR_13,
     FUNC_0(VAR_11), FUNC_1(VAR_11), VAR_9);

 if (VAR_10) {
  FUNC_5(VAR_6, ' ');
  FUNC_4(VAR_6, VAR_10, "");
 } else if (VAR_8 && FUNC_3(VAR_7)) {
  FUNC_5(VAR_6, ' ');
  FUNC_8(VAR_6, "[stack]");
 }

 FUNC_7(VAR_6, '\n');
 return 0;
}
