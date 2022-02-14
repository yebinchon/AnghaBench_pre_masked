
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_afk_key_info {scalar_t__ ref_count; } ;


 int FUNC_0 (struct mlxsw_afk_key_info*) ;

void FUNC_1(struct mlxsw_afk_key_info *VAR_0)
{
 if (--VAR_0->ref_count)
  return;
 FUNC_0(VAR_0);
}
