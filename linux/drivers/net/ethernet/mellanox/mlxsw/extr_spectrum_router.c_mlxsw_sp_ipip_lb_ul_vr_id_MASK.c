
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mlxsw_sp_vr {int id; } ;
struct TYPE_2__ {int mlxsw_sp; int dev; } ;
struct mlxsw_sp_rif_ipip_lb {TYPE_1__ common; } ;


 int FUNC_0 (struct mlxsw_sp_vr*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct mlxsw_sp_vr* FUNC_3 (int ,int ,int *) ;

u16 FUNC_4(const struct mlxsw_sp_rif_ipip_lb *VAR_0)
{
 u32 VAR_1 = FUNC_2(VAR_0->common.dev);
 struct mlxsw_sp_vr *VAR_2;

 VAR_2 = FUNC_3(VAR_0->common.mlxsw_sp, VAR_1, ((void*)0));
 if (FUNC_1(FUNC_0(VAR_2)))
  return 0;

 return VAR_2->id;
}
