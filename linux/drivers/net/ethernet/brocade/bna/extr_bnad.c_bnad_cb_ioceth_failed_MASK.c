
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioc_comp; int ioc_comp_status; } ;
struct bnad {TYPE_1__ bnad_completions; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void
FUNC_1(struct bnad *VAR_1)
{
 VAR_1->bnad_completions.ioc_comp_status = VAR_0;
 FUNC_0(&VAR_1->bnad_completions.ioc_comp);
}
