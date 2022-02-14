
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int active_svlans; int active_cvlans; } ;
struct TYPE_4__ {TYPE_1__ vlan; } ;
struct mlx5e_priv {TYPE_2__ fs; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mlx5e_priv*,int ,int ) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

int FUNC_5(struct net_device *VAR_4, __be16 VAR_5, u16 VAR_6)
{
 struct mlx5e_priv *VAR_7 = FUNC_3(VAR_4);

 if (FUNC_0(VAR_5) == VAR_1) {
  FUNC_1(VAR_6, VAR_7->fs.vlan.active_cvlans);
  FUNC_2(VAR_7, VAR_2, VAR_6);
 } else if (FUNC_0(VAR_5) == VAR_0) {
  FUNC_1(VAR_6, VAR_7->fs.vlan.active_svlans);
  FUNC_2(VAR_7, VAR_3, VAR_6);
  FUNC_4(VAR_4);
 }

 return 0;
}
