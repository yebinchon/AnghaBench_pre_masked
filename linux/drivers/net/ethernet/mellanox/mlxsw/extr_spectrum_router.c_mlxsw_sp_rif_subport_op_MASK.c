
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_rif_subport {int vid; int system_port; int lag_id; scalar_t__ lag; } ;
struct mlxsw_sp_rif {TYPE_1__* dev; int vr_id; int rif_index; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
struct TYPE_2__ {int dev_addr; int mtu; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,int ,int ,int ,int ) ;
 int FUNC_3 (char*,scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 struct mlxsw_sp_rif_subport* FUNC_5 (struct mlxsw_sp_rif*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp_rif *VAR_3, bool VAR_4)
{
 struct mlxsw_sp *VAR_5 = VAR_3->mlxsw_sp;
 struct mlxsw_sp_rif_subport *VAR_6;
 char VAR_7[VAR_0];

 VAR_6 = FUNC_5(VAR_3);
 FUNC_2(VAR_7, VAR_4, VAR_1,
       VAR_3->rif_index, VAR_3->vr_id, VAR_3->dev->mtu);
 FUNC_1(VAR_7, VAR_3->dev->dev_addr);
 FUNC_3(VAR_7, VAR_6->lag,
      VAR_6->lag ? VAR_6->lag_id :
           VAR_6->system_port,
      VAR_6->vid);

 return FUNC_4(VAR_5->core, FUNC_0(VAR_2), VAR_7);
}
