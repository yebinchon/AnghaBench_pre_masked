
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kgdb_state {size_t cpu; } ;
struct TYPE_2__ {int debuggerinfo; int task; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

int FUNC_1(struct kgdb_state *VAR_5)
{
 VAR_2 = FUNC_0(&VAR_3);
 VAR_1 = VAR_4[VAR_5->cpu].task;
 VAR_0 = VAR_4[VAR_5->cpu].debuggerinfo;
 return 0;
}
