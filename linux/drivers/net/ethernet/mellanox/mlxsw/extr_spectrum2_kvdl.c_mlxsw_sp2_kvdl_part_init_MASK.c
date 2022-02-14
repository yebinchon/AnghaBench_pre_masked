
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp2_kvdl_part_info {int index_range_res_id; int usage_bit_count_res_id; } ;
struct mlxsw_sp2_kvdl_part {unsigned int usage_bit_count; unsigned int indexes_per_usage_bit; unsigned int last_allocated_bit; struct mlxsw_sp2_kvdl_part_info const* info; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_sp2_kvdl_part* FUNC_1 (int ) ;
 int VAR_2 ;
 struct mlxsw_sp2_kvdl_part* FUNC_2 (int,int ) ;
 unsigned int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static struct mlxsw_sp2_kvdl_part *
FUNC_5(struct mlxsw_sp *VAR_3,
    const struct mlxsw_sp2_kvdl_part_info *VAR_4)
{
 unsigned int VAR_5;
 struct mlxsw_sp2_kvdl_part *VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 size_t VAR_9;

 if (!FUNC_4(VAR_3->core,
      VAR_4->usage_bit_count_res_id) ||
     !FUNC_4(VAR_3->core,
      VAR_4->index_range_res_id))
  return FUNC_1(-VAR_0);
 VAR_8 = FUNC_3(VAR_3->core,
          VAR_4->usage_bit_count_res_id);
 VAR_7 = FUNC_3(VAR_3->core,
      VAR_4->index_range_res_id);





 VAR_5 = VAR_7 / VAR_8;

 VAR_9 = FUNC_0(VAR_8) * sizeof(unsigned long);
 VAR_6 = FUNC_2(sizeof(*VAR_6) + VAR_9, VAR_2);
 if (!VAR_6)
  return FUNC_1(-VAR_1);
 VAR_6->info = VAR_4;
 VAR_6->usage_bit_count = VAR_8;
 VAR_6->indexes_per_usage_bit = VAR_5;
 VAR_6->last_allocated_bit = VAR_8 - 1;
 return VAR_6;
}
