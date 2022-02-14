
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlxsw_sp2_afk_block_layout {int offset; int item; } ;


 int FUNC_0 (struct mlxsw_sp2_afk_block_layout*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int *,int ,int ) ;
 struct mlxsw_sp2_afk_block_layout* VAR_0 ;

__attribute__((used)) static void FUNC_3(char *VAR_1, int VAR_2,
         u64 VAR_3)
{
 const struct mlxsw_sp2_afk_block_layout *VAR_4;

 if (FUNC_1(VAR_2 < 0 ||
      VAR_2 >= FUNC_0(VAR_0)))
  return;

 VAR_4 = &VAR_0[VAR_2];
 FUNC_2(VAR_1 + VAR_4->offset,
      &VAR_4->item, 0, VAR_3);
}
