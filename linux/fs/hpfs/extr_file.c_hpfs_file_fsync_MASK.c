
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_2__* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_4__ {int s_bdev; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 (struct file*,int ,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct file *VAR_0, loff_t VAR_1, loff_t VAR_2, int VAR_3)
{
 struct inode *VAR_4 = VAR_0->f_mapping->host;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;
 return FUNC_1(VAR_4->i_sb->s_bdev);
}
