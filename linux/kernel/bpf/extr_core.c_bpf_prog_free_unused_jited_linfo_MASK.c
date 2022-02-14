
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_prog {TYPE_1__* aux; } ;
struct TYPE_2__ {int * jited_linfo; } ;


 int FUNC_0 (struct bpf_prog*) ;

void FUNC_1(struct bpf_prog *VAR_0)
{
 if (VAR_0->aux->jited_linfo && !VAR_0->aux->jited_linfo[0])
  FUNC_0(VAR_0);
}
