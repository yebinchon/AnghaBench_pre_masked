
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct TYPE_2__ {int default_flow_id; int miss_action; } ;
struct dpni_rx_tc_dist_cfg {int key_cfg_iova; TYPE_1__ fs_cfg; int dist_mode; int dist_size; } ;
struct dpni_cmd_set_rx_tc_dist {int key_cfg_iova; void* default_flow_id; int flags; int tc_id; void* dist_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_5(struct fsl_mc_io *VAR_3,
   u32 VAR_4,
   u16 VAR_5,
   u8 VAR_6,
   const struct dpni_rx_tc_dist_cfg *VAR_7)
{
 struct fsl_mc_command VAR_8 = { 0 };
 struct dpni_cmd_set_rx_tc_dist *VAR_9;


 VAR_8.header = FUNC_3(VAR_1,
       VAR_4,
       VAR_5);
 VAR_9 = (struct dpni_cmd_set_rx_tc_dist *)VAR_8.params;
 VAR_9->dist_size = FUNC_0(VAR_7->dist_size);
 VAR_9->tc_id = VAR_6;
 FUNC_2(VAR_9->flags, VAR_0, VAR_7->dist_mode);
 FUNC_2(VAR_9->flags, VAR_2, VAR_7->fs_cfg.miss_action);
 VAR_9->default_flow_id = FUNC_0(VAR_7->fs_cfg.default_flow_id);
 VAR_9->key_cfg_iova = FUNC_1(VAR_7->key_cfg_iova);


 return FUNC_4(VAR_3, &VAR_8);
}
