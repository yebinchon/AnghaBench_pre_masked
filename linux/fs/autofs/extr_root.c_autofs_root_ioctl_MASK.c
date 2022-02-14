
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 long FUNC_0 (struct inode*,struct file*,unsigned int,unsigned long) ;
 struct inode* FUNC_1 (struct file*) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_0,
          unsigned int VAR_1, unsigned long VAR_2)
{
 struct inode *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_0, VAR_1, VAR_2);
}
