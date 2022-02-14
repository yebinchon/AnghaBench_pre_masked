
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlxsw_sp1_kvdl_part_info {int end_index; int start_index; int alloc_size; } ;
struct mlxsw_sp1_kvdl_part {int usage; struct mlxsw_sp1_kvdl_part_info info; } ;


 int FUNC_0 (int ,unsigned int,int) ;

__attribute__((used)) static u64 FUNC_1(struct mlxsw_sp1_kvdl_part *VAR_0)
{
 const struct mlxsw_sp1_kvdl_part_info *VAR_1 = &VAR_0->info;
 unsigned int VAR_2;
 int VAR_3 = -1;
 u64 VAR_4 = 0;

 VAR_2 = (VAR_1->end_index -
        VAR_1->start_index + 1) /
        VAR_1->alloc_size;
 while ((VAR_3 = FUNC_0(VAR_0->usage, VAR_2, VAR_3 + 1))
  < VAR_2)
  VAR_4 += VAR_1->alloc_size;
 return VAR_4;
}
