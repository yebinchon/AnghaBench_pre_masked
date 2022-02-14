
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sci_port_properties {int phy_mask; } ;
struct TYPE_2__ {int remote_node_index; } ;
struct isci_remote_device {int connection_rate; TYPE_1__ rnc; int device_port_width; } ;
struct isci_port {int owning_controller; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct isci_remote_device*,int *) ;
 int FUNC_2 (struct isci_port*) ;
 int FUNC_3 (struct isci_port*,struct sci_port_properties*) ;
 int FUNC_4 (struct isci_port*,struct isci_remote_device*) ;

__attribute__((used)) static enum sci_status FUNC_5(struct isci_port *VAR_1,
             struct isci_remote_device *VAR_2)
{
 enum sci_status VAR_3;
 struct sci_port_properties VAR_4;

 FUNC_4(VAR_1, VAR_2);

 FUNC_3(VAR_1, &VAR_4);

 VAR_2->device_port_width = FUNC_0(VAR_4.phy_mask);

 VAR_3 = FUNC_1(VAR_1->owning_controller,
            VAR_2,
            &VAR_2->rnc.remote_node_index);

 if (VAR_3 != VAR_0)
  return VAR_3;

 VAR_2->connection_rate = FUNC_2(VAR_1);

 return VAR_0;
}
