
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int active_cvlans; } ;
struct TYPE_4__ {TYPE_1__ vlan; } ;
struct mlx5e_priv {TYPE_2__ fs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx5e_priv*,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mlx5e_priv *VAR_1, u16 VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_2, VAR_1->fs.vlan.active_cvlans);

 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_2, VAR_1->fs.vlan.active_cvlans);

 return VAR_3;
}
