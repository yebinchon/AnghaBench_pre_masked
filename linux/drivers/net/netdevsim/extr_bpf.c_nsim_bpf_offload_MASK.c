
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdevsim {int bpf_offloaded_id; struct bpf_prog* bpf_offloaded; } ;
struct bpf_prog {TYPE_1__* aux; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (struct bpf_prog*,int) ;

__attribute__((used)) static int
FUNC_2(struct netdevsim *VAR_0, struct bpf_prog *VAR_1, bool VAR_2)
{
 FUNC_1(VAR_0->bpf_offloaded, 0);

 FUNC_0(!!VAR_0->bpf_offloaded != VAR_2,
      "bad offload state, expected offload %sto be active",
      VAR_2 ? "" : "not ");
 VAR_0->bpf_offloaded = VAR_1;
 VAR_0->bpf_offloaded_id = VAR_1 ? VAR_1->aux->id : 0;
 FUNC_1(VAR_1, 1);

 return 0;
}
