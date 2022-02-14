
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {TYPE_1__* hw; } ;
struct qla27xx_fwdt_template {int* firmware_version; } ;
struct TYPE_2__ {int fw_major_version; int fw_minor_version; int fw_subminor_version; int fw_attributes_h; int fw_attributes; int* fw_attributes_ext; } ;



__attribute__((used)) static void
FUNC_0(struct scsi_qla_host *VAR_0,
    struct qla27xx_fwdt_template *VAR_1)
{
 VAR_1->firmware_version[0] = VAR_0->hw->fw_major_version;
 VAR_1->firmware_version[1] = VAR_0->hw->fw_minor_version;
 VAR_1->firmware_version[2] = VAR_0->hw->fw_subminor_version;
 VAR_1->firmware_version[3] =
     VAR_0->hw->fw_attributes_h << 16 | VAR_0->hw->fw_attributes;
 VAR_1->firmware_version[4] =
     VAR_0->hw->fw_attributes_ext[1] << 16 | VAR_0->hw->fw_attributes_ext[0];
}
