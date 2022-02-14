
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
struct cifsInodeInfo {scalar_t__ time; } ;


 struct cifsInodeInfo* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0)
{
 struct inode *VAR_1 = FUNC_1(VAR_0);
 struct cifsInodeInfo *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->time == 0)
  return 1;
 else
  return 0;

}
