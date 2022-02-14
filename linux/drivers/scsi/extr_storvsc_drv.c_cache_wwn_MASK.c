
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int secondary_port_wwn; int secondary_node_wwn; int primary_port_wwn; int primary_node_wwn; scalar_t__ primary_active; } ;
struct vstor_packet {TYPE_1__ wwn_packet; } ;
struct storvsc_device {void* port_name; void* node_name; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct storvsc_device *VAR_0,
        struct vstor_packet *VAR_1)
{



 if (VAR_1->wwn_packet.primary_active) {
  VAR_0->node_name =
   FUNC_0(VAR_1->wwn_packet.primary_node_wwn);
  VAR_0->port_name =
   FUNC_0(VAR_1->wwn_packet.primary_port_wwn);
 } else {
  VAR_0->node_name =
   FUNC_0(VAR_1->wwn_packet.secondary_node_wwn);
  VAR_0->port_name =
   FUNC_0(VAR_1->wwn_packet.secondary_port_wwn);
 }
}
