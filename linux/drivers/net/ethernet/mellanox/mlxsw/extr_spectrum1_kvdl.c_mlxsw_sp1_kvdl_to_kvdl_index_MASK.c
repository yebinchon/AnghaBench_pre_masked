
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlxsw_sp1_kvdl_part_info {unsigned int alloc_size; scalar_t__ start_index; } ;



__attribute__((used)) static u32
FUNC_0(const struct mlxsw_sp1_kvdl_part_info *VAR_0,
        unsigned int VAR_1)
{
 return VAR_0->start_index + VAR_1 * VAR_0->alloc_size;
}
