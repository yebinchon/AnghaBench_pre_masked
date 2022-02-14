
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_prog {int bpf; int prog; } ;
struct bpf_prog {TYPE_2__* aux; } ;
struct TYPE_4__ {TYPE_1__* offload; } ;
struct TYPE_3__ {struct nfp_prog* dev_priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct nfp_prog*) ;
 int FUNC_2 (struct nfp_prog*) ;

__attribute__((used)) static void FUNC_3(struct bpf_prog *VAR_0)
{
 struct nfp_prog *VAR_1 = VAR_0->aux->offload->dev_priv;

 FUNC_0(VAR_1->prog);
 FUNC_1(VAR_1->bpf, VAR_1);
 FUNC_2(VAR_1);
}
