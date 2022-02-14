
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int alloc_size; } ;
struct mlxsw_sp1_kvdl_part {TYPE_1__ info; } ;
struct mlxsw_sp1_kvdl {struct mlxsw_sp1_kvdl_part** parts; } ;


 int VAR_0 ;
 struct mlxsw_sp1_kvdl_part* FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static struct mlxsw_sp1_kvdl_part *
FUNC_1(struct mlxsw_sp1_kvdl *VAR_2,
          unsigned int VAR_3)
{
 struct mlxsw_sp1_kvdl_part *VAR_4, *VAR_5 = ((void*)0);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_4 = VAR_2->parts[VAR_6];
  if (VAR_3 <= VAR_4->info.alloc_size &&
      (!VAR_5 ||
       VAR_4->info.alloc_size <= VAR_5->info.alloc_size))
   VAR_5 = VAR_4;
 }

 return VAR_5 ?: FUNC_0(-VAR_0);
}
