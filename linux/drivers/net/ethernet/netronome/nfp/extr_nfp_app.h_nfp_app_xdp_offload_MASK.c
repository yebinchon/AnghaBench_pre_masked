
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net {int dummy; } ;
struct nfp_app {TYPE_1__* type; } ;
struct netlink_ext_ack {int dummy; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_2__ {int (* xdp_offload ) (struct nfp_app*,struct nfp_net*,struct bpf_prog*,struct netlink_ext_ack*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_app*,struct nfp_net*,struct bpf_prog*,struct netlink_ext_ack*) ;

__attribute__((used)) static inline int FUNC_1(struct nfp_app *VAR_1, struct nfp_net *VAR_2,
          struct bpf_prog *VAR_3,
          struct netlink_ext_ack *VAR_4)
{
 if (!VAR_1 || !VAR_1->type->xdp_offload)
  return -VAR_0;
 return VAR_1->type->xdp_offload(VAR_1, VAR_2, VAR_3, VAR_4);
}
