
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_comp; } ;
struct bnad {TYPE_1__ bnad_completions; } ;
struct bna_tx {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, struct bna_tx *VAR_1)
{
 struct bnad *VAR_2 = (struct bnad *)VAR_0;

 FUNC_0(&VAR_2->bnad_completions.tx_comp);
}
