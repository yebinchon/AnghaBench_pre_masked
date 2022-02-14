
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqueue_inode_info {scalar_t__ notify_owner; int lock; } ;
struct file {int dummy; } ;
typedef int fl_owner_t ;


 struct mqueue_inode_info* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct mqueue_inode_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_1, fl_owner_t VAR_2)
{
 struct mqueue_inode_info *VAR_3 = FUNC_0(FUNC_1(VAR_1));

 FUNC_3(&VAR_3->lock);
 if (FUNC_5(VAR_0) == VAR_3->notify_owner)
  FUNC_2(VAR_3);

 FUNC_4(&VAR_3->lock);
 return 0;
}
