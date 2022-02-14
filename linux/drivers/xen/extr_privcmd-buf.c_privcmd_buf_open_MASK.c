
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct privcmd_buf_private {int list; int lock; } ;
struct inode {int dummy; } ;
struct file {struct privcmd_buf_private* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct privcmd_buf_private* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct privcmd_buf_private *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_2(&VAR_4->lock);
 FUNC_0(&VAR_4->list);

 VAR_3->private_data = VAR_4;

 return 0;
}
