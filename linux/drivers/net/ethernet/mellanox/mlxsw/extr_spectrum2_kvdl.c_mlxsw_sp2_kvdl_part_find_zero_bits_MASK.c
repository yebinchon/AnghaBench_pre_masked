
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp2_kvdl_part {int last_allocated_bit; unsigned int usage_bit_count; int usage; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp2_kvdl_part *VAR_1,
           unsigned int VAR_2,
           unsigned int *VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 bool VAR_7 = 0;

 VAR_4 = VAR_1->last_allocated_bit + 1;
 if (VAR_4 == VAR_1->usage_bit_count)
  VAR_4 = 0;
 VAR_5 = VAR_4;
again:
 VAR_5 = FUNC_0(VAR_1->usage, VAR_1->usage_bit_count, VAR_5);
 if (!VAR_7 && VAR_5 + VAR_2 >= VAR_1->usage_bit_count) {
  VAR_7 = 1;
  VAR_5 = 0;
  goto again;
 }
 if (VAR_7 && VAR_5 + VAR_2 >= VAR_4)
  return -VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (FUNC_1(VAR_5 + VAR_6, VAR_1->usage)) {
   VAR_5 += VAR_2;
   goto again;
  }
 }
 *VAR_3 = VAR_5;
 return 0;
}
