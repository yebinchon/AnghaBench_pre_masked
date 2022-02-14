
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp1_mr_tcam_region {int rtar_key_type; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp1_mr_tcam_region *VAR_4)
{
 struct mlxsw_sp *VAR_5 = VAR_4->mlxsw_sp;
 char VAR_6[VAR_0];

 FUNC_1(VAR_6, VAR_1,
       VAR_4->rtar_key_type,
       VAR_2);
 return FUNC_2(VAR_5->core, FUNC_0(VAR_3), VAR_6);
}
