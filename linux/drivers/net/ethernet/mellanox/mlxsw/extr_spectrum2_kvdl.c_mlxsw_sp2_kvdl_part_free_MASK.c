
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct mlxsw_sp2_kvdl_part {unsigned int indexes_per_usage_bit; int usage; TYPE_1__* info; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {int res_type; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct mlxsw_sp*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp *VAR_0,
         struct mlxsw_sp2_kvdl_part *VAR_1,
         unsigned int VAR_2, u32 VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 int VAR_7;


 VAR_7 = FUNC_2(VAR_0, VAR_1->info->res_type,
         VAR_2, VAR_3);
 if (VAR_7)
  return;

 VAR_4 = FUNC_0(VAR_2, VAR_1->indexes_per_usage_bit);
 VAR_5 = VAR_3 / VAR_1->indexes_per_usage_bit;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  FUNC_1(VAR_5 + VAR_6, VAR_1->usage);
}
