
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpsw_rsp_get_attr {int component_type; int options; int max_meters_per_if; int max_fdb_mc_groups; int mem_size; int dpsw_id; int fdb_aging_time; int max_fdb_entries; int num_vlans; int max_vlans; int num_fdbs; int max_fdbs; int num_ifs; } ;
struct dpsw_attr {int component_type; int options; int max_meters_per_if; void* max_fdb_mc_groups; void* mem_size; int id; void* fdb_aging_time; void* max_fdb_entries; void* num_vlans; void* max_vlans; int num_fdbs; int max_fdbs; void* num_ifs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_6(struct fsl_mc_io *VAR_2,
   u32 VAR_3,
   u16 VAR_4,
   struct dpsw_attr *VAR_5)
{
 struct fsl_mc_command VAR_6 = { 0 };
 struct dpsw_rsp_get_attr *VAR_7;
 int VAR_8;


 VAR_6.header = FUNC_4(VAR_1,
       VAR_3,
       VAR_4);


 VAR_8 = FUNC_5(VAR_2, &VAR_6);
 if (VAR_8)
  return VAR_8;


 VAR_7 = (struct dpsw_rsp_get_attr *)VAR_6.params;
 VAR_5->num_ifs = FUNC_1(VAR_7->num_ifs);
 VAR_5->max_fdbs = VAR_7->max_fdbs;
 VAR_5->num_fdbs = VAR_7->num_fdbs;
 VAR_5->max_vlans = FUNC_1(VAR_7->max_vlans);
 VAR_5->num_vlans = FUNC_1(VAR_7->num_vlans);
 VAR_5->max_fdb_entries = FUNC_1(VAR_7->max_fdb_entries);
 VAR_5->fdb_aging_time = FUNC_1(VAR_7->fdb_aging_time);
 VAR_5->id = FUNC_2(VAR_7->dpsw_id);
 VAR_5->mem_size = FUNC_1(VAR_7->mem_size);
 VAR_5->max_fdb_mc_groups = FUNC_1(VAR_7->max_fdb_mc_groups);
 VAR_5->max_meters_per_if = VAR_7->max_meters_per_if;
 VAR_5->options = FUNC_3(VAR_7->options);
 VAR_5->component_type = FUNC_0(VAR_7->component_type,
           VAR_0);

 return 0;
}
