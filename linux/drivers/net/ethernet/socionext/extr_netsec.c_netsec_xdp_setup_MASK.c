
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netsec_priv {int xdp_prog; struct net_device* ndev; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int mtu; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct bpf_prog*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 struct bpf_prog* FUNC_5 (int *,struct bpf_prog*) ;

__attribute__((used)) static int FUNC_6(struct netsec_priv *VAR_1, struct bpf_prog *VAR_2,
       struct netlink_ext_ack *VAR_3)
{
 struct net_device *VAR_4 = VAR_1->ndev;
 struct bpf_prog *VAR_5;


 if (VAR_2 && VAR_4->mtu > 1500) {
  FUNC_0(VAR_3, "Jumbo frames not supported on XDP");
  return -VAR_0;
 }

 if (FUNC_2(VAR_4))
  FUNC_4(VAR_4);


 VAR_5 = FUNC_5(&VAR_1->xdp_prog, VAR_2);
 if (VAR_5)
  FUNC_1(VAR_5);

 if (FUNC_2(VAR_4))
  FUNC_3(VAR_4);

 return 0;
}
