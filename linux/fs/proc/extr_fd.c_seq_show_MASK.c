
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct seq_file {int private; } ;
struct files_struct {int file_lock; } ;
struct TYPE_4__ {int mnt; } ;
struct file {int f_flags; TYPE_2__* f_op; TYPE_1__ f_path; scalar_t__ f_pos; } ;
struct fdtable {int dummy; } ;
struct TYPE_6__ {int mnt_id; } ;
struct TYPE_5__ {int (* show_fdinfo ) (struct seq_file*,struct file*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,struct fdtable*) ;
 struct file* FUNC_1 (struct files_struct*,unsigned int) ;
 struct fdtable* FUNC_2 (struct files_struct*) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 struct files_struct* FUNC_5 (struct task_struct*) ;
 struct task_struct* FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (struct files_struct*) ;
 int FUNC_9 (struct task_struct*) ;
 TYPE_3__* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct seq_file*) ;
 int FUNC_12 (struct seq_file*,char*,long long,int,int ) ;
 int FUNC_13 (struct seq_file*,struct file*,struct files_struct*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct seq_file*,struct file*) ;

__attribute__((used)) static int FUNC_17(struct seq_file *VAR_2, void *VAR_3)
{
 struct files_struct *VAR_4 = ((void*)0);
 int VAR_5 = 0, VAR_6 = -VAR_0;
 struct file *VAR_7 = ((void*)0);
 struct task_struct *VAR_8;

 VAR_8 = FUNC_6(VAR_2->private);
 if (!VAR_8)
  return -VAR_0;

 VAR_4 = FUNC_5(VAR_8);
 FUNC_9(VAR_8);

 if (VAR_4) {
  unsigned int VAR_9 = FUNC_7(VAR_2->private);

  FUNC_14(&VAR_4->file_lock);
  VAR_7 = FUNC_1(VAR_4, VAR_9);
  if (VAR_7) {
   struct fdtable *VAR_10 = FUNC_2(VAR_4);

   VAR_5 = VAR_7->f_flags;
   if (FUNC_0(VAR_9, VAR_10))
    VAR_5 |= VAR_1;

   FUNC_4(VAR_7);
   VAR_6 = 0;
  }
  FUNC_15(&VAR_4->file_lock);
  FUNC_8(VAR_4);
 }

 if (VAR_6)
  return VAR_6;

 FUNC_12(VAR_2, "pos:\t%lli\nflags:\t0%o\nmnt_id:\t%i\n",
     (long long)VAR_7->f_pos, VAR_5,
     FUNC_10(VAR_7->f_path.mnt)->mnt_id);

 FUNC_13(VAR_2, VAR_7, VAR_4);
 if (FUNC_11(VAR_2))
  goto out;

 if (VAR_7->f_op->show_fdinfo)
  VAR_7->f_op->show_fdinfo(VAR_2, VAR_7);

out:
 FUNC_3(VAR_7);
 return 0;
}
