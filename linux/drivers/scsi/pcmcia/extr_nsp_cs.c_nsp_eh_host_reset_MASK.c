
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
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_2)
{
 nsp_hw_data *VAR_3 = (nsp_hw_data *)VAR_2->device->host->hostdata;

 FUNC_0(VAR_0, "in");

 FUNC_1(VAR_3);

 return VAR_1;
}
