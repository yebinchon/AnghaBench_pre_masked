
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_scsi_dev_t {int hba_ioaccel_enabled; scalar_t__ queue_depth; scalar_t__ ioaccel_handle; } ;
struct ext_report_lun_entry {int device_flags; int * lunid; scalar_t__ ioaccel_handle; } ;
struct ctlr_info {int dummy; } ;
struct bmic_identify_physical_device {int current_queue_depth_limit; } ;
struct ReportExtendedLUNdata {struct ext_report_lun_entry* LUN; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ctlr_info*,int *,int ,struct bmic_identify_physical_device*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct bmic_identify_physical_device*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ctlr_info *VAR_2,
  struct hpsa_scsi_dev_t *VAR_3,
  struct ReportExtendedLUNdata *VAR_4, int VAR_5,
  struct bmic_identify_physical_device *VAR_6)
{
 int VAR_7;
 struct ext_report_lun_entry *VAR_8;

 VAR_8 = &VAR_4->LUN[VAR_5];

 VAR_3->ioaccel_handle = VAR_8->ioaccel_handle;
 if ((VAR_8->device_flags & 0x08) && VAR_3->ioaccel_handle)
  VAR_3->hba_ioaccel_enabled = 1;
 FUNC_3(VAR_6, 0, sizeof(*VAR_6));
 VAR_7 = FUNC_1(VAR_2, &VAR_8->lunid[0],
   FUNC_0(&VAR_8->lunid[0]), VAR_6,
   sizeof(*VAR_6));
 if (!VAR_7)



  VAR_3->queue_depth =
   FUNC_2(VAR_6->current_queue_depth_limit) -
    2;
 else
  VAR_3->queue_depth = 7;
}
