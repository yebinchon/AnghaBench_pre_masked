
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct files_struct {int dummy; } ;
struct file {int f_mode; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct files_struct* files; } ;


 TYPE_1__* VAR_0 ;
 struct file* FUNC_0 (struct files_struct*,unsigned int) ;
 int FUNC_1 (struct file*,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static struct file *FUNC_4(unsigned int VAR_1, fmode_t VAR_2, unsigned int VAR_3)
{
 struct files_struct *VAR_4 = VAR_0->files;
 struct file *VAR_5;

 FUNC_2();
loop:
 VAR_5 = FUNC_0(VAR_4, VAR_1);
 if (VAR_5) {




  if (VAR_5->f_mode & VAR_2)
   VAR_5 = ((void*)0);
  else if (!FUNC_1(VAR_5, VAR_3))
   goto loop;
 }
 FUNC_3();

 return VAR_5;
}
