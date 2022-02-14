
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ prog; } ;
struct TYPE_3__ {int ctrl; } ;
struct nfp_net {TYPE_2__ xdp_hw; TYPE_1__ dp; } ;
struct nfp_app {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfp_net*,struct bpf_prog*,int,struct netlink_ext_ack*) ;
 int FUNC_1 (struct nfp_net*) ;

__attribute__((used)) static int
FUNC_2(struct nfp_app *VAR_3, struct nfp_net *VAR_4,
      struct bpf_prog *VAR_5, struct netlink_ext_ack *VAR_6)
{
 bool VAR_7, VAR_8;

 if (!FUNC_1(VAR_4))
  return -VAR_1;

 VAR_7 = VAR_4->dp.ctrl & VAR_2;
 VAR_8 = VAR_7 && VAR_4->xdp_hw.prog;

 if (!VAR_5 && !VAR_8)
  return 0;
 if (VAR_5 && VAR_7 && !VAR_8)
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_5, VAR_7, VAR_6);
}
