
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {unsigned long* lp_advertising; } ;
struct ethtool_link_ksettings {TYPE_1__ link_modes; } ;


 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (unsigned long*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct mlx5_core_dev *VAR_1, u32 VAR_2,
          struct ethtool_link_ksettings *VAR_3)
{
 unsigned long *VAR_4 = VAR_3->link_modes.lp_advertising;
 bool VAR_5 = FUNC_0(VAR_1, VAR_0);

 FUNC_1(VAR_4, VAR_2, VAR_5);
}
