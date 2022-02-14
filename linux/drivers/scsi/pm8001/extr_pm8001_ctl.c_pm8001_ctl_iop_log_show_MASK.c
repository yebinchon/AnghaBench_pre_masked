
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sas_ha_struct {struct pm8001_hba_info* lldd_ha; } ;
struct TYPE_8__ {TYPE_3__* region; } ;
struct TYPE_5__ {int event_log_size; } ;
struct TYPE_6__ {TYPE_1__ pm80xx_tbl; } ;
struct pm8001_hba_info {TYPE_4__ memoryMap; TYPE_2__ main_cfg_tbl; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;
struct TYPE_7__ {scalar_t__ virt_ptr; } ;


 size_t VAR_0 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_1(VAR_1);
 struct sas_ha_struct *VAR_5 = FUNC_0(VAR_4);
 struct pm8001_hba_info *VAR_6 = VAR_5->lldd_ha;
 char *VAR_7 = VAR_3;
 u32 VAR_8 =
  VAR_6->main_cfg_tbl.pm80xx_tbl.event_log_size / 1024;
 static u32 VAR_9, VAR_10, VAR_11;
 u32 VAR_12 = 32;
 u32 VAR_13 = (VAR_8 * 1024) / (VAR_12 * 4);
 u32 *VAR_14 = (u32 *)VAR_6->memoryMap.region[VAR_0].virt_ptr;

 if ((VAR_11 % VAR_13) == 0) {
  VAR_9 = 0;
  VAR_10 = VAR_12;
  VAR_11 = 0;
 } else {
  VAR_9 = VAR_10;
  VAR_10 = VAR_10 + VAR_12;
 }

 for (; VAR_9 < VAR_10; VAR_9++)
  VAR_7 += FUNC_2(VAR_7, "%08x ", *(VAR_14+VAR_9));
 VAR_11++;
 return VAR_7 - VAR_3;
}
