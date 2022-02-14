
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpni_rx_dist_cfg {int key_cfg_iova; int tc; int enable; int dist_size; } ;
struct dpni_cmd_set_rx_hash_dist {int key_cfg_iova; int tc; int enable; int dist_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_5(struct fsl_mc_io *VAR_2,
     u32 VAR_3,
     u16 VAR_4,
     const struct dpni_rx_dist_cfg *VAR_5)
{
 struct dpni_cmd_set_rx_hash_dist *VAR_6;
 struct fsl_mc_command VAR_7 = { 0 };


 VAR_7.header = FUNC_3(VAR_0,
       VAR_3,
       VAR_4);
 VAR_6 = (struct dpni_cmd_set_rx_hash_dist *)VAR_7.params;
 VAR_6->dist_size = FUNC_0(VAR_5->dist_size);
 FUNC_2(VAR_6->enable, VAR_1, VAR_5->enable);
 VAR_6->tc = VAR_5->tc;
 VAR_6->key_cfg_iova = FUNC_1(VAR_5->key_cfg_iova);


 return FUNC_4(VAR_2, &VAR_7);
}
