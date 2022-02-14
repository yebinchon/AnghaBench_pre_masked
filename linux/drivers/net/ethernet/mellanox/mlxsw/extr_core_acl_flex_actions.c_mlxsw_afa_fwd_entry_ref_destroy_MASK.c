
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_afa_fwd_entry_ref {int fwd_entry; int resource; } ;
struct mlxsw_afa_block {int afa; } ;


 int FUNC_0 (struct mlxsw_afa_fwd_entry_ref*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_afa_block *VAR_0,
    struct mlxsw_afa_fwd_entry_ref *VAR_1)
{
 FUNC_2(&VAR_1->resource);
 FUNC_1(VAR_0->afa, VAR_1->fwd_entry);
 FUNC_0(VAR_1);
}
