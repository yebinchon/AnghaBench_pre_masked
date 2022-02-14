
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_scsi_dev_t {scalar_t__ devtype; scalar_t__ bus; int vendor; int model; int device_id; int scsi3addr; } ;


 scalar_t__ FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct hpsa_scsi_dev_t *VAR_0,
 struct hpsa_scsi_dev_t *VAR_1)
{




 if (FUNC_0(VAR_0->scsi3addr, VAR_1->scsi3addr,
  sizeof(VAR_0->scsi3addr)) != 0)
  return 0;
 if (FUNC_0(VAR_0->device_id, VAR_1->device_id,
  sizeof(VAR_0->device_id)) != 0)
  return 0;
 if (FUNC_0(VAR_0->model, VAR_1->model, sizeof(VAR_0->model)) != 0)
  return 0;
 if (FUNC_0(VAR_0->vendor, VAR_1->vendor, sizeof(VAR_0->vendor)) != 0)
  return 0;
 if (VAR_0->devtype != VAR_1->devtype)
  return 0;
 if (VAR_0->bus != VAR_1->bus)
  return 0;
 return 1;
}
