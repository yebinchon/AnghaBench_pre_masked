
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_pos; } ;
struct coredump_params {scalar_t__ written; scalar_t__ limit; int pos; struct file* file; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (struct file*,void const*,int,int *) ;
 scalar_t__ FUNC_1 () ;

int FUNC_2(struct coredump_params *VAR_0, const void *VAR_1, int VAR_2)
{
 struct file *VAR_3 = VAR_0->file;
 loff_t VAR_4 = VAR_3->f_pos;
 ssize_t VAR_5;
 if (VAR_0->written + VAR_2 > VAR_0->limit)
  return 0;
 while (VAR_2) {
  if (FUNC_1())
   return 0;
  VAR_5 = FUNC_0(VAR_3, VAR_1, VAR_2, &VAR_4);
  if (VAR_5 <= 0)
   return 0;
  VAR_3->f_pos = VAR_4;
  VAR_0->written += VAR_5;
  VAR_0->pos += VAR_5;
  VAR_2 -= VAR_5;
 }
 return 1;
}
