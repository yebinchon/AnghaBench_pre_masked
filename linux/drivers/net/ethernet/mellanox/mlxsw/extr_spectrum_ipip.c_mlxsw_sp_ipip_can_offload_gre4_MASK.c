
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_3__ {scalar_t__ ttl; int tos; } ;
struct TYPE_4__ {int i_flags; int o_flags; TYPE_1__ iph; } ;
struct ip_tunnel {TYPE_2__ parms; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct net_device const*) ;
 struct ip_tunnel* FUNC_1 (struct net_device const*) ;

__attribute__((used)) static bool FUNC_2(const struct mlxsw_sp *VAR_2,
        const struct net_device *VAR_3,
        enum mlxsw_sp_l3proto VAR_4)
{
 struct ip_tunnel *VAR_5 = FUNC_1(VAR_3);
 __be16 VAR_6 = VAR_1;
 bool VAR_7 = VAR_5->parms.iph.ttl == 0;
 bool VAR_8 = VAR_5->parms.iph.tos & 0x1;

 return (VAR_5->parms.i_flags & ~VAR_6) == 0 &&
        (VAR_5->parms.o_flags & ~VAR_6) == 0 &&
        VAR_7 && VAR_8 &&
        FUNC_0(VAR_0, VAR_3);
}
