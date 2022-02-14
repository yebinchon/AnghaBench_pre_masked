
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_scsi_dev {int bay; int phys_connector; int box; int path_map; int active_path_index; int device_type; int queue_depth; int phy_connected_dev_type; int phys_box_on_bus; int box_index; } ;
struct pqi_ctrl_info {int dummy; } ;
struct bmic_identify_physical_device {int phys_bay_in_box; int alternate_paths_phys_connector; int alternate_paths_phys_box_on_port; int redundant_path_present_map; int active_path_number; int device_type; int current_queue_depth_limit; int * phy_connected_dev_type; int phys_box_on_bus; int box_index; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct bmic_identify_physical_device*,int ,int) ;
 int FUNC_3 (struct pqi_ctrl_info*,struct pqi_scsi_dev*,struct bmic_identify_physical_device*,int) ;

__attribute__((used)) static void FUNC_4(struct pqi_ctrl_info *VAR_1,
 struct pqi_scsi_dev *VAR_2,
 struct bmic_identify_physical_device *VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));

 VAR_4 = FUNC_3(VAR_1, VAR_2,
  VAR_3, sizeof(*VAR_3));
 if (VAR_4) {
  VAR_2->queue_depth = VAR_0;
  return;
 }
 VAR_2->box_index = VAR_3->box_index;
 VAR_2->phys_box_on_bus = VAR_3->phys_box_on_bus;
 VAR_2->phy_connected_dev_type = VAR_3->phy_connected_dev_type[0];
 VAR_2->queue_depth =
  FUNC_0(&VAR_3->current_queue_depth_limit);
 VAR_2->device_type = VAR_3->device_type;
 VAR_2->active_path_index = VAR_3->active_path_number;
 VAR_2->path_map = VAR_3->redundant_path_present_map;
 FUNC_1(&VAR_2->box,
  &VAR_3->alternate_paths_phys_box_on_port,
  sizeof(VAR_2->box));
 FUNC_1(&VAR_2->phys_connector,
  &VAR_3->alternate_paths_phys_connector,
  sizeof(VAR_2->phys_connector));
 VAR_2->bay = VAR_3->phys_bay_in_box;
}
