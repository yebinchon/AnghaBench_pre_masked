
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {TYPE_4__* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_8__ {int s_bdev; } ;
struct TYPE_7__ {TYPE_2__* fat_inode; } ;
struct TYPE_6__ {int i_mapping; } ;
struct TYPE_5__ {struct inode* host; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct file*,int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct file *VAR_1, loff_t VAR_2, loff_t VAR_3, int VAR_4)
{
 struct inode *VAR_5 = VAR_1->f_mapping->host;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(FUNC_0(VAR_5->i_sb)->fat_inode->i_mapping);
 if (VAR_6)
  return VAR_6;

 return FUNC_2(VAR_5->i_sb->s_bdev, VAR_0, ((void*)0));
}
