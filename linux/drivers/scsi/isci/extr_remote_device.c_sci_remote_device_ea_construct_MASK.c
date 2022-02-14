
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int remote_node_index; } ;
struct isci_remote_device {int device_port_width; int connection_rate; TYPE_1__ rnc; struct domain_device* domain_dev; } ;
struct isci_port {int owning_controller; } ;
struct domain_device {int linkrate; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,struct isci_remote_device*,int *) ;
 int FUNC_2 (struct isci_port*) ;
 int FUNC_3 (struct isci_port*,struct isci_remote_device*) ;
 int VAR_1 ;

__attribute__((used)) static enum sci_status FUNC_4(struct isci_port *VAR_2,
             struct isci_remote_device *VAR_3)
{
 struct domain_device *VAR_4 = VAR_3->domain_dev;
 enum sci_status VAR_5;

 FUNC_3(VAR_2, VAR_3);

 VAR_5 = FUNC_1(VAR_2->owning_controller,
          VAR_3,
          &VAR_3->rnc.remote_node_index);
 if (VAR_5 != VAR_0)
  return VAR_5;
 VAR_3->connection_rate = FUNC_0(VAR_1, FUNC_2(VAR_2),
      VAR_4->linkrate);


 VAR_3->device_port_width = 1;

 return VAR_0;
}
