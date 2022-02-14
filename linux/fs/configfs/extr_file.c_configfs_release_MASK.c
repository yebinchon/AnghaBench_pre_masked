
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct configfs_buffer* private_data; } ;
struct configfs_buffer {int mutex; scalar_t__ page; int owner; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct configfs_buffer*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct configfs_buffer *VAR_2 = VAR_1->private_data;

 FUNC_2(VAR_2->owner);
 if (VAR_2->page)
  FUNC_0((unsigned long)VAR_2->page);
 FUNC_3(&VAR_2->mutex);
 FUNC_1(VAR_2);
 return 0;
}
