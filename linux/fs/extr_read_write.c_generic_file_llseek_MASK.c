
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_2__* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_4__ {int s_maxbytes; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 (struct file*,int ,int,int ,int ) ;
 int FUNC_1 (struct inode*) ;

loff_t FUNC_2(struct file *VAR_0, loff_t VAR_1, int VAR_2)
{
 struct inode *VAR_3 = VAR_0->f_mapping->host;

 return FUNC_0(VAR_0, VAR_1, VAR_2,
     VAR_3->i_sb->s_maxbytes,
     FUNC_1(VAR_3));
}
