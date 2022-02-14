
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_afa_block {int finished; int cur_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

int FUNC_1(struct mlxsw_afa_block *VAR_2, u16 VAR_3)
{
 if (VAR_2->finished)
  return -VAR_0;
 FUNC_0(VAR_2->cur_set,
          VAR_1, VAR_3);
 VAR_2->finished = 1;
 return 0;
}
