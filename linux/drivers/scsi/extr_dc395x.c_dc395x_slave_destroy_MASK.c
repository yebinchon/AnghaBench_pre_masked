
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int lun; int id; TYPE_1__* host; } ;
struct DeviceCtlBlk {int dummy; } ;
struct AdapterCtlBlk {int dummy; } ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int FUNC_0 (struct AdapterCtlBlk*,struct DeviceCtlBlk*) ;
 struct DeviceCtlBlk* FUNC_1 (struct AdapterCtlBlk*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct scsi_device *VAR_0)
{
 struct AdapterCtlBlk *VAR_1 = (struct AdapterCtlBlk *)VAR_0->host->hostdata;
 struct DeviceCtlBlk *VAR_2 = FUNC_1(VAR_1, VAR_0->id, VAR_0->lun);
 if (VAR_2)
  FUNC_0(VAR_1, VAR_2);
}
