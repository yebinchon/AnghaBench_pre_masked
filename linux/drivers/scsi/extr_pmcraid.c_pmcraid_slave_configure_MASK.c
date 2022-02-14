
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct scsi_device {scalar_t__ type; int allow_restart; scalar_t__ tagged_supported; int request_queue; scalar_t__ lun; int id; int channel; TYPE_1__* host; struct pmcraid_resource_entry* hostdata; } ;
struct pmcraid_resource_entry {int cfg_entry; } ;
struct TYPE_2__ {int unique_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct scsi_device *VAR_4)
{
 struct pmcraid_resource_entry *VAR_5 = VAR_4->hostdata;

 if (!VAR_5)
  return 0;


 if (FUNC_0(VAR_5->cfg_entry) &&
     VAR_4->type != VAR_3)
  return -VAR_0;

 FUNC_4("configuring %x:%x:%x:%x\n",
       VAR_4->host->unique_id,
       VAR_4->channel,
       VAR_4->id,
       (u8)VAR_4->lun);

 if (FUNC_0(VAR_5->cfg_entry)) {
  VAR_4->allow_restart = 1;
 } else if (FUNC_1(VAR_5->cfg_entry)) {
  VAR_4->allow_restart = 1;
  FUNC_3(VAR_4->request_queue,
         VAR_1);
  FUNC_2(VAR_4->request_queue,
          VAR_2);
 }




 if (!FUNC_0(VAR_5->cfg_entry) && !FUNC_1(VAR_5->cfg_entry))
  VAR_4->tagged_supported = 0;

 return 0;
}
