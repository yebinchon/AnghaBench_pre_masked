
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_nve_config {int learning_en; int ul_tb_id; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (char*,struct mlxsw_sp_nve_config const*) ;
 int FUNC_5 (struct mlxsw_sp*,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(struct mlxsw_sp *VAR_2,
          const struct mlxsw_sp_nve_config *VAR_3)
{
 char VAR_4[VAR_0];
 u16 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_5(VAR_2, VAR_3->ul_tb_id,
       &VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_4(VAR_4, VAR_3);
 FUNC_1(VAR_4, VAR_3->learning_en);
 FUNC_2(VAR_4, VAR_5);

 return FUNC_3(VAR_2->core, FUNC_0(VAR_1), VAR_4);
}
