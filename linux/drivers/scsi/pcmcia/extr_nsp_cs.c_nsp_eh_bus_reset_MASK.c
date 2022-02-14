
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
typedef int nsp_hw_data ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_1)
{
 nsp_hw_data *VAR_2 = (nsp_hw_data *)VAR_1->device->host->hostdata;

 FUNC_1(VAR_0, "SCpnt=0x%p", VAR_1);

 return FUNC_0(VAR_2);
}
