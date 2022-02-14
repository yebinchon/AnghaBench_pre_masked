
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_scsi_dev {int devtype; int scsi3addr; scalar_t__ is_expander_smp_device; } ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct pqi_scsi_dev *VAR_0)
{
 bool VAR_1;

 if (VAR_0->is_expander_smp_device)
  return 1;

 VAR_1 = 0;

 switch (VAR_0->devtype) {
 case 133:
 case 128:
 case 129:
 case 131:
 case 132:
  VAR_1 = 1;
  break;
 case 130:






  if (FUNC_0(VAR_0->scsi3addr))
   VAR_1 = 1;
  break;
 }

 return VAR_1;
}
