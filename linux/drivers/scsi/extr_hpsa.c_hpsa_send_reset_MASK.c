
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hpsa_scsi_dev_t {int scsi3addr; } ;
struct ctlr_info {TYPE_1__* pdev; } ;
struct ErrorInfo {scalar_t__ CommandStatus; } ;
struct CommandList {struct ErrorInfo* err_info; struct hpsa_scsi_dev_t* device; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct CommandList* FUNC_0 (struct ctlr_info*) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct CommandList*,int ,struct ctlr_info*,int *,int ,int ,int ,int ) ;
 int FUNC_4 (struct ctlr_info*,struct CommandList*,int,int ) ;
 int FUNC_5 (struct ctlr_info*,struct CommandList*) ;

__attribute__((used)) static int FUNC_6(struct ctlr_info *VAR_3, struct hpsa_scsi_dev_t *VAR_4,
 u8 VAR_5, int VAR_6)
{
 int VAR_7 = VAR_0;
 struct CommandList *VAR_8;
 struct ErrorInfo *VAR_9;

 VAR_8 = FUNC_0(VAR_3);
 VAR_8->device = VAR_4;


 (void) FUNC_3(VAR_8, VAR_5, VAR_3, ((void*)0), 0, 0, VAR_4->scsi3addr, VAR_2);
 VAR_7 = FUNC_4(VAR_3, VAR_8, VAR_6, VAR_1);
 if (VAR_7) {
  FUNC_2(&VAR_3->pdev->dev, "Failed to send reset command\n");
  goto out;
 }


 VAR_9 = VAR_8->err_info;
 if (VAR_9->CommandStatus != 0) {
  FUNC_5(VAR_3, VAR_8);
  VAR_7 = -1;
 }
out:
 FUNC_1(VAR_3, VAR_8);
 return VAR_7;
}
