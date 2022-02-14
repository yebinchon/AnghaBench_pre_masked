
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct sas_end_device {scalar_t__ tlr_enabled; } ;


 struct sas_end_device* FUNC_0 (struct scsi_device*) ;

void
FUNC_1(struct scsi_device *VAR_0)
{
 struct sas_end_device *VAR_1 = FUNC_0(VAR_0);

 VAR_1->tlr_enabled = 0;
}
