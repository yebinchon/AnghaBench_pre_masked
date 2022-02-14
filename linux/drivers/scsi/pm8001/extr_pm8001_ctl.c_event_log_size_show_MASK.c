
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_ha_struct {struct pm8001_hba_info* lldd_ha; } ;
struct TYPE_3__ {int event_log_size; } ;
struct TYPE_4__ {TYPE_1__ pm80xx_tbl; } ;
struct pm8001_hba_info {TYPE_2__ main_cfg_tbl; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_1(VAR_1);
 struct sas_ha_struct *VAR_5 = FUNC_0(VAR_4);
 struct pm8001_hba_info *VAR_6 = VAR_5->lldd_ha;

 return FUNC_2(VAR_3, VAR_0, "%d\n",
  VAR_6->main_cfg_tbl.pm80xx_tbl.event_log_size);
}
