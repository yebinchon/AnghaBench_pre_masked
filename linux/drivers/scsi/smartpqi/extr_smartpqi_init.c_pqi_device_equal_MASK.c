
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_scsi_dev {scalar_t__ is_physical_device; scalar_t__ wwid; int volume_id; } ;


 scalar_t__ FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline bool FUNC_1(struct pqi_scsi_dev *VAR_0,
 struct pqi_scsi_dev *VAR_1)
{
 if (VAR_0->is_physical_device != VAR_1->is_physical_device)
  return 0;

 if (VAR_0->is_physical_device)
  return VAR_0->wwid == VAR_1->wwid;

 return FUNC_0(VAR_0->volume_id, VAR_1->volume_id,
  sizeof(VAR_0->volume_id)) == 0;
}
