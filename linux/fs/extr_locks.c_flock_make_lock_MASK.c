
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_lock {int fl_type; int fl_end; int fl_flags; int fl_pid; struct file* fl_owner; struct file* fl_file; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int tgid; } ;


 int VAR_0 ;
 struct file_lock* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (unsigned int) ;
 struct file_lock* FUNC_2 () ;
 int FUNC_3 (struct file_lock*) ;

__attribute__((used)) static struct file_lock *
FUNC_4(struct file *VAR_4, unsigned int VAR_5, struct file_lock *VAR_6)
{
 int VAR_7 = FUNC_1(VAR_5);

 if (VAR_7 < 0)
  return FUNC_0(VAR_7);

 if (VAR_6 == ((void*)0)) {
  VAR_6 = FUNC_2();
  if (VAR_6 == ((void*)0))
   return FUNC_0(-VAR_0);
 } else {
  FUNC_3(VAR_6);
 }

 VAR_6->fl_file = VAR_4;
 VAR_6->fl_owner = VAR_4;
 VAR_6->fl_pid = VAR_3->tgid;
 VAR_6->fl_flags = VAR_1;
 VAR_6->fl_type = VAR_7;
 VAR_6->fl_end = VAR_2;

 return VAR_6;
}
