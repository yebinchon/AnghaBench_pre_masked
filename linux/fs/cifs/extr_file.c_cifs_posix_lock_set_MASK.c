
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int fl_flags; int fl_blocker; int fl_wait; } ;
struct file {int dummy; } ;
struct cifsInodeInfo {int lock_sem; int can_cache_brlcks; } ;


 struct cifsInodeInfo* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct file_lock*) ;
 int FUNC_4 (struct file*,struct file_lock*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int
FUNC_7(struct file *VAR_2, struct file_lock *VAR_3)
{
 struct cifsInodeInfo *VAR_4 = FUNC_0(FUNC_2(VAR_2));
 int VAR_5 = 1;

 if ((VAR_3->fl_flags & VAR_1) == 0)
  return VAR_5;

try_again:
 FUNC_1(&VAR_4->lock_sem);
 if (!VAR_4->can_cache_brlcks) {
  FUNC_5(&VAR_4->lock_sem);
  return VAR_5;
 }

 VAR_5 = FUNC_4(VAR_2, VAR_3, ((void*)0));
 FUNC_5(&VAR_4->lock_sem);
 if (VAR_5 == VAR_0) {
  VAR_5 = FUNC_6(VAR_3->fl_wait, !VAR_3->fl_blocker);
  if (!VAR_5)
   goto try_again;
  FUNC_3(VAR_3);
 }
 return VAR_5;
}
