
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {TYPE_1__* f_op; int f_mapping; } ;
typedef int fl_owner_t ;
struct TYPE_2__ {int (* flush ) (struct file*,int ) ;} ;


 struct file* FUNC_0 (struct file*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct file*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, fl_owner_t VAR_1)
{
 struct file *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->f_op->flush) {
  FUNC_1(VAR_0->f_mapping);
  return VAR_2->f_op->flush(VAR_2, VAR_1);
 }

 return 0;
}
