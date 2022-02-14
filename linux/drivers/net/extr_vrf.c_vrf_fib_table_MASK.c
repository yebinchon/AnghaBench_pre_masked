
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_vrf {int tb_id; } ;
struct net_device {int dummy; } ;


 struct net_vrf* FUNC_0 (struct net_device const*) ;

__attribute__((used)) static u32 FUNC_1(const struct net_device *VAR_0)
{
 struct net_vrf *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->tb_id;
}
