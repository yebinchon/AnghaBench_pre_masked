
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union mlxsw_sp_l3addr {int dummy; } mlxsw_sp_l3addr ;
struct mlxsw_sp_nve_mc_record {int num_entries; TYPE_1__* ops; } ;
struct mlxsw_sp_nve_mc_entry {int valid; } ;
struct TYPE_2__ {int (* entry_add ) (struct mlxsw_sp_nve_mc_record*,struct mlxsw_sp_nve_mc_entry*,union mlxsw_sp_l3addr*) ;int (* entry_del ) (struct mlxsw_sp_nve_mc_record*,struct mlxsw_sp_nve_mc_entry*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 struct mlxsw_sp_nve_mc_record* FUNC_1 (struct mlxsw_sp_nve_mc_record*,int ) ;
 struct mlxsw_sp_nve_mc_entry* FUNC_2 (struct mlxsw_sp_nve_mc_record*) ;
 scalar_t__ FUNC_3 (struct mlxsw_sp_nve_mc_record*) ;
 int FUNC_4 (struct mlxsw_sp_nve_mc_record*) ;
 int FUNC_5 (struct mlxsw_sp_nve_mc_record*,struct mlxsw_sp_nve_mc_entry*,union mlxsw_sp_l3addr*) ;
 int FUNC_6 (struct mlxsw_sp_nve_mc_record*,struct mlxsw_sp_nve_mc_entry*) ;

__attribute__((used)) static int
FUNC_7(struct mlxsw_sp_nve_mc_record *VAR_2,
         union mlxsw_sp_l3addr *VAR_3)
{
 struct mlxsw_sp_nve_mc_entry *VAR_4 = ((void*)0);
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2);
 if (FUNC_0(!VAR_4))
  return -VAR_0;

 VAR_5 = VAR_2->ops->entry_add(VAR_2, VAR_4, VAR_3);
 if (VAR_5)
  return VAR_5;
 VAR_2->num_entries++;
 VAR_4->valid = 1;

 VAR_5 = FUNC_4(VAR_2);
 if (VAR_5)
  goto err_record_refresh;




 if (VAR_2->num_entries != 1 ||
     FUNC_3(VAR_2))
  return 0;

 VAR_5 = FUNC_4(FUNC_1(VAR_2, VAR_1));
 if (VAR_5)
  goto err_prev_record_refresh;

 return 0;

err_prev_record_refresh:
err_record_refresh:
 VAR_4->valid = 0;
 VAR_2->num_entries--;
 VAR_2->ops->entry_del(VAR_2, VAR_4);
 return VAR_5;
}
