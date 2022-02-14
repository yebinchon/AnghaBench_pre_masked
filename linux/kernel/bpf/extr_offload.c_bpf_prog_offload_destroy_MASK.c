
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_prog {TYPE_1__* aux; } ;
struct TYPE_2__ {scalar_t__ offload; } ;


 int FUNC_0 (struct bpf_prog*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct bpf_prog *VAR_1)
{
 FUNC_1(&VAR_0);
 if (VAR_1->aux->offload)
  FUNC_0(VAR_1);
 FUNC_2(&VAR_0);
}
