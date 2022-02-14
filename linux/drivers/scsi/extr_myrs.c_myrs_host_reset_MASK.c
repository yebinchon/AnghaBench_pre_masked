
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct myrs_hba {int io_base; int (* reset ) (int ) ;} ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 struct myrs_hba* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct scsi_cmnd *VAR_1)
{
 struct Scsi_Host *VAR_2 = VAR_1->device->host;
 struct myrs_hba *VAR_3 = FUNC_0(VAR_2);

 VAR_3->reset(VAR_3->io_base);
 return VAR_0;
}
