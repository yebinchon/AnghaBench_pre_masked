
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_scsi_dev {int devtype; scalar_t__ is_expander_smp_device; int is_physical_device; } ;






__attribute__((used)) static inline bool FUNC_0(struct pqi_scsi_dev *VAR_0)
{
 if (!VAR_0->is_physical_device)
  return 0;

 if (VAR_0->is_expander_smp_device)
  return 1;

 switch (VAR_0->devtype) {
 case 130:
 case 128:
 case 129:
  return 1;
 }

 return 0;
}
