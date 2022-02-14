
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_priv {int peer; } ;
typedef struct net_device const net_device ;
struct net {int dummy; } ;


 struct net* FUNC_0 (struct net_device const*) ;
 struct veth_priv* FUNC_1 (struct net_device const*) ;
 struct net_device const* FUNC_2 (int ) ;

__attribute__((used)) static struct net *FUNC_3(const struct net_device *VAR_0)
{
 struct veth_priv *VAR_1 = FUNC_1(VAR_0);
 struct net_device *VAR_2 = FUNC_2(VAR_1->peer);

 return VAR_2 ? FUNC_0(VAR_2) : FUNC_0(VAR_0);
}
