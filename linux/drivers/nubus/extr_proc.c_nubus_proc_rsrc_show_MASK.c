
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {scalar_t__ size; struct inode* private; } ;
struct nubus_proc_pde_data {scalar_t__ res_size; scalar_t__ res_ptr; } ;
struct nubus_dirent {int mask; scalar_t__ data; scalar_t__ base; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct nubus_proc_pde_data* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct seq_file*,struct nubus_dirent*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct seq_file*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 struct inode *VAR_3 = VAR_1->private;
 struct nubus_proc_pde_data *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  return 0;

 if (VAR_4->res_size > VAR_1->size)
  return -VAR_0;

 if (VAR_4->res_size) {
  int VAR_5 = (int)FUNC_2(VAR_3);
  struct nubus_dirent VAR_6;

  if (!VAR_5)
   return 0;

  VAR_6.mask = VAR_5;
  VAR_6.base = VAR_4->res_ptr;
  VAR_6.data = 0;
  FUNC_1(VAR_1, &VAR_6, VAR_4->res_size);
 } else {
  unsigned int VAR_7 = (unsigned int)VAR_4->res_ptr;

  FUNC_3(VAR_1, VAR_7 >> 16);
  FUNC_3(VAR_1, VAR_7 >> 8);
  FUNC_3(VAR_1, VAR_7 >> 0);
 }
 return 0;
}
