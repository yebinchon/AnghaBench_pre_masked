
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net {int dummy; } ;
struct nfp_app {TYPE_1__* type; } ;
struct netdev_bpf {int dummy; } ;
struct TYPE_2__ {int (* bpf ) (struct nfp_app*,struct nfp_net*,struct netdev_bpf*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_app*,struct nfp_net*,struct netdev_bpf*) ;

__attribute__((used)) static inline int FUNC_1(struct nfp_app *VAR_1, struct nfp_net *VAR_2,
         struct netdev_bpf *VAR_3)
{
 if (!VAR_1 || !VAR_1->type->bpf)
  return -VAR_0;
 return VAR_1->type->bpf(VAR_1, VAR_2, VAR_3);
}
