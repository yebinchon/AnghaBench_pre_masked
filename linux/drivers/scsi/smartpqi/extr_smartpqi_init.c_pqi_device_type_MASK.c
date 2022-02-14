
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_scsi_dev {int devtype; scalar_t__ is_expander_smp_device; } ;


 char const* FUNC_0 (int ) ;

__attribute__((used)) static inline const char *FUNC_1(struct pqi_scsi_dev *VAR_0)
{
 if (VAR_0->is_expander_smp_device)
  return "Enclosure SMP    ";

 return FUNC_0(VAR_0->devtype);
}
