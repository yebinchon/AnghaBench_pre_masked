
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct mlxsw_sp1_kvdl_part_info {unsigned int start_index; unsigned int alloc_size; } ;



__attribute__((used)) static unsigned int
FUNC_0(const struct mlxsw_sp1_kvdl_part_info *VAR_0,
         u32 VAR_1)
{
 return (VAR_1 - VAR_0->start_index) / VAR_0->alloc_size;
}
