
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct cx88_core {int dummy; } ;
struct cx8800_dev {struct cx88_core* core; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (unsigned int) ;
 int FUNC_1 (struct cx88_core*) ;
 int FUNC_2 (struct cx88_core*,unsigned int) ;
 struct cx8800_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2, unsigned int VAR_3)
{
 struct cx8800_dev *VAR_4 = FUNC_3(VAR_1);
 struct cx88_core *VAR_5 = VAR_4->core;

 if (VAR_3 >= 4)
  return -VAR_0;
 if (!FUNC_0(VAR_3).type)
  return -VAR_0;

 FUNC_1(VAR_5);
 FUNC_2(VAR_5, VAR_3);
 return 0;
}
