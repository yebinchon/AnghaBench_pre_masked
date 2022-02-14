
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp1_mr_tcam_region {int rtar_key_type; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,unsigned long,unsigned long,int ,unsigned long) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(void *VAR_3,
       unsigned long VAR_4,
       unsigned long VAR_5,
       unsigned long VAR_6)
{
 struct mlxsw_sp1_mr_tcam_region *VAR_7 = VAR_3;
 struct mlxsw_sp *VAR_8 = VAR_7->mlxsw_sp;
 char VAR_9[VAR_0];

 FUNC_1(VAR_9, VAR_1,
       VAR_4, VAR_6,
       VAR_7->rtar_key_type, VAR_5);
 FUNC_2(VAR_8->core, FUNC_0(VAR_2), VAR_9);
}
