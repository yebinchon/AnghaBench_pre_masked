
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct mts_desc {int dummy; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__* hostdata; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct mts_desc*) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_1)
{
 struct mts_desc* VAR_2 = (struct mts_desc*)(VAR_1->device->host->hostdata[0]);

 FUNC_0();

 FUNC_1(VAR_2);

 return VAR_0;
}
