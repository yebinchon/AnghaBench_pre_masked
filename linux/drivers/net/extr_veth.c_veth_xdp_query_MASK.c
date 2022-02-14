
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct veth_priv {struct bpf_prog* _xdp_prog; } ;
struct net_device {int dummy; } ;
struct bpf_prog {TYPE_1__* aux; } ;
struct TYPE_2__ {int id; } ;


 struct veth_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_0)
{
 struct veth_priv *VAR_1 = FUNC_0(VAR_0);
 const struct bpf_prog *VAR_2;

 VAR_2 = VAR_1->_xdp_prog;
 if (VAR_2)
  return VAR_2->aux->id;

 return 0;
}
