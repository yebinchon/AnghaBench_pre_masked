
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlxsw_sp1_kvdl_part {int dummy; } ;
struct mlxsw_sp1_kvdl {struct mlxsw_sp1_kvdl_part** parts; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct mlxsw_sp1_kvdl_part*) ;

__attribute__((used)) static u64 FUNC_1(void *VAR_1)
{
 const struct mlxsw_sp1_kvdl *VAR_2 = VAR_1;
 struct mlxsw_sp1_kvdl_part *VAR_3;

 VAR_3 = VAR_2->parts[VAR_0];
 return FUNC_0(VAR_3);
}
