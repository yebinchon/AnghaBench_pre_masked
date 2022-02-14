
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct sas_discovery_event {struct asd_sas_port* port; } ;
struct domain_device {int dev_type; int dev_list_node; int disco_list_node; int rphy; } ;
struct TYPE_2__ {int pending; } ;
struct asd_sas_port {int id; struct domain_device* port_dev; int dev_list_lock; TYPE_1__ disc; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ,...) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct domain_device*) ;
 int FUNC_6 (struct domain_device*) ;
 int FUNC_7 (struct domain_device*) ;
 int FUNC_8 (struct asd_sas_port*) ;
 int FUNC_9 (struct asd_sas_port*) ;
 int FUNC_10 (struct domain_device*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 struct sas_discovery_event* FUNC_15 (struct work_struct*) ;

__attribute__((used)) static void FUNC_16(struct work_struct *VAR_3)
{
 struct domain_device *VAR_4;
 int VAR_5 = 0;
 struct sas_discovery_event *VAR_6 = FUNC_15(VAR_3);
 struct asd_sas_port *VAR_7 = VAR_6->port;

 FUNC_0(VAR_0, &VAR_7->disc.pending);

 if (VAR_7->port_dev)
  return;

 VAR_5 = FUNC_8(VAR_7);
 if (VAR_5)
  return;
 VAR_4 = VAR_7->port_dev;

 FUNC_2("DOING DISCOVERY on port %d, pid:%d\n", VAR_7->id,
   FUNC_14(VAR_2));

 switch (VAR_4->dev_type) {
 case 131:
  VAR_5 = FUNC_5(VAR_4);
  break;
 case 132:
 case 130:
  VAR_5 = FUNC_6(VAR_4);
  break;
 case 129:
 case 128:




  FUNC_4("ATA device seen but CONFIG_SCSI_SAS_ATA=N so cannot attach\n");



 default:
  VAR_5 = -VAR_1;
  FUNC_3("unhandled device %d\n", VAR_4->dev_type);
  break;
 }

 if (VAR_5) {
  FUNC_11(VAR_4->rphy);
  FUNC_1(&VAR_4->disco_list_node);
  FUNC_12(&VAR_7->dev_list_lock);
  FUNC_1(&VAR_4->dev_list_node);
  FUNC_13(&VAR_7->dev_list_lock);

  FUNC_10(VAR_4);
  VAR_7->port_dev = ((void*)0);
 }

 FUNC_9(VAR_7);

 FUNC_2("DONE DISCOVERY on port %d, pid:%d, result:%d\n", VAR_7->id,
   FUNC_14(VAR_2), VAR_5);
}
