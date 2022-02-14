
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct Scsi_Host* host; } ;
struct Scsi_Host {int can_queue; } ;
struct MPT3SAS_ADAPTER {scalar_t__ enable_sdev_max_qd; } ;


 int FUNC_0 (struct scsi_device*,int) ;
 struct MPT3SAS_ADAPTER* FUNC_1 (struct Scsi_Host*) ;

void
FUNC_2(struct scsi_device *VAR_0, int VAR_1)
{
 struct Scsi_Host *VAR_2 = VAR_0->host;
 struct MPT3SAS_ADAPTER *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->enable_sdev_max_qd)
  VAR_1 = VAR_2->can_queue;

 FUNC_0(VAR_0, VAR_1);
}
