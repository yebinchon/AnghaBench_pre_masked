
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_4__ {int gvmi; struct mlx5dr_cmd_vport_cap* vports_caps; } ;
struct TYPE_3__ {TYPE_2__ caps; } ;
struct mlx5dr_domain {TYPE_1__ info; int mdev; } ;
struct mlx5dr_cmd_vport_cap {size_t num; int vhca_gvmi; int vport_gvmi; int icm_address_tx; int icm_address_rx; } ;


 int FUNC_0 (int ,int,size_t,int *,int *) ;
 int FUNC_1 (int ,int,size_t,int *) ;

__attribute__((used)) static int FUNC_2(struct mlx5dr_domain *VAR_0,
     bool VAR_1,
     u16 VAR_2)
{
 struct mlx5dr_cmd_vport_cap *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_0->info.caps.vports_caps[VAR_2];

 VAR_4 = FUNC_0(VAR_0->mdev,
       VAR_1,
       VAR_2,
       &VAR_3->icm_address_rx,
       &VAR_3->icm_address_tx);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_0->mdev,
        VAR_1,
        VAR_2,
        &VAR_3->vport_gvmi);
 if (VAR_4)
  return VAR_4;

 VAR_3->num = VAR_2;
 VAR_3->vhca_gvmi = VAR_0->info.caps.gvmi;

 return 0;
}
