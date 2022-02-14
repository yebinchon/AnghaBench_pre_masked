
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct nfp_prog {unsigned int __prog_alloc_len; int prog_len; int bpf; scalar_t__ prog; } ;
struct nfp_net {int dummy; } ;
struct bpf_prog {TYPE_2__* aux; } ;
struct TYPE_4__ {TYPE_1__* offload; } ;
struct TYPE_3__ {int jited_len; scalar_t__ jited_image; scalar_t__ opt_failed; struct nfp_prog* dev_priv; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int,int ) ;
 struct nfp_net* FUNC_1 (int ) ;
 int FUNC_2 (struct nfp_prog*) ;
 int FUNC_3 (int ,struct nfp_prog*,struct bpf_prog*) ;
 unsigned int FUNC_4 (struct nfp_net*,int ) ;

__attribute__((used)) static int FUNC_5(struct bpf_prog *VAR_4)
{
 struct nfp_net *VAR_5 = FUNC_1(VAR_4->aux->offload->netdev);
 struct nfp_prog *VAR_6 = VAR_4->aux->offload->dev_priv;
 unsigned int VAR_7;
 int VAR_8;


 if (VAR_4->aux->offload->opt_failed)
  return -VAR_0;

 VAR_7 = FUNC_4(VAR_5, VAR_3);
 VAR_6->__prog_alloc_len = VAR_7 * sizeof(u64);

 VAR_6->prog = FUNC_0(VAR_6->__prog_alloc_len, VAR_2);
 if (!VAR_6->prog)
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_4->aux->offload->jited_len = VAR_6->prog_len * sizeof(u64);
 VAR_4->aux->offload->jited_image = VAR_6->prog;

 return FUNC_3(VAR_6->bpf, VAR_6, VAR_4);
}
