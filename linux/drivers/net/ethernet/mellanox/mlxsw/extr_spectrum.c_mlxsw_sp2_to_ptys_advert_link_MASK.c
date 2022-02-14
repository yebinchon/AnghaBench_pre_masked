
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_4__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_1__ link_modes; } ;
struct TYPE_5__ {int mask_width; int mask; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32
FUNC_2(struct mlxsw_sp *VAR_2, u8 VAR_3,
         const struct ethtool_link_ksettings *VAR_4)
{
 u8 VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if ((VAR_5 & VAR_1[VAR_7].mask_width) &&
      FUNC_0(&VAR_1[VAR_7],
            VAR_4->link_modes.advertising))
   VAR_6 |= VAR_1[VAR_7].mask;
 }
 return VAR_6;
}
