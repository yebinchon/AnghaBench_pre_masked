
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * tm_next; int tm_active; } ;
struct TYPE_4__ {TYPE_1__ st_fast; int * st_queue; } ;
struct s_smc {TYPE_2__ t; } ;


 int VAR_0 ;
 int FUNC_0 (struct s_smc*) ;

void FUNC_1(struct s_smc *VAR_1)
{
 VAR_1->t.st_queue = ((void*)0);
 VAR_1->t.st_fast.tm_active = VAR_0 ;
 VAR_1->t.st_fast.tm_next = ((void*)0);
 FUNC_0(VAR_1) ;
}
