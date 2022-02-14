
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct sci_user_parameters {scalar_t__ stp_inactivity_timeout; scalar_t__ ssp_inactivity_timeout; scalar_t__ stp_max_occupancy_timeout; scalar_t__ ssp_max_occupancy_timeout; scalar_t__ no_outbound_task_timeout; struct sci_phy_user_params* phys; } ;
struct sci_phy_user_params {scalar_t__ max_speed_generation; int in_connection_align_insertion_frequency; scalar_t__ align_insertion_frequency; scalar_t__ notify_enable_spin_up_insertion_frequency; } ;
struct isci_host {int user_parameters; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct sci_user_parameters*,int) ;

__attribute__((used)) static enum sci_status FUNC_1(struct isci_host *VAR_5,
            struct sci_user_parameters *VAR_6)
{
 u16 VAR_7;





 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  struct sci_phy_user_params *VAR_8;

  VAR_8 = &VAR_6->phys[VAR_7];

  if (!((VAR_8->max_speed_generation <= VAR_0) &&
        (VAR_8->max_speed_generation > VAR_1)))
   return VAR_2;

  if ((VAR_8->in_connection_align_insertion_frequency < 3) ||
      (VAR_8->align_insertion_frequency == 0) ||
      (VAR_8->notify_enable_spin_up_insertion_frequency == 0))
   return VAR_2;
 }

 if ((VAR_6->stp_inactivity_timeout == 0) ||
     (VAR_6->ssp_inactivity_timeout == 0) ||
     (VAR_6->stp_max_occupancy_timeout == 0) ||
     (VAR_6->ssp_max_occupancy_timeout == 0) ||
     (VAR_6->no_outbound_task_timeout == 0))
  return VAR_2;

 FUNC_0(&VAR_5->user_parameters, VAR_6, sizeof(*VAR_6));

 return VAR_4;
}
