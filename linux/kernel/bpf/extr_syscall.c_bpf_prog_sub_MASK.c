
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_prog {TYPE_1__* aux; } ;
struct TYPE_2__ {int refcnt; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int *) ;

void FUNC_2(struct bpf_prog *VAR_0, int VAR_1)
{





 FUNC_0(FUNC_1(VAR_1, &VAR_0->aux->refcnt) == 0);
}
