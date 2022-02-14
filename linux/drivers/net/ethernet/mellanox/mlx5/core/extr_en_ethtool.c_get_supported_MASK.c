
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {unsigned long* supported; } ;
struct ethtool_link_ksettings {TYPE_1__ link_modes; } ;


 int VAR_0 ;
 int FUNC_0 (struct ethtool_link_ksettings*,unsigned long*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,unsigned long*,int ) ;

__attribute__((used)) static void FUNC_2(struct mlx5_core_dev *VAR_1, u32 VAR_2,
     struct ethtool_link_ksettings *VAR_3)
{
 unsigned long *VAR_4 = VAR_3->link_modes.supported;
 FUNC_1(VAR_1, VAR_4, VAR_2);

 FUNC_0(VAR_3, VAR_4, VAR_0);
}
