
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int active_svlans; } ;
struct TYPE_4__ {TYPE_1__ vlan; } ;
struct mlx5e_priv {TYPE_2__ fs; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx5e_priv*,int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct mlx5e_priv *VAR_1, u16 VAR_2)
{
 struct net_device *VAR_3 = VAR_1->netdev;
 int VAR_4;

 FUNC_3(VAR_2, VAR_1->fs.vlan.active_svlans);

 VAR_4 = FUNC_1(VAR_1, VAR_0, VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_2, VAR_1->fs.vlan.active_svlans);
  return VAR_4;
 }


 FUNC_2(VAR_3);
 return VAR_4;
}
