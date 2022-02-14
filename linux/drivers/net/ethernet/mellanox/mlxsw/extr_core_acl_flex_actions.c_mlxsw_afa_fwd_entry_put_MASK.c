
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_afa_fwd_entry {scalar_t__ ref_count; } ;
struct mlxsw_afa {int dummy; } ;


 int FUNC_0 (struct mlxsw_afa*,struct mlxsw_afa_fwd_entry*) ;

__attribute__((used)) static void FUNC_1(struct mlxsw_afa *VAR_0,
        struct mlxsw_afa_fwd_entry *VAR_1)
{
 if (--VAR_1->ref_count)
  return;
 FUNC_0(VAR_0, VAR_1);
}
