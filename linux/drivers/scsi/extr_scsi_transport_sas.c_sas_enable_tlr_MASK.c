
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct sas_end_device {int tlr_enabled; } ;


 struct sas_end_device* FUNC_0 (struct scsi_device*) ;
 unsigned int FUNC_1 (struct scsi_device*) ;

void FUNC_2(struct scsi_device *VAR_0)
{
 unsigned int VAR_1 = 0;
 VAR_1 = FUNC_1(VAR_0);

 if (VAR_1) {
  struct sas_end_device *VAR_2 = FUNC_0(VAR_0);

  VAR_2->tlr_enabled = 1;
 }

 return;
}
