
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_dir {int end; scalar_t__ error; int * part; int token; } ;
struct inode {int dummy; } ;
struct file {struct orangefs_dir* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct orangefs_dir* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_4, struct file *VAR_5)
{
 struct orangefs_dir *VAR_6;
 VAR_5->private_data = FUNC_0(sizeof(struct orangefs_dir),
     VAR_1);
 if (!VAR_5->private_data)
  return -VAR_0;
 VAR_6 = VAR_5->private_data;
 VAR_6->token = VAR_2;
 VAR_6->part = ((void*)0);
 VAR_6->end = 1 << VAR_3;
 VAR_6->error = 0;
 return 0;
}
