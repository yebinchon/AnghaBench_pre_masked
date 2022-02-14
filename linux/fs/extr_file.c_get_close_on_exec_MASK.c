
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct files_struct {int dummy; } ;
struct fdtable {int dummy; } ;
struct TYPE_2__ {struct files_struct* files; } ;


 int FUNC_0 (unsigned int,struct fdtable*) ;
 TYPE_1__* VAR_0 ;
 struct fdtable* FUNC_1 (struct files_struct*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

bool FUNC_4(unsigned int VAR_1)
{
 struct files_struct *VAR_2 = VAR_0->files;
 struct fdtable *VAR_3;
 bool VAR_4;
 FUNC_2();
 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = FUNC_0(VAR_1, VAR_3);
 FUNC_3();
 return VAR_4;
}
