
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp1_kvdl_part_info {int end_index; int start_index; int alloc_size; } ;
struct mlxsw_sp1_kvdl_part {int usage; struct mlxsw_sp1_kvdl_part_info info; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct mlxsw_sp1_kvdl_part_info const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp1_kvdl_part *VAR_1,
         u32 *VAR_2)
{
 const struct mlxsw_sp1_kvdl_part_info *VAR_3 = &VAR_1->info;
 unsigned int VAR_4, VAR_5;

 VAR_5 = (VAR_3->end_index - VAR_3->start_index + 1) /
       VAR_3->alloc_size;
 VAR_4 = FUNC_1(VAR_1->usage, VAR_5);
 if (VAR_4 == VAR_5)
  return -VAR_0;
 FUNC_0(VAR_4, VAR_1->usage);

 *VAR_2 = FUNC_2(VAR_3, VAR_4);

 return 0;
}
