
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_region {int vm_flags; scalar_t__ vm_pgoff; int vm_end; int vm_start; struct file* vm_file; } ;
struct seq_file {int dummy; } ;
struct inode {unsigned long i_ino; TYPE_1__* i_sb; } ;
struct file {int dummy; } ;
typedef int loff_t ;
typedef int dev_t ;
struct TYPE_2__ {int s_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (struct seq_file*,struct file*,char*) ;
 int FUNC_4 (struct seq_file*,char) ;
 int FUNC_5 (struct seq_file*,char*,int ,int ,char,char,char,char,int,int ,int ,unsigned long) ;
 int FUNC_6 (struct seq_file*,char) ;
 int FUNC_7 (struct seq_file*,int) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_6, struct vm_region *VAR_7)
{
 unsigned long VAR_8 = 0;
 struct file *VAR_9;
 dev_t VAR_10 = 0;
 int VAR_11;

 VAR_11 = VAR_7->vm_flags;
 VAR_9 = VAR_7->vm_file;

 if (VAR_9) {
  struct inode *VAR_12 = FUNC_2(VAR_7->vm_file);
  VAR_10 = VAR_12->i_sb->s_dev;
  VAR_8 = VAR_12->i_ino;
 }

 FUNC_7(VAR_6, 25 + sizeof(void *) * 6 - 1);
 FUNC_5(VAR_6,
     "%08lx-%08lx %c%c%c%c %08llx %02x:%02x %lu ",
     VAR_7->vm_start,
     VAR_7->vm_end,
     VAR_11 & VAR_3 ? 'r' : '-',
     VAR_11 & VAR_5 ? 'w' : '-',
     VAR_11 & VAR_1 ? 'x' : '-',
     VAR_11 & VAR_2 ? VAR_11 & VAR_4 ? 'S' : 's' : 'p',
     ((loff_t)VAR_7->vm_pgoff) << VAR_0,
     FUNC_0(VAR_10), FUNC_1(VAR_10), VAR_8);

 if (VAR_9) {
  FUNC_4(VAR_6, ' ');
  FUNC_3(VAR_6, VAR_9, "");
 }

 FUNC_6(VAR_6, '\n');
 return 0;
}
