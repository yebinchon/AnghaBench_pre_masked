
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mlxsw_sp_rif {TYPE_1__* dev; int vr_id; int rif_index; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_reg_ritr_if_type { ____Placeholder_mlxsw_reg_ritr_if_type } mlxsw_reg_ritr_if_type ;
struct TYPE_2__ {int dev_addr; int mtu; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int,int,int ,int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp_rif *VAR_2,
        enum mlxsw_reg_ritr_if_type VAR_3,
        u16 VAR_4, bool VAR_5)
{
 struct mlxsw_sp *VAR_6 = VAR_2->mlxsw_sp;
 char VAR_7[VAR_0];

 FUNC_3(VAR_7, VAR_5, VAR_3, VAR_2->rif_index, VAR_2->vr_id,
       VAR_2->dev->mtu);
 FUNC_2(VAR_7, VAR_2->dev->dev_addr);
 FUNC_1(VAR_7, VAR_3, VAR_4);

 return FUNC_4(VAR_6->core, FUNC_0(VAR_1), VAR_7);
}
