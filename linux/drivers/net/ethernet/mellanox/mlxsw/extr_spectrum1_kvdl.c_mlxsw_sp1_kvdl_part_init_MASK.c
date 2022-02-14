
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mlxsw_sp1_kvdl_part_info {int alloc_size; scalar_t__ start_index; scalar_t__ end_index; int resource_id; } ;
struct mlxsw_sp1_kvdl_part {int info; } ;
struct mlxsw_sp {int core; } ;
struct devlink {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 struct mlxsw_sp1_kvdl_part* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct devlink*,int ,scalar_t__*) ;
 unsigned int FUNC_3 (scalar_t__,int ) ;
 struct mlxsw_sp1_kvdl_part* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct mlxsw_sp1_kvdl_part_info const*,int) ;
 int FUNC_6 (struct mlxsw_sp1_kvdl_part*,struct mlxsw_sp1_kvdl_part*,scalar_t__) ;
 struct devlink* FUNC_7 (int ) ;

__attribute__((used)) static struct mlxsw_sp1_kvdl_part *
FUNC_8(struct mlxsw_sp *VAR_2,
    const struct mlxsw_sp1_kvdl_part_info *VAR_3,
    struct mlxsw_sp1_kvdl_part *VAR_4)
{
 struct devlink *VAR_5 = FUNC_7(VAR_2->core);
 struct mlxsw_sp1_kvdl_part *VAR_6;
 bool VAR_7 = 1;
 unsigned int VAR_8;
 size_t VAR_9;
 u64 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_5, VAR_3->resource_id,
     &VAR_10);
 if (VAR_11) {
  VAR_7 = 0;
  VAR_10 = VAR_3->end_index - VAR_3->start_index + 1;
 }

 VAR_8 = FUNC_3(VAR_10, VAR_3->alloc_size);
 VAR_9 = FUNC_0(VAR_8) * sizeof(unsigned long);
 VAR_6 = FUNC_4(sizeof(*VAR_6) + VAR_9, VAR_1);
 if (!VAR_6)
  return FUNC_1(-VAR_0);

 FUNC_5(&VAR_6->info, VAR_3, sizeof(VAR_6->info));

 if (VAR_7)
  FUNC_6(VAR_6, VAR_4, VAR_10);
 return VAR_6;
}
