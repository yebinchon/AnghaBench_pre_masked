
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpio_rsp_get_attr {int channel_mode; int qbman_version; int qbman_portal_ci_addr; int qbman_portal_ce_addr; int num_priorities; int qbman_portal_id; int id; } ;
struct dpio_attr {int channel_mode; void* qbman_version; void* qbman_portal_ci_offset; void* qbman_portal_ce_offset; int num_priorities; int qbman_portal_id; void* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_5(struct fsl_mc_io *VAR_2,
   u32 VAR_3,
   u16 VAR_4,
   struct dpio_attr *VAR_5)
{
 struct fsl_mc_command VAR_6 = { 0 };
 struct dpio_rsp_get_attr *VAR_7;
 int VAR_8;


 VAR_6.header = FUNC_3(VAR_1,
       VAR_3,
       VAR_4);

 VAR_8 = FUNC_4(VAR_2, &VAR_6);
 if (VAR_8)
  return VAR_8;


 VAR_7 = (struct dpio_rsp_get_attr *)VAR_6.params;
 VAR_5->id = FUNC_1(VAR_7->id);
 VAR_5->qbman_portal_id = FUNC_0(VAR_7->qbman_portal_id);
 VAR_5->num_priorities = VAR_7->num_priorities;
 VAR_5->channel_mode = VAR_7->channel_mode & VAR_0;
 VAR_5->qbman_portal_ce_offset =
  FUNC_2(VAR_7->qbman_portal_ce_addr);
 VAR_5->qbman_portal_ci_offset =
  FUNC_2(VAR_7->qbman_portal_ci_addr);
 VAR_5->qbman_version = FUNC_1(VAR_7->qbman_version);

 return 0;
}
