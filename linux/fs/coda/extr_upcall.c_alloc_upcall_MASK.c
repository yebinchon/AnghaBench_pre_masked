
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opcode; int uid; int pgid; int pid; } ;
union inputArgs {TYPE_1__ ih; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 union inputArgs* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void *FUNC_6(int VAR_5, int VAR_6)
{
 union inputArgs *VAR_7;

 VAR_7 = FUNC_3(VAR_6, VAR_1);
        if (!VAR_7)
  return FUNC_0(-VAR_0);

        VAR_7->ih.opcode = VAR_5;
 VAR_7->ih.pid = FUNC_5(VAR_2, &VAR_3);
 VAR_7->ih.pgid = FUNC_4(VAR_2, &VAR_3);
 VAR_7->ih.uid = FUNC_2(&VAR_4, FUNC_1());

 return (void*)VAR_7;
}
