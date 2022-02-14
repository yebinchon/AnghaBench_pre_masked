
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {struct esp_lun_data* hostdata; } ;
struct esp_lun_data {scalar_t__ num_tagged; } ;
struct esp_cmd_entry {TYPE_1__* cmd; } ;
struct esp {int dummy; } ;
struct TYPE_2__ {struct scsi_device* device; } ;


 int FUNC_0 (struct scsi_device*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct esp *VAR_0, struct esp_cmd_entry *VAR_1)
{
 struct scsi_device *VAR_2 = VAR_1->cmd->device;
 struct esp_lun_data *VAR_3 = VAR_2->hostdata;

 FUNC_0(VAR_2, VAR_3->num_tagged - 1);
}
