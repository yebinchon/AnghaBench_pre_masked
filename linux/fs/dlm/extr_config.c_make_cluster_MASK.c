
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_group {int dummy; } ;
struct dlm_spaces {struct config_group group; struct config_group cs_group; struct config_group ss_group; int cl_cluster_name; int cl_recover_callbacks; int cl_new_rsb_count; int cl_waitwarn_us; int cl_timewarn_cs; int cl_protocol; int cl_log_info; int cl_log_debug; int cl_scan_secs; int cl_toss_secs; int cl_recover_timer; int cl_rsbtbl_size; int cl_buffer_size; int cl_tcp_port; } ;
struct dlm_comms {struct config_group group; struct config_group cs_group; struct config_group ss_group; int cl_cluster_name; int cl_recover_callbacks; int cl_new_rsb_count; int cl_waitwarn_us; int cl_timewarn_cs; int cl_protocol; int cl_log_info; int cl_log_debug; int cl_scan_secs; int cl_toss_secs; int cl_recover_timer; int cl_rsbtbl_size; int cl_buffer_size; int cl_tcp_port; } ;
struct dlm_cluster {struct config_group group; struct config_group cs_group; struct config_group ss_group; int cl_cluster_name; int cl_recover_callbacks; int cl_new_rsb_count; int cl_waitwarn_us; int cl_timewarn_cs; int cl_protocol; int cl_log_info; int cl_log_debug; int cl_scan_secs; int cl_toss_secs; int cl_recover_timer; int cl_rsbtbl_size; int cl_buffer_size; int cl_tcp_port; } ;
struct TYPE_2__ {int ci_cluster_name; int ci_recover_callbacks; int ci_new_rsb_count; int ci_waitwarn_us; int ci_timewarn_cs; int ci_protocol; int ci_log_info; int ci_log_debug; int ci_scan_secs; int ci_toss_secs; int ci_recover_timer; int ci_rsbtbl_size; int ci_buffer_size; int ci_tcp_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct config_group* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct config_group* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct config_group*,char const*,int *) ;
 int FUNC_2 (struct config_group*,struct config_group*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_3 (struct dlm_spaces*) ;
 struct dlm_spaces* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 struct config_group* VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static struct config_group *FUNC_6(struct config_group *VAR_9,
      const char *VAR_10)
{
 struct dlm_cluster *VAR_11 = ((void*)0);
 struct dlm_spaces *VAR_12 = ((void*)0);
 struct dlm_comms *VAR_13 = ((void*)0);

 VAR_11 = FUNC_4(sizeof(struct dlm_cluster), VAR_2);
 VAR_12 = FUNC_4(sizeof(struct dlm_spaces), VAR_2);
 VAR_13 = FUNC_4(sizeof(struct dlm_comms), VAR_2);

 if (!VAR_11 || !VAR_12 || !VAR_13)
  goto fail;

 FUNC_1(&VAR_11->group, VAR_10, &VAR_3);
 FUNC_1(&VAR_12->ss_group, "spaces", &VAR_8);
 FUNC_1(&VAR_13->cs_group, "comms", &VAR_5);

 FUNC_2(&VAR_12->ss_group, &VAR_11->group);
 FUNC_2(&VAR_13->cs_group, &VAR_11->group);

 VAR_11->cl_tcp_port = VAR_6.ci_tcp_port;
 VAR_11->cl_buffer_size = VAR_6.ci_buffer_size;
 VAR_11->cl_rsbtbl_size = VAR_6.ci_rsbtbl_size;
 VAR_11->cl_recover_timer = VAR_6.ci_recover_timer;
 VAR_11->cl_toss_secs = VAR_6.ci_toss_secs;
 VAR_11->cl_scan_secs = VAR_6.ci_scan_secs;
 VAR_11->cl_log_debug = VAR_6.ci_log_debug;
 VAR_11->cl_log_info = VAR_6.ci_log_info;
 VAR_11->cl_protocol = VAR_6.ci_protocol;
 VAR_11->cl_timewarn_cs = VAR_6.ci_timewarn_cs;
 VAR_11->cl_waitwarn_us = VAR_6.ci_waitwarn_us;
 VAR_11->cl_new_rsb_count = VAR_6.ci_new_rsb_count;
 VAR_11->cl_recover_callbacks = VAR_6.ci_recover_callbacks;
 FUNC_5(VAR_11->cl_cluster_name, VAR_6.ci_cluster_name,
        VAR_0);

 VAR_7 = &VAR_12->ss_group;
 VAR_4 = &VAR_13->cs_group;
 return &VAR_11->group;

 fail:
 FUNC_3(VAR_11);
 FUNC_3(VAR_12);
 FUNC_3(VAR_13);
 return FUNC_0(-VAR_1);
}
