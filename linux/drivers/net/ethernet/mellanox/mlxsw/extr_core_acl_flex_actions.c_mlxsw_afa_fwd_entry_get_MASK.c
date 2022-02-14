
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_afa_fwd_entry_ht_key {int local_port; int member_0; } ;
struct mlxsw_afa_fwd_entry {int ref_count; } ;
struct mlxsw_afa {int fwd_entry_ht; } ;


 struct mlxsw_afa_fwd_entry* FUNC_0 (struct mlxsw_afa*,int ) ;
 int VAR_0 ;
 struct mlxsw_afa_fwd_entry* FUNC_1 (int *,struct mlxsw_afa_fwd_entry_ht_key*,int ) ;

__attribute__((used)) static struct mlxsw_afa_fwd_entry *
FUNC_2(struct mlxsw_afa *VAR_1, u8 VAR_2)
{
 struct mlxsw_afa_fwd_entry_ht_key VAR_3 = {0};
 struct mlxsw_afa_fwd_entry *VAR_4;

 VAR_3.local_port = VAR_2;
 VAR_4 = FUNC_1(&VAR_1->fwd_entry_ht, &VAR_3,
        VAR_0);
 if (VAR_4) {
  VAR_4->ref_count++;
  return VAR_4;
 }
 return FUNC_0(VAR_1, VAR_2);
}
