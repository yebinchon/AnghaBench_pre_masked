
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct net* s_fs_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net*) ;
 int VAR_0 ;
 int FUNC_3 (struct inode*,struct file*) ;

int FUNC_4(struct inode *VAR_1, struct file *VAR_2)
{
 int VAR_3 = FUNC_3(VAR_1, VAR_2);
 struct net *VAR_4 = VAR_1->i_sb->s_fs_info;

 FUNC_0(&VAR_0);

 FUNC_2(VAR_4);
 FUNC_1(&VAR_0);
 return VAR_3;
}
