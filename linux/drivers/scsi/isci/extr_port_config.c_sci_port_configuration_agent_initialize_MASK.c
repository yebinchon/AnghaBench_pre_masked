
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sci_port_configuration_agent {int timer; int link_down_handler; int link_up_handler; } ;
struct TYPE_3__ {int mode_type; } ;
struct TYPE_4__ {TYPE_1__ controller; } ;
struct isci_host {TYPE_2__ oem_parameters; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;
typedef enum sci_port_configuration_mode { ____Placeholder_sci_port_configuration_mode } sci_port_configuration_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct isci_host*,struct sci_port_configuration_agent*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct isci_host*,struct sci_port_configuration_agent*) ;

enum sci_status FUNC_3(
 struct isci_host *VAR_7,
 struct sci_port_configuration_agent *VAR_8)
{
 enum sci_status VAR_9;
 enum sci_port_configuration_mode VAR_10;

 VAR_10 = VAR_7->oem_parameters.controller.mode_type;

 if (VAR_10 == VAR_0) {
  VAR_9 = FUNC_2(
    VAR_7, VAR_8);

  VAR_8->link_up_handler = VAR_6;
  VAR_8->link_down_handler = VAR_5;

  FUNC_1(&VAR_8->timer, VAR_2);
 } else {
  VAR_9 = FUNC_0(
    VAR_7, VAR_8);

  VAR_8->link_up_handler = VAR_4;
  VAR_8->link_down_handler = VAR_3;

  FUNC_1(&VAR_8->timer, VAR_1);
 }

 return VAR_9;
}
