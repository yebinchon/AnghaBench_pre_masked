
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_prog {int verifier_meta; int bpf; int type; int insns; } ;
struct bpf_prog {int len; int insnsi; TYPE_1__* aux; int type; } ;
struct TYPE_4__ {int offdev; struct nfp_prog* dev_priv; } ;
struct TYPE_3__ {TYPE_2__* offload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct nfp_prog* FUNC_2 (int,int ) ;
 int FUNC_3 (struct nfp_prog*) ;
 int FUNC_4 (struct nfp_prog*) ;
 int FUNC_5 (struct nfp_prog*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct bpf_prog *VAR_2)
{
 struct nfp_prog *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;
 VAR_2->aux->offload->dev_priv = VAR_3;

 FUNC_0(&VAR_3->insns);
 VAR_3->type = VAR_2->type;
 VAR_3->bpf = FUNC_1(VAR_2->aux->offload->offdev);

 VAR_4 = FUNC_5(VAR_3, VAR_2->insnsi, VAR_2->len);
 if (VAR_4)
  goto err_free;

 VAR_3->verifier_meta = FUNC_3(VAR_3);

 return 0;

err_free:
 FUNC_4(VAR_3);

 return VAR_4;
}
