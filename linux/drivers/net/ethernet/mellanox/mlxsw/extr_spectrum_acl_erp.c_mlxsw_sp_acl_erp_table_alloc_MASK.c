
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_erp_core {unsigned int num_erp_banks; unsigned int* erpt_entries_size; int erp_tables; } ;
typedef enum mlxsw_sp_acl_atcam_region_type { ____Placeholder_mlxsw_sp_acl_atcam_region_type } mlxsw_sp_acl_atcam_region_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp_acl_erp_core *VAR_3,
        unsigned int VAR_4,
        enum mlxsw_sp_acl_atcam_region_type VAR_5,
        unsigned long *VAR_6)
{
 unsigned int VAR_7, VAR_8;


 if (VAR_4 % VAR_3->num_erp_banks != 0)
  return -VAR_0;

 VAR_8 = VAR_3->erpt_entries_size[VAR_5];
 VAR_7 = VAR_4 / VAR_3->num_erp_banks;

 *VAR_6 = FUNC_0(VAR_3->erp_tables, VAR_7 * VAR_8);
 if (*VAR_6 == 0)
  return -VAR_1;
 *VAR_6 -= VAR_2;

 return 0;
}
