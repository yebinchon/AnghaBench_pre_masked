
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct files_struct {int file_lock; } ;
struct fdtable {int dummy; } ;
struct TYPE_2__ {struct files_struct* files; } ;


 int FUNC_0 (unsigned int,struct fdtable*) ;
 int FUNC_1 (unsigned int,struct fdtable*) ;
 TYPE_1__* VAR_0 ;
 struct fdtable* FUNC_2 (struct files_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(unsigned int VAR_1, int VAR_2)
{
 struct files_struct *VAR_3 = VAR_0->files;
 struct fdtable *VAR_4;
 FUNC_3(&VAR_3->file_lock);
 VAR_4 = FUNC_2(VAR_3);
 if (VAR_2)
  FUNC_1(VAR_1, VAR_4);
 else
  FUNC_0(VAR_1, VAR_4);
 FUNC_4(&VAR_3->file_lock);
}
