
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_erp_core {unsigned int* erpt_entries_size; unsigned int num_erp_banks; int erp_tables; } ;
typedef enum mlxsw_sp_acl_atcam_region_type { ____Placeholder_mlxsw_sp_acl_atcam_region_type } mlxsw_sp_acl_atcam_region_type ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,unsigned long,size_t) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp_acl_erp_core *VAR_1,
       unsigned int VAR_2,
       enum mlxsw_sp_acl_atcam_region_type VAR_3,
       unsigned long VAR_4)
{
 unsigned long VAR_5;
 unsigned int VAR_6;
 size_t VAR_7;

 VAR_6 = VAR_1->erpt_entries_size[VAR_3];
 VAR_5 = VAR_4 + VAR_0;
 VAR_7 = VAR_2 / VAR_1->num_erp_banks * VAR_6;
 FUNC_0(VAR_1->erp_tables, VAR_5, VAR_7);
}
