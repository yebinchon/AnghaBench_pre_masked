
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_scsi_dev {int * sdev; int * sas_port; scalar_t__ is_expander_smp_device; } ;



__attribute__((used)) static inline bool FUNC_0(struct pqi_scsi_dev *VAR_0)
{
 if (VAR_0->is_expander_smp_device)
  return VAR_0->sas_port != ((void*)0);

 return VAR_0->sdev != ((void*)0);
}
