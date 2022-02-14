
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int host; } ;
struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;struct scsi_device* device; } ;
struct esp_cmd_priv {scalar_t__ num_sg; } ;
struct esp_cmd_entry {int list; struct scsi_cmnd* cmd; } ;
struct esp {int queued_cmds; } ;


 struct esp_cmd_priv* FUNC_0 (struct scsi_cmnd*) ;
 int VAR_0 ;
 struct esp_cmd_entry* FUNC_1 (struct esp*) ;
 int FUNC_2 (struct esp*) ;
 int FUNC_3 (int *,int *) ;
 struct esp* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_1, void (*VAR_2)(struct scsi_cmnd *))
{
 struct scsi_device *VAR_3 = VAR_1->device;
 struct esp *VAR_4 = FUNC_4(VAR_3->host);
 struct esp_cmd_priv *VAR_5;
 struct esp_cmd_entry *VAR_6;

 VAR_6 = FUNC_1(VAR_4);
 if (!VAR_6)
  return VAR_0;

 VAR_6->cmd = VAR_1;

 VAR_1->scsi_done = VAR_2;

 VAR_5 = FUNC_0(VAR_1);
 VAR_5->num_sg = 0;

 FUNC_3(&VAR_6->list, &VAR_4->queued_cmds);

 FUNC_2(VAR_4);

 return 0;
}
