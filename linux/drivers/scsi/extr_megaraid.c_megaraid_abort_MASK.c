
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
typedef int adapter_t ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct scsi_cmnd*,int ) ;

__attribute__((used)) static int
FUNC_2(struct scsi_cmnd *VAR_1)
{
 adapter_t *VAR_2;
 int VAR_3;

 VAR_2 = (adapter_t *)VAR_1->device->host->hostdata;

 VAR_3 = FUNC_1(VAR_2, VAR_1, VAR_0);





 FUNC_0(VAR_2);

 return VAR_3;
}
