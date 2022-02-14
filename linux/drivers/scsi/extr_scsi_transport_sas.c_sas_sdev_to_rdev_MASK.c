
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int sdev_target; } ;
struct TYPE_2__ {scalar_t__ device_type; } ;
struct sas_rphy {TYPE_1__ identify; } ;
struct sas_end_device {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct sas_end_device* FUNC_1 (struct sas_rphy*) ;
 struct sas_rphy* FUNC_2 (int ) ;

__attribute__((used)) static struct sas_end_device *FUNC_3(struct scsi_device *VAR_1)
{
 struct sas_rphy *VAR_2 = FUNC_2(VAR_1->sdev_target);
 struct sas_end_device *VAR_3;

 FUNC_0(VAR_2->identify.device_type != VAR_0);

 VAR_3 = FUNC_1(VAR_2);
 return VAR_3;
}
