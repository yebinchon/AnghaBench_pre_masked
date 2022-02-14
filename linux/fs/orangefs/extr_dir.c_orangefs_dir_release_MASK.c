
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_dir_part {struct orangefs_dir_part* next; } ;
struct orangefs_dir {struct orangefs_dir_part* part; } ;
struct inode {int dummy; } ;
struct file {struct orangefs_dir* private_data; } ;


 int FUNC_0 (struct orangefs_dir*) ;
 int FUNC_1 (struct orangefs_dir_part*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct orangefs_dir *VAR_2 = VAR_1->private_data;
 struct orangefs_dir_part *VAR_3 = VAR_2->part;
 while (VAR_3) {
  struct orangefs_dir_part *VAR_4 = VAR_3->next;
  FUNC_1(VAR_3);
  VAR_3 = VAR_4;
 }
 FUNC_0(VAR_2);
 return 0;
}
