
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpsa_scsi_dev_t {scalar_t__ offload_to_be_enabled; int queue_depth; int offload_to_mirror; scalar_t__ offload_config; int hba_ioaccel_enabled; int ioaccel_handle; int raid_map; int raid_level; } ;
struct ctlr_info {TYPE_1__** dev; } ;
struct TYPE_2__ {scalar_t__ offload_enabled; scalar_t__ offload_to_be_enabled; int queue_depth; int offload_to_mirror; scalar_t__ offload_config; int hba_ioaccel_enabled; int ioaccel_handle; int raid_map; int raid_level; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ctlr_info*,TYPE_1__*,char*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct ctlr_info *VAR_2,
 int VAR_3, struct hpsa_scsi_dev_t *VAR_4)
{

 FUNC_0(VAR_3 < 0 || VAR_3 >= VAR_0);


 VAR_2->dev[VAR_3]->raid_level = VAR_4->raid_level;




 VAR_2->dev[VAR_3]->ioaccel_handle = VAR_4->ioaccel_handle;


 if (VAR_4->offload_config && VAR_4->offload_to_be_enabled) {
  VAR_2->dev[VAR_3]->raid_map = VAR_4->raid_map;
  VAR_2->dev[VAR_3]->ioaccel_handle = VAR_4->ioaccel_handle;
 }
 if (VAR_4->offload_to_be_enabled) {
  VAR_2->dev[VAR_3]->ioaccel_handle = VAR_4->ioaccel_handle;
  FUNC_2();
 }
 VAR_2->dev[VAR_3]->hba_ioaccel_enabled = VAR_4->hba_ioaccel_enabled;
 VAR_2->dev[VAR_3]->offload_config = VAR_4->offload_config;
 VAR_2->dev[VAR_3]->offload_to_mirror = VAR_4->offload_to_mirror;
 VAR_2->dev[VAR_3]->queue_depth = VAR_4->queue_depth;






 VAR_2->dev[VAR_3]->offload_to_be_enabled = VAR_4->offload_to_be_enabled;




 if (!VAR_4->offload_to_be_enabled)
  VAR_2->dev[VAR_3]->offload_enabled = 0;

 FUNC_1(VAR_1, VAR_2, VAR_2->dev[VAR_3], "updated");
}
