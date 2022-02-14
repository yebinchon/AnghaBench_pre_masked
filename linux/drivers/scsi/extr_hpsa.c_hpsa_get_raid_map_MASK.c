
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int structure_size; } ;
struct hpsa_scsi_dev_t {TYPE_2__ raid_map; } ;
struct ctlr_info {TYPE_1__* pdev; } ;
struct ErrorInfo {scalar_t__ CommandStatus; } ;
struct CommandList {struct ErrorInfo* err_info; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct CommandList* FUNC_0 (struct ctlr_info*) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct CommandList*,int ,struct ctlr_info*,TYPE_2__*,int,int ,unsigned char*,int ) ;
 int FUNC_4 (struct ctlr_info*,int,TYPE_2__*) ;
 int FUNC_5 (struct ctlr_info*,struct CommandList*,int ,int ) ;
 int FUNC_6 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ctlr_info *VAR_5,
 unsigned char *VAR_6, struct hpsa_scsi_dev_t *VAR_7)
{
 int VAR_8 = 0;
 struct CommandList *VAR_9;
 struct ErrorInfo *VAR_10;

 VAR_9 = FUNC_0(VAR_5);

 if (FUNC_3(VAR_9, VAR_2, VAR_5, &VAR_7->raid_map,
   sizeof(VAR_7->raid_map), 0,
   VAR_6, VAR_4)) {
  FUNC_2(&VAR_5->pdev->dev, "hpsa_get_raid_map fill_cmd failed\n");
  FUNC_1(VAR_5, VAR_9);
  return -1;
 }
 VAR_8 = FUNC_5(VAR_5, VAR_9, VAR_1,
   VAR_3);
 if (VAR_8)
  goto out;
 VAR_10 = VAR_9->err_info;
 if (VAR_10->CommandStatus != 0 && VAR_10->CommandStatus != VAR_0) {
  FUNC_6(VAR_5, VAR_9);
  VAR_8 = -1;
  goto out;
 }
 FUNC_1(VAR_5, VAR_9);


 if (FUNC_7(VAR_7->raid_map.structure_size) >
    sizeof(VAR_7->raid_map)) {
  FUNC_2(&VAR_5->pdev->dev, "RAID map size is too large!\n");
  VAR_8 = -1;
 }
 FUNC_4(VAR_5, VAR_8, &VAR_7->raid_map);
 return VAR_8;
out:
 FUNC_1(VAR_5, VAR_9);
 return VAR_8;
}
