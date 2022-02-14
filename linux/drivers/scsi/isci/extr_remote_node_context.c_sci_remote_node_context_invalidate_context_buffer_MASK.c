
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int is_valid; } ;
union scu_remote_node_context {TYPE_2__ ssp; } ;
struct sci_remote_node_context {int remote_node_index; } ;
struct isci_remote_device {TYPE_1__* owning_port; } ;
struct isci_host {int dummy; } ;
struct TYPE_3__ {struct isci_host* owning_controller; } ;


 int VAR_0 ;
 struct isci_remote_device* FUNC_0 (struct sci_remote_node_context*) ;
 int FUNC_1 (struct isci_remote_device*,int ) ;
 union scu_remote_node_context* FUNC_2 (struct isci_host*,int ) ;

__attribute__((used)) static void FUNC_3(struct sci_remote_node_context *VAR_1)
{
 union scu_remote_node_context *VAR_2;
 struct isci_remote_device *VAR_3 = FUNC_0(VAR_1);
 struct isci_host *VAR_4 = VAR_3->owning_port->owning_controller;

 VAR_2 = FUNC_2(VAR_4, VAR_1->remote_node_index);

 VAR_2->ssp.is_valid = 0;

 FUNC_1(FUNC_0(VAR_1),
           VAR_0);
}
