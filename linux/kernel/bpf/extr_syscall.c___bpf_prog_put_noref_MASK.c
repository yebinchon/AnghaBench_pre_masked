
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_prog {TYPE_1__* aux; } ;
struct TYPE_2__ {int rcu; int btf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bpf_prog*) ;
 int FUNC_2 (struct bpf_prog*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int (*) (int *)) ;

__attribute__((used)) static void FUNC_5(struct bpf_prog *VAR_0, bool VAR_1)
{
 FUNC_2(VAR_0);
 FUNC_3(VAR_0->aux->btf);
 FUNC_1(VAR_0);

 if (VAR_1)
  FUNC_4(&VAR_0->aux->rcu, FUNC_0);
 else
  FUNC_0(&VAR_0->aux->rcu);
}
