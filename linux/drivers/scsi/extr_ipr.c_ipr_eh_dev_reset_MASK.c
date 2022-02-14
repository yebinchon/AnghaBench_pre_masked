
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {struct ipr_resource_entry* device; } ;
struct ipr_resource_entry {scalar_t__ sata_port; TYPE_1__* host; struct ipr_resource_entry* hostdata; } ;
struct ipr_ioa_cfg {int dummy; } ;
struct TYPE_2__ {int host_lock; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_1 (struct ipr_resource_entry*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ipr_ioa_cfg*,struct ipr_resource_entry*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_4)
{
 int VAR_5;
 struct ipr_ioa_cfg *VAR_6;
 struct ipr_resource_entry *VAR_7;

 VAR_6 = (struct ipr_ioa_cfg *) VAR_4->device->host->hostdata;
 VAR_7 = VAR_4->device->hostdata;

 if (!VAR_7)
  return VAR_0;

 FUNC_3(VAR_4->device->host->host_lock);
 VAR_5 = FUNC_0(VAR_4);
 FUNC_4(VAR_4->device->host->host_lock);

 if (VAR_5 == VAR_1) {
  if (FUNC_1(VAR_7) && VAR_7->sata_port)
   VAR_5 = FUNC_2(VAR_6, VAR_7, VAR_3);
  else
   VAR_5 = FUNC_2(VAR_6, VAR_4->device, VAR_2);
 }

 return VAR_5;
}
