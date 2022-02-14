
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {scalar_t__ speed; int duplex; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct mlxsw_sp*,int ) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp *VAR_3, bool VAR_4,
     u32 VAR_5,
     struct ethtool_link_ksettings *VAR_6)
{
 VAR_6->base.speed = VAR_2;
 VAR_6->base.duplex = VAR_1;

 if (!VAR_4)
  return;

 VAR_6->base.speed = FUNC_0(VAR_3, VAR_5);
 if (VAR_6->base.speed != VAR_2)
  VAR_6->base.duplex = VAR_0;
}
