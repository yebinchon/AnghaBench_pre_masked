
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct files_struct {int count; } ;
struct file {int f_mode; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct files_struct* files; } ;


 unsigned long VAR_0 ;
 struct file* FUNC_0 (struct files_struct*,unsigned int) ;
 struct file* FUNC_1 (unsigned int,int,int) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static unsigned long FUNC_4(unsigned int VAR_2, fmode_t VAR_3)
{
 struct files_struct *VAR_4 = VAR_1->files;
 struct file *VAR_5;

 if (FUNC_2(&VAR_4->count) == 1) {
  VAR_5 = FUNC_0(VAR_4, VAR_2);
  if (!VAR_5 || FUNC_3(VAR_5->f_mode & VAR_3))
   return 0;
  return (unsigned long)VAR_5;
 } else {
  VAR_5 = FUNC_1(VAR_2, VAR_3, 1);
  if (!VAR_5)
   return 0;
  return VAR_0 | (unsigned long)VAR_5;
 }
}
