
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
struct dir_context {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,struct dir_context*,int ) ;

int FUNC_3(struct file *VAR_0, struct dir_context *VAR_1)
{
 struct inode *VAR_2 = FUNC_1(VAR_0);

 return FUNC_2(VAR_0, VAR_1, FUNC_0(VAR_2));
}
