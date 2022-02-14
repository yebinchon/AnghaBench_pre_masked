
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_sp_rif_counter_dir { ____Placeholder_mlxsw_sp_rif_counter_dir } mlxsw_sp_rif_counter_dir ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (char*,unsigned int,int,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp *VAR_3, u16 VAR_4,
         unsigned int VAR_5, bool VAR_6,
         enum mlxsw_sp_rif_counter_dir VAR_7)
{
 char VAR_8[VAR_0];
 bool VAR_9 = 0;
 int VAR_10;

 if (VAR_7 == VAR_1)
  VAR_9 = 1;
 FUNC_3(VAR_8, VAR_4);
 VAR_10 = FUNC_1(VAR_3->core, FUNC_0(VAR_2), VAR_8);
 if (VAR_10)
  return VAR_10;

 FUNC_2(VAR_8, VAR_5, VAR_6,
        VAR_9);
 return FUNC_4(VAR_3->core, FUNC_0(VAR_2), VAR_8);
}
