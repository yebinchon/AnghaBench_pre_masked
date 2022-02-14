
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pqi_scsi_dev {int raid_bypass_enabled; int aio_enabled; } ;
struct pqi_io_request {TYPE_2__* scmd; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct pqi_scsi_dev* hostdata; } ;



__attribute__((used)) static inline void FUNC_0(struct pqi_io_request *VAR_0)
{
 struct pqi_scsi_dev *VAR_1;

 VAR_1 = VAR_0->scmd->device->hostdata;
 VAR_1->raid_bypass_enabled = 0;
 VAR_1->aio_enabled = 0;
}
