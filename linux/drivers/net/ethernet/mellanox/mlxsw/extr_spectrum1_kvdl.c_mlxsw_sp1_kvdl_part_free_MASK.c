
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp1_kvdl_part_info {int dummy; } ;
struct mlxsw_sp1_kvdl_part {int usage; struct mlxsw_sp1_kvdl_part_info info; } ;


 int FUNC_0 (unsigned int,int ) ;
 unsigned int FUNC_1 (struct mlxsw_sp1_kvdl_part_info const*,int ) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp1_kvdl_part *VAR_0,
         u32 VAR_1)
{
 const struct mlxsw_sp1_kvdl_part_info *VAR_2 = &VAR_0->info;
 unsigned int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_3, VAR_0->usage);
}
