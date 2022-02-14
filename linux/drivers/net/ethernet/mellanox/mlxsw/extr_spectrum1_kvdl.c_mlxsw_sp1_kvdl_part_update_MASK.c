
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int end_index; unsigned int start_index; } ;
struct mlxsw_sp1_kvdl_part {TYPE_1__ info; } ;



__attribute__((used)) static void FUNC_0(struct mlxsw_sp1_kvdl_part *VAR_0,
           struct mlxsw_sp1_kvdl_part *VAR_1,
           unsigned int VAR_2)
{
 if (!VAR_1) {
  VAR_0->info.end_index = VAR_2 - 1;
 } else {
  VAR_0->info.start_index = VAR_1->info.end_index + 1;
  VAR_0->info.end_index = VAR_0->info.start_index + VAR_2 - 1;
 }
}
