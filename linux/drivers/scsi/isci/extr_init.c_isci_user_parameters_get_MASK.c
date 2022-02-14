
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_user_parameters {int max_concurr_spinup; int no_outbound_task_timeout; int ssp_max_occupancy_timeout; int stp_max_occupancy_timeout; int ssp_inactivity_timeout; int stp_inactivity_timeout; struct sci_phy_user_params* phys; } ;
struct sci_phy_user_params {int align_insertion_frequency; int in_connection_align_insertion_frequency; int notify_enable_spin_up_insertion_frequency; int max_speed_generation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0(struct sci_user_parameters *VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  struct sci_phy_user_params *VAR_10 = &VAR_8->phys[VAR_9];

  VAR_10->max_speed_generation = VAR_3;


  VAR_10->align_insertion_frequency = 0x7f;
  VAR_10->in_connection_align_insertion_frequency = 0xff;
  VAR_10->notify_enable_spin_up_insertion_frequency = 0x33;
 }

 VAR_8->stp_inactivity_timeout = VAR_6;
 VAR_8->ssp_inactivity_timeout = VAR_4;
 VAR_8->stp_max_occupancy_timeout = VAR_7;
 VAR_8->ssp_max_occupancy_timeout = VAR_5;
 VAR_8->no_outbound_task_timeout = VAR_2;
 VAR_8->max_concurr_spinup = VAR_1;
}
