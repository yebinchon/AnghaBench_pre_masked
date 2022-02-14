
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int write; } ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int,int ,int *,int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2(void)
{
 if (!VAR_0->write)
  return;

 VAR_1 = FUNC_0("pstore", ((void*)0));

 FUNC_1("record_ftrace", 0600, VAR_1, ((void*)0),
       &VAR_2);
}
