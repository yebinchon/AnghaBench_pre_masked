
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct file_lock {int fl_flags; int fl_file; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct notifier_block *VAR_1, unsigned long VAR_2,
       void *VAR_3)
{
 struct file_lock *VAR_4 = VAR_3;


 if (VAR_4->fl_flags & VAR_0)
  FUNC_1(FUNC_0(VAR_4->fl_file));
 return 0;
}
