
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_scsi_dev_t {int hba_ioaccel_enabled; int bay; int phys_connector; int box; int path_map; int active_path_index; scalar_t__ ioaccel_handle; } ;
struct ext_report_lun_entry {int device_flags; } ;
struct bmic_identify_physical_device {int phys_bay_in_box; int alternate_paths_phys_connector; int alternate_paths_phys_box_on_port; int redundant_path_present_map; int active_path_number; } ;
struct ReportExtendedLUNdata {struct ext_report_lun_entry* LUN; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(struct hpsa_scsi_dev_t *VAR_0,
 struct ReportExtendedLUNdata *VAR_1, int VAR_2,
 struct bmic_identify_physical_device *VAR_3)
{
 struct ext_report_lun_entry *VAR_4 = &VAR_1->LUN[VAR_2];

 if ((VAR_4->device_flags & 0x08) && VAR_0->ioaccel_handle)
  VAR_0->hba_ioaccel_enabled = 1;

 FUNC_0(&VAR_0->active_path_index,
  &VAR_3->active_path_number,
  sizeof(VAR_0->active_path_index));
 FUNC_0(&VAR_0->path_map,
  &VAR_3->redundant_path_present_map,
  sizeof(VAR_0->path_map));
 FUNC_0(&VAR_0->box,
  &VAR_3->alternate_paths_phys_box_on_port,
  sizeof(VAR_0->box));
 FUNC_0(&VAR_0->phys_connector,
  &VAR_3->alternate_paths_phys_connector,
  sizeof(VAR_0->phys_connector));
 FUNC_0(&VAR_0->bay,
  &VAR_3->phys_bay_in_box,
  sizeof(VAR_0->bay));
}
