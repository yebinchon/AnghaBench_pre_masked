
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sci_user_parameters {int stp_inactivity_timeout; int ssp_inactivity_timeout; int stp_max_occupancy_timeout; int ssp_max_occupancy_timeout; int no_outbound_task_timeout; TYPE_3__* phys; } ;
struct TYPE_6__ {int max_concurr_spin_up; int do_enable_ssc; scalar_t__ cable_selection_mask; int mode_type; } ;
struct sci_oem_params {TYPE_5__* phys; TYPE_2__* ports; TYPE_1__ controller; } ;
struct isci_host {scalar_t__ id; struct sci_oem_params oem_parameters; struct sci_user_parameters user_parameters; } ;
struct TYPE_9__ {int high; scalar_t__ low; } ;
struct TYPE_10__ {TYPE_4__ sas_address; } ;
struct TYPE_8__ {int align_insertion_frequency; int in_connection_align_insertion_frequency; int notify_enable_spin_up_insertion_frequency; int max_speed_generation; } ;
struct TYPE_7__ {scalar_t__ phy_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct isci_host *VAR_4)
{

 struct sci_user_parameters *VAR_5 = &VAR_4->user_parameters;
 struct sci_oem_params *VAR_6 = &VAR_4->oem_parameters;
 int VAR_7;


 VAR_6->controller.mode_type = VAR_0;


 VAR_6->controller.max_concurr_spin_up = 1;


 VAR_6->controller.do_enable_ssc = 0;


 VAR_6->controller.cable_selection_mask = 0;


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  VAR_6->ports[VAR_7].phy_mask = 0;


 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {

  VAR_5->phys[VAR_7].max_speed_generation = VAR_1;


  VAR_5->phys[VAR_7].align_insertion_frequency = 0x7f;
  VAR_5->phys[VAR_7].in_connection_align_insertion_frequency = 0xff;
  VAR_5->phys[VAR_7].notify_enable_spin_up_insertion_frequency = 0x33;






  VAR_6->phys[VAR_7].sas_address.low = 0x1 + VAR_4->id;
  VAR_6->phys[VAR_7].sas_address.high = 0x5FCFFFFF;
 }

 VAR_5->stp_inactivity_timeout = 5;
 VAR_5->ssp_inactivity_timeout = 5;
 VAR_5->stp_max_occupancy_timeout = 5;
 VAR_5->ssp_max_occupancy_timeout = 20;
 VAR_5->no_outbound_task_timeout = 2;
}
