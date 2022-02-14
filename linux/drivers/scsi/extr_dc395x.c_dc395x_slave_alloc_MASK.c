
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int lun; int id; TYPE_1__* host; } ;
struct DeviceCtlBlk {int dummy; } ;
struct AdapterCtlBlk {int dummy; } ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct AdapterCtlBlk*,struct DeviceCtlBlk*) ;
 struct DeviceCtlBlk* FUNC_1 (struct AdapterCtlBlk*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_1)
{
 struct AdapterCtlBlk *VAR_2 = (struct AdapterCtlBlk *)VAR_1->host->hostdata;
 struct DeviceCtlBlk *VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_1->id, VAR_1->lun);
 if (!VAR_3)
  return -VAR_0;
 FUNC_0(VAR_2, VAR_3);

 return 0;
}
