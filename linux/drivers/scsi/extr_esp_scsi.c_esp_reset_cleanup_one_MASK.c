
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__* device; } ;
struct esp_cmd_entry {int flags; int list; struct scsi_cmnd* cmd; } ;
struct esp {int dummy; } ;
struct TYPE_2__ {int hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct esp_cmd_entry*,int ) ;
 int FUNC_1 (struct esp*,struct esp_cmd_entry*) ;
 int FUNC_2 (struct esp*,struct scsi_cmnd*) ;
 int FUNC_3 (struct esp*,struct esp_cmd_entry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_6(struct esp *VAR_2, struct esp_cmd_entry *VAR_3)
{
 struct scsi_cmnd *VAR_4 = VAR_3->cmd;

 FUNC_2(VAR_2, VAR_4);
 FUNC_0(VAR_3, VAR_4->device->hostdata);
 VAR_4->result = VAR_0 << 16;

 if (VAR_3->flags & VAR_1)
  FUNC_3(VAR_2, VAR_3);

 VAR_4->scsi_done(VAR_4);
 FUNC_4(&VAR_3->list);
 FUNC_1(VAR_2, VAR_3);
}
