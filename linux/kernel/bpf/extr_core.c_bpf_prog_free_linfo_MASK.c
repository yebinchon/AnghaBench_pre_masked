
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_prog {TYPE_1__* aux; } ;
struct TYPE_2__ {int linfo; } ;


 int FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct bpf_prog *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->aux->linfo);
}
