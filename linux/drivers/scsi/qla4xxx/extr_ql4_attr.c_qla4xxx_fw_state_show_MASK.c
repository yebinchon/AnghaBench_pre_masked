
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int firmware_state; int addl_fw_state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (char*,int ,char*,int,int ) ;
 struct scsi_qla_host* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct scsi_qla_host *VAR_4 = FUNC_3(FUNC_0(VAR_1));

 FUNC_1(VAR_4);
 return FUNC_2(VAR_3, VAR_0, "0x%08X%8X\n", VAR_4->firmware_state,
   VAR_4->addl_fw_state);
}
