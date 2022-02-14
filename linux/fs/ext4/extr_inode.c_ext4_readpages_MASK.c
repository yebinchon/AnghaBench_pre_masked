
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct address_space*,struct list_head*,int *,unsigned int,int) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_0, struct address_space *VAR_1,
  struct list_head *VAR_2, unsigned VAR_3)
{
 struct inode *VAR_4 = VAR_1->host;


 if (FUNC_0(VAR_4))
  return 0;

 return FUNC_1(VAR_1, VAR_2, ((void*)0), VAR_3, 1);
}
