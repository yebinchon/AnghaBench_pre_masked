
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int qos; int vlan; int node_guid; int mac; int link_state; } ;
struct mlx5_vport {scalar_t__ vport; TYPE_1__ info; } ;
struct mlx5_eswitch {scalar_t__ manager_vport; scalar_t__ mode; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_1 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,int,int ) ;
 int FUNC_5 (int ,scalar_t__,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct mlx5_eswitch *VAR_4,
     struct mlx5_vport *VAR_5)
{
 u16 VAR_6 = VAR_5->vport;
 int VAR_7;

 if (VAR_4->manager_vport == VAR_6)
  return;

 FUNC_4(VAR_4->dev,
          VAR_1,
          VAR_6, 1,
          VAR_5->info.link_state);


 if (VAR_6) {
  FUNC_2(VAR_4->dev, VAR_6,
        VAR_5->info.mac);
  FUNC_3(VAR_4->dev, VAR_6,
      VAR_5->info.node_guid);
 }

 VAR_7 = (VAR_5->info.vlan || VAR_5->info.qos) ?
  VAR_3 | VAR_2 : 0;
 FUNC_5(VAR_4->dev, VAR_6, VAR_5->info.vlan, VAR_5->info.qos,
          VAR_7);


 if (VAR_4->mode == VAR_0) {
  FUNC_1(VAR_4, VAR_5);
  FUNC_0(VAR_4, VAR_5);
 }
}
