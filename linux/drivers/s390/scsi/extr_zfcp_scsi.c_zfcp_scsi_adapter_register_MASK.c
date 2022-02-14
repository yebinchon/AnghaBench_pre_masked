
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zfcp_adapter {TYPE_1__* scsi_host; TYPE_4__* ccw_device; } ;
struct ccw_dev_id {int devno; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int max_id; int max_lun; int max_cmd_len; unsigned long* hostdata; int transportt; int unique_id; scalar_t__ max_channel; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,struct ccw_dev_id*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_5(struct zfcp_adapter *VAR_3)
{
 struct ccw_dev_id VAR_4;

 if (VAR_3->scsi_host)
  return 0;

 FUNC_0(VAR_3->ccw_device, &VAR_4);

 VAR_3->scsi_host = FUNC_3(&VAR_1,
          sizeof (struct zfcp_adapter *));
 if (!VAR_3->scsi_host) {
  FUNC_1(&VAR_3->ccw_device->dev,
   "Registering the FCP device with the "
   "SCSI stack failed\n");
  return -VAR_0;
 }


 VAR_3->scsi_host->max_id = 511;
 VAR_3->scsi_host->max_lun = 0xFFFFFFFF;
 VAR_3->scsi_host->max_channel = 0;
 VAR_3->scsi_host->unique_id = VAR_4.devno;
 VAR_3->scsi_host->max_cmd_len = 16;
 VAR_3->scsi_host->transportt = VAR_2;

 VAR_3->scsi_host->hostdata[0] = (unsigned long) VAR_3;

 if (FUNC_2(VAR_3->scsi_host, &VAR_3->ccw_device->dev)) {
  FUNC_4(VAR_3->scsi_host);
  return -VAR_0;
 }

 return 0;
}
