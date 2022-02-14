
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif {int vr_id; int rif_index; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(struct mlxsw_sp_rif *VAR_5, bool VAR_6)
{
 struct mlxsw_sp *VAR_7 = VAR_5->mlxsw_sp;
 char VAR_8[VAR_1];

 FUNC_2(VAR_8, VAR_6, VAR_3,
       VAR_5->rif_index, VAR_5->vr_id, VAR_0);
 FUNC_1(VAR_8,
          VAR_2);

 return FUNC_3(VAR_7->core, FUNC_0(VAR_4), VAR_8);
}
