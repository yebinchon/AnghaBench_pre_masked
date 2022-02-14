
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpni_taildrop {int threshold; int units; int enable; } ;
struct dpni_cmd_set_taildrop {int congestion_point; int qtype; int threshold; int units; int enable; void* index; void* tc; } ;
typedef enum dpni_queue_type { ____Placeholder_dpni_queue_type } dpni_queue_type ;
typedef enum dpni_congestion_point { ____Placeholder_dpni_congestion_point } dpni_congestion_point ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_4(struct fsl_mc_io *VAR_2,
        u32 VAR_3,
        u16 VAR_4,
        enum dpni_congestion_point VAR_5,
        enum dpni_queue_type VAR_6,
        u8 VAR_7,
        u8 VAR_8,
        struct dpni_taildrop *VAR_9)
{
 struct fsl_mc_command VAR_10 = { 0 };
 struct dpni_cmd_set_taildrop *VAR_11;


 VAR_10.header = FUNC_2(VAR_0,
       VAR_3,
       VAR_4);
 VAR_11 = (struct dpni_cmd_set_taildrop *)VAR_10.params;
 VAR_11->congestion_point = VAR_5;
 VAR_11->qtype = VAR_6;
 VAR_11->tc = VAR_7;
 VAR_11->index = VAR_8;
 FUNC_1(VAR_11->enable, VAR_1, VAR_9->enable);
 VAR_11->units = VAR_9->units;
 VAR_11->threshold = FUNC_0(VAR_9->threshold);


 return FUNC_3(VAR_2, &VAR_10);
}
