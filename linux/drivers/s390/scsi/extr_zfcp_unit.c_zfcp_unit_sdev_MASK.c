
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct zfcp_unit {struct zfcp_port* port; int fcp_lun; } ;
struct zfcp_port {int starget_id; TYPE_1__* adapter; } ;
struct scsi_lun {int dummy; } ;
struct scsi_device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct Scsi_Host* scsi_host; } ;


 struct scsi_device* FUNC_0 (struct Scsi_Host*,int ,int ,int ) ;
 int FUNC_1 (struct scsi_lun*) ;

struct scsi_device *FUNC_2(struct zfcp_unit *VAR_0)
{
 struct Scsi_Host *VAR_1;
 struct zfcp_port *VAR_2;
 u64 VAR_3;

 VAR_3 = FUNC_1((struct scsi_lun *) &VAR_0->fcp_lun);
 VAR_2 = VAR_0->port;
 VAR_1 = VAR_2->adapter->scsi_host;
 return FUNC_0(VAR_1, 0, VAR_2->starget_id, VAR_3);
}
