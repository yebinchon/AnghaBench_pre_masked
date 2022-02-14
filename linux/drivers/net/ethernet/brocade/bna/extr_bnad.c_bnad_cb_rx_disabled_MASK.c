
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_comp; } ;
struct bnad {TYPE_1__ bnad_completions; } ;
struct bna_rx {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, struct bna_rx *VAR_1)
{
 struct bnad *VAR_2 = (struct bnad *)VAR_0;

 FUNC_0(&VAR_2->bnad_completions.rx_comp);
}
