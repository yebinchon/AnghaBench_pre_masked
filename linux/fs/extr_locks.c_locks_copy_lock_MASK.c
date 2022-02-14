
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_lock {TYPE_1__* fl_ops; int fl_file; } ;
struct TYPE_2__ {int (* fl_copy_lock ) (struct file_lock*,struct file_lock*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct file_lock*,struct file_lock*) ;
 int FUNC_2 (struct file_lock*,struct file_lock*) ;

void FUNC_3(struct file_lock *VAR_0, struct file_lock *VAR_1)
{

 FUNC_0(VAR_0->fl_ops);

 FUNC_1(VAR_0, VAR_1);

 VAR_0->fl_file = VAR_1->fl_file;
 VAR_0->fl_ops = VAR_1->fl_ops;

 if (VAR_1->fl_ops) {
  if (VAR_1->fl_ops->fl_copy_lock)
   VAR_1->fl_ops->fl_copy_lock(VAR_0, VAR_1);
 }
}
