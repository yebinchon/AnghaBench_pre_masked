
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct the_nilfs {int dummy; } ;
struct inode {TYPE_2__* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_5__ {struct the_nilfs* s_fs_info; } ;
struct TYPE_4__ {struct inode* host; } ;


 int FUNC_0 (TYPE_2__*,struct inode*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct the_nilfs*) ;
 scalar_t__ FUNC_3 (struct inode*) ;

int FUNC_4(struct file *VAR_0, loff_t VAR_1, loff_t VAR_2, int VAR_3)
{
 struct the_nilfs *VAR_4;
 struct inode *VAR_5 = VAR_0->f_mapping->host;
 int VAR_6 = 0;

 if (FUNC_3(VAR_5)) {
  if (VAR_3)
   VAR_6 = FUNC_0(VAR_5->i_sb, VAR_5,
           VAR_1, VAR_2);
  else
   VAR_6 = FUNC_1(VAR_5->i_sb);
 }

 VAR_4 = VAR_5->i_sb->s_fs_info;
 if (!VAR_6)
  VAR_6 = FUNC_2(VAR_4);

 return VAR_6;
}
