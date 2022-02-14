
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_scsi_dev {int target_lun_valid; int device_offline; int * raid_map; int raid_bypass_enabled; int raid_bypass_configured; scalar_t__ offload_to_mirror; int phys_connector; int box; int phy_connected_dev_type; int phys_box_on_bus; int box_index; int bay; int path_map; int active_path_index; int volume_status; int aio_handle; int queue_depth; int raid_level; int sas_address; int model; int vendor; int aio_enabled; int is_expander_smp_device; int is_external_raid_device; int is_physical_device; int lun; int target; int bus; int device_type; int devtype; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct pqi_scsi_dev *VAR_0,
 struct pqi_scsi_dev *VAR_1)
{
 VAR_0->devtype = VAR_1->devtype;
 VAR_0->device_type = VAR_1->device_type;
 VAR_0->bus = VAR_1->bus;
 if (VAR_1->target_lun_valid) {
  VAR_0->target = VAR_1->target;
  VAR_0->lun = VAR_1->lun;
  VAR_0->target_lun_valid = 1;
 }



 VAR_0->is_physical_device = VAR_1->is_physical_device;
 VAR_0->is_external_raid_device =
  VAR_1->is_external_raid_device;
 VAR_0->is_expander_smp_device =
  VAR_1->is_expander_smp_device;
 VAR_0->aio_enabled = VAR_1->aio_enabled;
 FUNC_1(VAR_0->vendor, VAR_1->vendor,
  sizeof(VAR_0->vendor));
 FUNC_1(VAR_0->model, VAR_1->model,
  sizeof(VAR_0->model));
 VAR_0->sas_address = VAR_1->sas_address;
 VAR_0->raid_level = VAR_1->raid_level;
 VAR_0->queue_depth = VAR_1->queue_depth;
 VAR_0->aio_handle = VAR_1->aio_handle;
 VAR_0->volume_status = VAR_1->volume_status;
 VAR_0->active_path_index = VAR_1->active_path_index;
 VAR_0->path_map = VAR_1->path_map;
 VAR_0->bay = VAR_1->bay;
 VAR_0->box_index = VAR_1->box_index;
 VAR_0->phys_box_on_bus = VAR_1->phys_box_on_bus;
 VAR_0->phy_connected_dev_type =
  VAR_1->phy_connected_dev_type;
 FUNC_1(VAR_0->box, VAR_1->box,
  sizeof(VAR_0->box));
 FUNC_1(VAR_0->phys_connector, VAR_1->phys_connector,
  sizeof(VAR_0->phys_connector));
 VAR_0->offload_to_mirror = 0;
 FUNC_0(VAR_0->raid_map);
 VAR_0->raid_map = VAR_1->raid_map;
 VAR_0->raid_bypass_configured =
  VAR_1->raid_bypass_configured;
 VAR_0->raid_bypass_enabled =
  VAR_1->raid_bypass_enabled;
 VAR_0->device_offline = 0;


 VAR_1->raid_map = ((void*)0);
}
