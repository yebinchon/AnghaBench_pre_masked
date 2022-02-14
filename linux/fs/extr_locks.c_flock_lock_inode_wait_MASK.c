
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file_lock {int fl_blocker; int fl_wait; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct file_lock*) ;
 int FUNC_1 (struct file_lock*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct file_lock *VAR_2)
{
 int VAR_3;
 FUNC_2();
 for (;;) {
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3 != VAR_0)
   break;
  VAR_3 = FUNC_3(VAR_2->fl_wait, !VAR_2->fl_blocker);
  if (VAR_3)
   break;
 }
 FUNC_1(VAR_2);
 return VAR_3;
}
