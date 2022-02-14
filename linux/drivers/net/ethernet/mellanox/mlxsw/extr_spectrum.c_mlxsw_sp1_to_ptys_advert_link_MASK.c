
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_3__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_1__ link_modes; } ;
struct TYPE_4__ {int mask; int mask_ethtool; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static u32
FUNC_1(struct mlxsw_sp *VAR_2, u8 VAR_3,
         const struct ethtool_link_ksettings *VAR_4)
{
 u32 VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (FUNC_0(VAR_1[VAR_6].mask_ethtool,
        VAR_4->link_modes.advertising))
   VAR_5 |= VAR_1[VAR_6].mask;
 }
 return VAR_5;
}
