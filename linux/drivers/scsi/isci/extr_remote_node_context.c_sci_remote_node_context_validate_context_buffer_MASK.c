
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_valid; } ;
union scu_remote_node_context {TYPE_1__ ssp; } ;
struct sci_remote_node_context {int remote_node_index; } ;
struct isci_remote_device {TYPE_2__* owning_port; struct domain_device* domain_dev; } ;
struct isci_host {int dummy; } ;
struct domain_device {scalar_t__ parent; } ;
struct TYPE_4__ {struct isci_host* owning_controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct domain_device*) ;
 struct isci_remote_device* FUNC_1 (struct sci_remote_node_context*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct isci_remote_device*,int ) ;
 union scu_remote_node_context* FUNC_4 (struct isci_host*,int ) ;

__attribute__((used)) static void FUNC_5(struct sci_remote_node_context *VAR_2)
{
 union scu_remote_node_context *VAR_3;
 struct isci_remote_device *VAR_4 = FUNC_1(VAR_2);
 struct domain_device *VAR_5 = VAR_4->domain_dev;
 struct isci_host *VAR_6 = VAR_4->owning_port->owning_controller;

 VAR_3 = FUNC_4(VAR_6, VAR_2->remote_node_index);

 VAR_3->ssp.is_valid = 1;

 if (FUNC_0(VAR_5) && VAR_5->parent) {
  FUNC_3(VAR_4, VAR_1);
 } else {
  FUNC_3(VAR_4, VAR_0);

  if (!VAR_5->parent)
   FUNC_2(VAR_4->owning_port,
        VAR_2->remote_node_index);
 }
}
