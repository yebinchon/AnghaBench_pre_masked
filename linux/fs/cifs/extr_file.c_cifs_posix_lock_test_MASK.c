
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {unsigned char fl_type; int fl_flags; } ;
struct file {int dummy; } ;
struct cifsInodeInfo {int lock_sem; int can_cache_brlcks; } ;


 struct cifsInodeInfo* FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*,struct file_lock*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_2, struct file_lock *VAR_3)
{
 int VAR_4 = 0;
 struct cifsInodeInfo *VAR_5 = FUNC_0(FUNC_2(VAR_2));
 unsigned char VAR_6 = VAR_3->fl_type;

 if ((VAR_3->fl_flags & VAR_0) == 0)
  return 1;

 FUNC_1(&VAR_5->lock_sem);
 FUNC_3(VAR_2, VAR_3);

 if (VAR_3->fl_type == VAR_1 && !VAR_5->can_cache_brlcks) {
  VAR_3->fl_type = VAR_6;
  VAR_4 = 1;
 }

 FUNC_4(&VAR_5->lock_sem);
 return VAR_4;
}
