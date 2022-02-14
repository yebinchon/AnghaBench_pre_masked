
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fw_major; int fw_minor; int fw_patch; int fw_build; } ;
struct scsi_qla_host {TYPE_1__ fw_info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (char*,int ,char*,int,int,int,int) ;
 struct scsi_qla_host* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1,
   struct device_attribute *VAR_2, char *VAR_3)
{
 struct scsi_qla_host *VAR_4 = FUNC_3(FUNC_0(VAR_1));

 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_3, VAR_0, "%d.%02d.%02d (%x)\n",
    VAR_4->fw_info.fw_major, VAR_4->fw_info.fw_minor,
    VAR_4->fw_info.fw_patch, VAR_4->fw_info.fw_build);
 else
  return FUNC_2(VAR_3, VAR_0, "%d.%02d.%02d.%02d\n",
    VAR_4->fw_info.fw_major, VAR_4->fw_info.fw_minor,
    VAR_4->fw_info.fw_patch, VAR_4->fw_info.fw_build);
}
