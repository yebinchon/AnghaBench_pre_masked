
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mcast_comp; int mcast_comp_status; } ;
struct bnad {TYPE_1__ bnad_completions; } ;
struct bna_rx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct bnad *VAR_1, struct bna_rx *VAR_2)
{
 VAR_1->bnad_completions.mcast_comp_status = VAR_0;
 FUNC_0(&VAR_1->bnad_completions.mcast_comp);
}
