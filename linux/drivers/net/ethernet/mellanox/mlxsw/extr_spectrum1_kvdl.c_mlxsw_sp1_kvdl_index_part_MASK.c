
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ start_index; scalar_t__ end_index; } ;
struct mlxsw_sp1_kvdl_part {TYPE_1__ info; } ;
struct mlxsw_sp1_kvdl {struct mlxsw_sp1_kvdl_part** parts; } ;


 int VAR_0 ;
 struct mlxsw_sp1_kvdl_part* FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static struct mlxsw_sp1_kvdl_part *
FUNC_1(struct mlxsw_sp1_kvdl *VAR_2, u32 VAR_3)
{
 struct mlxsw_sp1_kvdl_part *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = VAR_2->parts[VAR_5];
  if (VAR_3 >= VAR_4->info.start_index &&
      VAR_3 <= VAR_4->info.end_index)
   return VAR_4;
 }

 return FUNC_0(-VAR_0);
}
