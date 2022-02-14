
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct Scsi_Host* shost; } ;
struct sas_ha_struct {int dev; TYPE_2__ core; } ;
struct TYPE_6__ {struct ata_port* ap; struct ata_host* ata_host; } ;
struct domain_device {TYPE_3__ sata_dev; TYPE_1__* port; } ;
struct ata_port {struct Scsi_Host* scsi_host; int cbl; struct domain_device* private_data; } ;
struct ata_host {int dev; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {struct sas_ha_struct* ha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ata_host*,int ,int *) ;
 int FUNC_1 (struct ata_host*) ;
 struct ata_port* FUNC_2 (struct ata_host*,int *,struct Scsi_Host*) ;
 int FUNC_3 (struct ata_port*) ;
 int FUNC_4 (struct ata_port*) ;
 int FUNC_5 (int ,struct ata_port*) ;
 struct ata_host* FUNC_6 (int,int ) ;
 int FUNC_7 (char*) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_8(struct domain_device *VAR_6)
{
 struct sas_ha_struct *VAR_7 = VAR_6->port->ha;
 struct Scsi_Host *VAR_8 = VAR_7->core.shost;
 struct ata_host *VAR_9;
 struct ata_port *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_3);
 if (!VAR_9) {
  FUNC_7("ata host alloc failed.\n");
  return -VAR_2;
 }

 FUNC_0(VAR_9, VAR_7->dev, &VAR_4);

 VAR_10 = FUNC_2(VAR_9, &VAR_5, VAR_8);
 if (!VAR_10) {
  FUNC_7("ata_sas_port_alloc failed.\n");
  VAR_11 = -VAR_1;
  goto free_host;
 }

 VAR_10->private_data = VAR_6;
 VAR_10->cbl = VAR_0;
 VAR_10->scsi_host = VAR_8;
 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11)
  goto destroy_port;

 VAR_11 = FUNC_5(VAR_9->dev, VAR_10);
 if (VAR_11)
  goto destroy_port;

 VAR_6->sata_dev.ata_host = VAR_9;
 VAR_6->sata_dev.ap = VAR_10;

 return 0;

destroy_port:
 FUNC_3(VAR_10);
free_host:
 FUNC_1(VAR_9);
 return VAR_11;
}
