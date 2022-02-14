
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct mlxsw_sp2_kvdl_part {unsigned int indexes_per_usage_bit; int usage; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct mlxsw_sp2_kvdl_part*,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp2_kvdl_part *VAR_0,
         unsigned int VAR_1,
         u32 *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_3 = FUNC_0(VAR_1, VAR_0->indexes_per_usage_bit);
 VAR_6 = FUNC_2(VAR_0, VAR_3, &VAR_4);
 if (VAR_6)
  return VAR_6;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  FUNC_1(VAR_4 + VAR_5, VAR_0->usage);
 *VAR_2 = VAR_4 * VAR_0->indexes_per_usage_bit;
 return 0;
}
