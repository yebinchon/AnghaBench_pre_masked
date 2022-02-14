
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int destructor; } ;
struct mlxsw_afa_fwd_entry_ref {TYPE_1__ resource; struct mlxsw_afa_fwd_entry* fwd_entry; } ;
struct mlxsw_afa_fwd_entry {int dummy; } ;
struct mlxsw_afa_block {int afa; } ;


 int VAR_0 ;
 struct mlxsw_afa_fwd_entry_ref* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mlxsw_afa_fwd_entry*) ;
 int FUNC_2 (struct mlxsw_afa_fwd_entry*) ;
 int FUNC_3 (struct mlxsw_afa_fwd_entry_ref*) ;
 struct mlxsw_afa_fwd_entry_ref* FUNC_4 (int,int ) ;
 struct mlxsw_afa_fwd_entry* FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (struct mlxsw_afa_block*,TYPE_1__*) ;

__attribute__((used)) static struct mlxsw_afa_fwd_entry_ref *
FUNC_7(struct mlxsw_afa_block *VAR_3, u8 VAR_4)
{
 struct mlxsw_afa_fwd_entry_ref *VAR_5;
 struct mlxsw_afa_fwd_entry *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);
 VAR_6 = FUNC_5(VAR_3->afa, VAR_4);
 if (FUNC_1(VAR_6)) {
  VAR_7 = FUNC_2(VAR_6);
  goto err_fwd_entry_get;
 }
 VAR_5->fwd_entry = VAR_6;
 VAR_5->resource.destructor = VAR_2;
 FUNC_6(VAR_3, &VAR_5->resource);
 return VAR_5;

err_fwd_entry_get:
 FUNC_3(VAR_5);
 return FUNC_0(VAR_7);
}
