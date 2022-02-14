
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct scsi_device {int dummy; } ;
struct TYPE_3__ {int sas_address; } ;
struct TYPE_4__ {TYPE_1__ identify; } ;
struct sas_end_device {TYPE_2__ rphy; } ;


 struct sas_end_device* FUNC_0 (struct scsi_device*) ;

u64 FUNC_1(struct scsi_device *VAR_0)
{
 struct sas_end_device *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->rphy.identify.sas_address;
}
