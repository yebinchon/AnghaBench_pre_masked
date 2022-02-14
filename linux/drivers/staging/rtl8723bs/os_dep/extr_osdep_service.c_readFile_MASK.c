
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int f_pos; TYPE_1__* f_op; } ;
struct TYPE_2__ {int read; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,char*,int,int *) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0;

 if (!VAR_1->f_op || !VAR_1->f_op->read)
  return -VAR_0;

 while (VAR_5 < VAR_3) {
  VAR_4 = FUNC_0(VAR_1, VAR_2 + VAR_5, VAR_3 - VAR_5, &VAR_1->f_pos);
  if (VAR_4 > 0)
   VAR_5 += VAR_4;
  else if (0 != VAR_4)
   return VAR_4;
  else
   break;
 }

 return VAR_5;

}
